#include <DFCar.h>

DFCar Car(4,5,7,6,8,9,10,0);
int RMon = HIGH;
int LMon = HIGH;
unsigned long MonitorTime;

void setup() {
}

void loop() {
   RMon,LMon = Car.Monitor(); 

  if(RMon == LOW || LMon == LOW){
    Car.Direction(RBack,LBack);
    Car.Speed(Low_Speed,Low_Speed);
    delay(2000);

    Car.Direction(RBack,LAdvance);
    Car.Speed(Low_Speed,High_Speed);
    delay(1000);
  }

  RMon = HIGH;
  LMon = HIGH;
  Car.Direction(RAdvance,LAdvance);
  Car.Speed(High_Speed,High_Speed);
  delay(3000);
}











