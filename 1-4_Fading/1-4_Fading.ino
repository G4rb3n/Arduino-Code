// 项目 - - 呼吸灯

// 描述 - - 通过LED亮度的渐变达到呼吸灯的效果

int ledPin = 10;

void setup() {
      pinMode(ledPin,OUTPUT);
}

void loop() {
      fadeOn(1000,5);
      fadeOff(1000,5);
}

void fadeOn(unsigned int time,int increament) {
        for (byte value = 0 ; value < 255; value+=increament){
            //alalogWrite()用于将值写入PWM引脚(标有'~'符号的引脚)
            analogWrite(ledPin, value);
            delay(time/(255/increament));
        } 
}

void fadeOff(unsigned int time,int decreament) {
        for (byte value = 255; value >0; value-=decreament){ 
            analogWrite(ledPin, value); 
            delay(time/(255/decreament)); 
        }
}











