// 项目 - - 舵机初动

// 描述 - - 让舵机动起来

#include <Servo.h>
Servo myservo;
int pos = 0;

void setup() {
  //舵机绑定到9号引脚
  myservo.attach(10);
}

void loop() {
  //顺时针转180度
  for(pos=0;pos<90;pos+=1) {
    myservo.write(pos);
    delay(10);
  }
  //逆时针转180度
  for(pos=90;pos>=1;pos-=1) {
    myservo.write(pos);
    delay(10);
  }
}










