// 项目 - - 自制风扇

// 描述 - - 通过开关控制风扇

int buttonPin = 2;            //开关连接到引脚2
int relayPin = 3;             //继电器连接到引脚3
int relayState = HIGH;        //继电器初始状态为HIGH
int buttonState;              //记录开关当前状态
int lastButtonState = LOW;    //记录开关前一个状态
long lastDebounceTime = 0;
long debounceDelay = 50;      //去除抖动时间

void setup() {
  pinMode(buttonPin,INPUT);
  pinMode(relayPin,OUTPUT);

  //设置继电器初始状态
  digitalWrite(relayPin,relayState);
}

void loop() {
  //reading用来存储开关的值
  int reading = digitalRead(buttonPin);

  // 一旦开关值与之前不一样，则记录当前时间
  if(reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  //等待50ms，再进行一次判断，这50ms为抖动时间，防止按键产生错误信号
  if((millis() - lastDebounceTime) > debounceDelay) {
    //如果开关值确实与之前不一样，则读取开关传出的值
    if(reading != buttonState) {
      buttonState = reading;

      //若开关被按下，那么就改变继电器的状态
      if(buttonState == HIGH) {
        relayState = !relayState;
      }
    }
  }
  //将新的状态值写入继电器
  digitalWrite(relayPin,relayState);

  //记录开关的状态值
  lastButtonState = reading;
}









