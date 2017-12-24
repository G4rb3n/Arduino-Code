#include <DFCar.h>

DFCar Car(4,5,7,6); //控制4，5，6，7引脚

void setup() {
}

void loop() {
  Car.Direction(RAdvance,LBack);    //设置方向为左转
  Car.Speed(Low_Speed,Low_Speed);   //设置速度为低速
  delay(5000);                      //运行5秒
  Car.Direction(RAdvance,LAdvance); //设置方向为前进
  Car.Speed(High_Speed,High_Speed); //设置速度为高速
  delay(1000);                      //运行1秒
}
