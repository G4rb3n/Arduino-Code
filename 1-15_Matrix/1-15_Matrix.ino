// 项目 - - 红外遥控数码管

// 描述 - - 远程控制数码管

void setup(){
  for(int pin = 2 ; pin <= 9 ; pin++){       // 设置数字引脚2~9为输出模式
      pinMode(pin, OUTPUT);
      digitalWrite(pin, HIGH);
  }
}

void loop() { 
  // 显示数字0          
  int n0[8]={0,0,0,1,0,0,0,1}; 
  //数字引脚2~9依次按数组n0[8]中的数据显示  
  for(int pin = 2; pin <= 9 ; pin++){ 
    digitalWrite(pin,n0[pin-2]);
  }
  delay(500);
    
  // 显示数字1 
  int n1[8]={0,1,1,1,1,1,0,1};
  // 数字引脚2~9依次按数组n1[8]中的数据显示
  for(int pin = 2; pin <= 9 ; pin++){
    digitalWrite(pin,n1[pin-2]);
  }
  delay(500);
    
  // 显示数字2
  int n2[8]={0,0,1,0,0,0,1,1};
  // 数字引脚2~9依次按数组n2[8]中的数据显示
  for(int pin = 2; pin <= 9 ; pin++){
    digitalWrite(pin,n2[pin-2]);
  }
  delay(500);  

  // 显示数字3
  int n3[8]={0,0,1,0,1,0,0,1};
  // 数字引脚2~9依次按数组n3[8]中的数据显示
  for(int pin = 2; pin <= 9 ; pin++){
    digitalWrite(pin,n3[pin-2]);
  }
  delay(500);  
    
  // 显示数字4
  int n4[8]={0,1,0,0,1,1,0,1};
  // 数字引脚2~9依次按数组n4[8]中的数据显示
  for(int pin = 2; pin <= 9 ; pin++){
    digitalWrite(pin,n4[pin-2]);
  }
  delay(500);  
    
  // 显示数字5 
  int n5[8]={1,0,0,0,1,0,0,1};
  // 数字引脚2~9依次按数组n5[8]中的数据显示
  for(int pin = 2; pin <= 9 ; pin++){
    digitalWrite(pin,n5[pin-2]);
  }
  delay(500); 
    
  // 显示数字6 
  int n6[8]={1,0,0,0,0,0,0,1};
  // 数字引脚2~9依次按数组n6[8]中的数据显示
  for(int pin = 2; pin <= 9 ; pin++){
    digitalWrite(pin,n6[pin-2]);
  }
  delay(500); 
    
  // 显示数字7 
  int n7[8]={0,0,1,1,1,1,0,1};
  // 数字引脚2~9依次按数组n7[8]中的数据显示
  for(int pin = 2; pin <= 9 ; pin++){
    digitalWrite(pin,n7[pin-2]);
  }
  delay(500); 
    
  // 显示数字8
  int n8[8]={0,0,0,0,0,0,0,1};
  // 数字引脚2~9依次按数组n8[8]中的数据显示
  for(int pin = 2; pin <= 9 ; pin++){
    digitalWrite(pin,n8[pin-2]);
  }
  delay(500); 
    
  // 显示数字9
  int n9[8]={0,0,0,0,1,1,0,1};
  // 数字引脚2~9依次按数组n9[8]中的数据显示
  for(int pin = 2; pin <= 9 ; pin++){
    digitalWrite(pin,n9[pin-2]);
  }
  delay(500);
}  
