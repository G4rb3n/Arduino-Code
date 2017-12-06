// 项目 - - LED闪烁

// 描述 - - LED每隔一秒交替亮灭一次

int ledPin = 10;

void setup() {
  // 设置ledPin为输出模式
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // 将值写入ledPin引脚
  digitalWrite(ledPin,HIGH);
  // 延迟100毫秒
  delay(100);
  digitalWrite(ledPin,LOW);
  delay(100);
}
