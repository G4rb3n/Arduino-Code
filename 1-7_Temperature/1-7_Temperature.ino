// 项目 - - 温度报警器

// 描述 - - 监控周围温度，若温度过高发出报警

int tonePin = 8;
float sinVal;
int toneVal;
unsigned long tepTimer = 0;

void setup() {
  pinMode(tonePin,OUTPUT);
  //设置串口监听的频道
  Serial.begin(9600);
}

void loop() {
  int val;
  double data;
  //从0号模拟口读值
  val = analogRead(0);
  //将读取的电压值转换成温度
  data = (double) val *(5/10.24);

  //温度超过27°C，则发出报警声
  if(data>27) {
    for(int x=0;x<180;x++) {
      sinVal = (sin(x*(3.14/180)));
      toneVal = 2000+(int(sinVal*1000));
      tone(tonePin,toneVal);
      delay(2);
    }
  }
  //低于27°C，则停止报警
  else {
    noTone(tonePin);
  }

  //时隔500毫秒就打印当前温度
  if(millis()-tepTimer>500) {
    tepTimer = millis();
    Serial.print("temperature : ");
    Serial.print(data);
    Serial.println("C");
  }
}










