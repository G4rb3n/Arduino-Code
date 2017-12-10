// 项目 - - 感光灯

// 描述 - - 黑暗情况下，LED灯亮起，相反，在光亮环境下熄灭LED灯

int LED = 13;
int val = 0;

void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(0);
  Serial.println(val);

  //周围环境越亮，光敏电阻输出的值就越小
  if(val < 1020) {
    digitalWrite(LED,LOW);
  }
  else {
    digitalWrite(LED,HIGH);  
  }
  delay(10);
}












