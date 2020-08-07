#include "key.h"
#include "pwm.h"

void key_dowm()
{
	if(button_1==0)		//??1
	{
		delay_nms(10);
		while(!button_1);
	  key_1+=0.2;
	}
	
	if(button_2==0)		//??2
	{
		delay_nms(10);
		while(!button_2);
		key_1-=0.2;
	}
	
	if(button_3==0)		//??3
	{
		delay_nms(10);
		while(!button_3);
		pwm_LR++;
	}
	
	if(button_4==0)		//??4
	{
		delay_nms(10);
		while(!button_4);
		pwm_LR--;
	}
}
