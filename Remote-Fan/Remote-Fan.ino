// 项目 - - 遥控风扇

// 描述 - - 通过红外远程控制风扇

//初始化红外接口
#include <IRremote.h>
int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

//初始化继电器（电风扇）接口
int relayPin = 3;
int relayState = HIGH;

void setup() {
  irrecv.enableIRIn();
  pinMode(relayPin,OUTPUT);
  //初始情况电扇不启动
  digitalWrite(relayPin,relayState);
}

void loop() {
  if(irrecv.decode(&results)) {
    //收到开信号则向继电器写入低电平
    if(results.value == 0xFD00FF) {
      relayState = LOW;
      digitalWrite(relayPin,relayState);
    }
    //收到关信号则向继电器写入高电平
    else if(results.value == 0xFFFFFFFF) {
      relayState = HIGH;
      digitalWrite(relayPin,relayState);
    }
    //红外继续监听下一信号
    irrecv.resume();
  }
}
