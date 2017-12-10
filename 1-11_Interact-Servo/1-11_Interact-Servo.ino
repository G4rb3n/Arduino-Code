// 项目 - - 可控舵机

// 描述 - - 通过电位器控制舵机

#include <Servo.h>
Servo myservo;

int potpin = 0;
int val;

void setup() {
  myservo.attach(9);
}

void loop() {
  //读取电位器扭转的角度
  val = analogRead(potpin);
  //转换成舵机转动的度数
  val = map(val,0,1024,0,179);  
  myservo.write(val);
  delay(15);
}








