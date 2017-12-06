// 项目 - - 互动交通灯

// 描述 - - 通过开关与LED互动模拟交通灯

int carRed = 12;            //汽车红灯
int carYellow = 11;         //汽车黄灯
int carGreen = 10;          //汽车绿灯

int button = 9;             //开关
int pedRed = 8;             //行人红灯
int pedGreen = 7;           //行人绿灯

int crossTime = 5000;       //过马路时间
unsigned long changeTime;   //记录按钮按下后的时间

void setup() {
  //所有LED灯设置为输出模式
  pinMode(carRed,OUTPUT);
  pinMode(carYellow,OUTPUT);
  pinMode(carGreen,OUTPUT);
  pinMode(pedRed,OUTPUT);
  pinMode(pedGreen,OUTPUT);

  //按钮设置为输入模式
  pinMode(button,INPUT);

  //初始化：汽车行，行人停
  digitalWrite(carGreen,HIGH);
  digitalWrite(pedRed,HIGH);
}

void loop() {
  int state = digitalRead(button);

  //监听按钮是否被按下，以及是否已等待5秒以上
  if(state == HIGH && (millis() - changeTime) > 5000){
    changeLights();   //调灯
  }
}

void changeLights() {
  //汽车绿灯灭，黄灯亮
  digitalWrite(carGreen,LOW);
  digitalWrite(carYellow,HIGH);
  delay(2000);

  //汽车黄灯灭，绿灯亮
  digitalWrite(carYellow,LOW);
  digitalWrite(carRed,HIGH);
  delay(1000);

  //行人红灯灭，绿灯亮
  digitalWrite(pedRed,LOW);
  digitalWrite(pedGreen,HIGH);

  //行人过马路
  delay(crossTime);

  //行人绿灯闪烁，提示过马路时间快结束
  for (int x=0;x<10;x++) {
    digitalWrite(pedGreen,HIGH);
    delay(250);
    digitalWrite(pedGreen,LOW);
    delay(250);
  }
  //行人红灯亮
  digitalWrite(pedRed,HIGH);
  delay(500);

  //汽车红灯亮
  digitalWrite(carRed,LOW);
  digitalWrite(carGreen,HIGH);

  //获取当前时间
  changeTime = millis();
}












