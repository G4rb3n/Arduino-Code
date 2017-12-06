// 项目 - - 炫彩LED

// 描述 - - 通过写入随机的RGB值到全彩LED中，达到随机变化的炫彩灯

int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup() {
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
}

void loop() {
  colorRGB(random(0,255),random(0,255),random(0,255));
  delay(1000);
}

void colorRGB(int red,int green, int blue) {
  //constrain用于限制第一个值的范围
  analogWrite(redPin,constrain(red,0,255));
  analogWrite(greenPin,constrain(green,0,255));
  analogWrite(bluePin,constrain(blue,0,255));
}









