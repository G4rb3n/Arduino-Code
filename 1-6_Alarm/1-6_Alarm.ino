// 项目 - - 报警器

// 描述 - - 通过写入一个正弦变化的值到蜂鸣器，即可达到报警的效果

int tonePin = 8;
float sinVal;
int toneVal;

void setup(){
    pinMode(tonePin,OUTPUT);
}

void loop(){
    for (int x=0;x<180;x++){
        //sinVal为正弦变化的值
        sinVal=(sin(x*(3.14/180)));
        //加上2000的基值让声音更大
        toneVal=2000+(int(sinVal*1000));
        //通过tone()函数将值写入蜂鸣器
        tone(tonePin, toneVal);
        delay(20);
    }
}
