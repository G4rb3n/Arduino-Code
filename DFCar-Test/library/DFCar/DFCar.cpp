#include <Arduino.h>
#include "DFCar.h"


DFCar::DFCar(uint8_t Right_En, uint8_t Right_Pwm, uint8_t Left_En, uint8_t Left_Pwm)
{

	_Right_En = Right_En;
	_Right_Pwm = Right_Pwm;
	_Left_En = Left_En;
	_Left_Pwm = Left_Pwm;

	pinMode (_Right_En,OUTPUT);
	pinMode (_Right_Pwm,OUTPUT);
	pinMode (_Left_En,OUTPUT);
	pinMode (_Left_Pwm,OUTPUT);

}


void DFCar::Direction(bool Right_Dir,bool Left_Dir) 
{

	if(Right_Dir)
		_Right_Dir = HIGH;
	else
		_Right_Dir = LOW;

	digitalWrite(_Right_En,_Right_Dir);


	if(Left_Dir)
		_Left_Dir = HIGH;
	else
		_Left_Dir = LOW;

	digitalWrite(_Left_En,_Left_Dir);

}


void DFCar::Speed(int16_t Right_Speed,int16_t Left_Speed)
{

	analogWrite(_Right_Pwm,Right_Speed);
	analogWrite(_Left_Pwm,Left_Speed);

}