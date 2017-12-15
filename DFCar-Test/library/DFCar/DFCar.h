#include <Arduino.h>

#define RAdvance HIGH
#define RBack LOW

#define LAdvance LOW
#define LBack HIGH

#define Low_Speed 150
#define High_Speed 250

class DFCar
{
	private:
		bool _Right_Dir;
		bool _Left_Dir;

		uint8_t _Right_En;
		uint8_t _Right_Pwm;
		uint8_t _Left_En;
		uint8_t _Left_Pwm;


	public:
		DFCar(uint8_t Right_En,uint8_t Right_Pwm,uint8_t Left_En,uint8_t Left_Pwm);

		void Direction(bool Right_Dir,bool Left_Dir);

		void Speed(int16_t Right_Speed,int16_t Left_Speed);
};