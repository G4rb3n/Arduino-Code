// 项目 - - 红外遥控灯

// 描述 - - 远程控制LED灯

#include <IRremote.h>
int RECV_PIN = 11;
int ledPin = 10;
boolean ledState = LOW;
//初始化一个红外类irrecv
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  //初始化红外，使其开始接受信号
  irrecv.enableIRIn();
  pinMode(ledPin,OUTPUT);
}

void loop() {
  //若红外收到信号，则打印收到的信号值
  if(irrecv.decode(&results)) {
    Serial.println(results.value,HEX);

    //若值为开关电源键，则LED灯亮起
    if(results.value == 0xFD00FF) {
      ledState = !ledState;
      digitalWrite(ledPin,ledState);
    }
    //继续等待下一信号
    irrecv.resume();
  }
}













