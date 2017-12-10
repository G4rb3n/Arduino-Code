// 项目 - - 震动探测

// 描述 - - 只要周围有震动，LED灯就会亮起，达到震动探测的效果

int SensorLED = 13;
int SensorINPUT = 3; 
unsigned char state = 0;

void setup() {
  pinMode(SensorLED,OUTPUT);
  pinMode(SensorINPUT,INPUT);

  //这里1为中断号，上面的引脚3对应的就是中断1
  //当中断1引脚由低电平变为高电平时，调用blink()函数
  attachInterrupt(1,blink,RISING);
}

void loop() {
  //LED引脚一直监听state值是否有被修改，若不为0则LED灯亮起
  if(state != 0) {
    state = 0;
    digitalWrite(SensorLED,HIGH);
    delay(500);
  }
  else {
    digitalWrite(SensorLED,LOW);
  }
}

void blink() {
  //修改state值
  state++;
}












