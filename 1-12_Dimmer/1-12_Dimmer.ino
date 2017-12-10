// 项目 - - 彩灯调光台

// 描述 - - 通过电位器调节LED灯颜色

int redPin = 9;
int greenPin = 10;
int bluePin = 11;

int potRedPin = 0; 
int potGreenPin = 1;
int potBluePin = 2;

void setup(){
    pinMode(redPin,OUTPUT);
    pinMode(greenPin,OUTPUT);
    pinMode(bluePin,OUTPUT);
    Serial.begin(9600);
}

void loop(){
   int potRed = analogRead(potRedPin);
   int potGreen = analogRead(potGreenPin);
   int potBlue = analogRead(potBluePin);

   int val1 = map(potRed,0,1023,0,255);
   int val2 = map(potGreen,0,1023,0,255);
   int val3 = map(potBlue,0,1023,0,255);
   
   Serial.print("Red:");                  
   Serial.print(val1);
   Serial.print("Green:");
   Serial.print(val2);
   Serial.print("Blue:");
   Serial.println(val3);

   //让RGB LED 呈现对应颜色
   colorRGB(val1,val2,val3);
}

  //该函数用于显示颜色
  void colorRGB(int red, int green, int blue){     
    analogWrite(redPin,constrain(red,0,255));
    analogWrite(greenPin,constrain(green,0,255));
    analogWrite(bluePin,constrain(blue,0,255));
}
