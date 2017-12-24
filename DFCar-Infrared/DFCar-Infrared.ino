int InfraredSensorPin = 8;

void setup()
{
  Serial.begin(57600);
  Serial.println("Start!");  
  pinMode(InfraredSensorPin,INPUT);
}

void loop()
{
  Serial.print("Infrared Switch Status:");
  Serial.println(digitalRead(InfraredSensorPin),BIN);
  delay(50);
}
