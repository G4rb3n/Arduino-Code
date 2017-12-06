// 项目 - - SOS信号

// 描述 - - 通过LED闪烁来发出SOS求救信号

int ledPin = 10;

void setup() {
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // 三个快闪烁来表示字母“S”
  for(int x=0;x<3;x++){
    digitalWrite(ledPin,HIGH);
    delay(150);
    digitalWrite(ledPin,LOW);
    delay(100);
  }

  //100毫秒延时产生字母之间的间隙
  delay(100);

  // 三个快闪烁来表示字母“O”
  for(int x=0;x<3;x++){
    digitalWrite(ledPin,HIGH);
    delay(400);
    digitalWrite(ledPin,LOW);
    delay(100);
  }

  //100毫秒延时产生字母之间的间隙
  delay(100);

  // 三个快闪烁来表示字母“S”
  for(int x=0;x<3;x++){
    digitalWrite(ledPin,HIGH);
    delay(150);
    digitalWrite(ledPin,LOW);
    delay(100);
  }

  // 在重复S.0.S信号前等待5秒
  delay(5000);
}




