// 项目 - - 温度报警器

// 描述 - - 监控周围温度，若温度过高发出报警

int tonePin = 8;
float sinVal;
int toneVal;
unsigned long tepTimer;

void setup() {
  pinMode(tonePin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int val;
  double data;
  val = analogRead(0);
  data = (double) val *(5/10.24);

  if(data>27) {
    for(int x=0;x<180;x++) {
      sinVal = (sin(x*(3.14/180)));
      toneVal = 2000+(int(sinVal*1000));
      tone(tonePin,toneVal);
      delay(200);
    }
  }
  else {
    noTone(tonePin);
  }
  
  if(millis()-tepTimer>500) {
    tepTimer = millis();
    Serial.print("temperature : ");
    Serial.print(data);
    Serial.println("C");
  }
}










