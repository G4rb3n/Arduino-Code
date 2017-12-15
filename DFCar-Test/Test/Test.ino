#include <DFCar.h>

DFCar Car(4,5,7,6);

void setup() {
}

void loop() {
  Car.Direction(RAdvance,LBack);
  Car.Speed(Middle_Speed,Middle_Speed);
  delay(5000);
  Car.Direction(RAdvance,LAdvance);
  Car.Speed(High_Speed,High_Speed);
  delay(1000);
}
