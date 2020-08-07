#include "pwm.h"
#include	"STC15Fxxxx.H"
#include <math.h>

#include "OLED12864.h"
sbit IN1=P2^7;
sbit IN2=P2^6;
sbit IN3=P2^5;
sbit IN4=P2^4;

uint adc_L[5];		//adcµÄ5´ÎÊý¾Ý»ýÀÛÖµ
uint adc_R[5];

uint adc_L_data=0;		//adcÃ¿´ÎµÄ·µ»ØÖµ
uint adc_R_data=0;

uint adcL;		//×óÆ½¾ùÖµ
uint adcR;		//ÓÒÆ½¾ùÖµ
uint adc;		//Æ«²îÖµ

uint aflag;		//adc±êÖ¾Î»

uchar flag;
uchar pwm_LR=55;
uchar key_1=10;

float sum_left=0,sum_right=0;
float prop=0,last_prop=0;
int a[5]={4,9,32,105,350};
int b=500;
int e=0;

int ZKB1,ZKB2;

void PWM_figure()
{
	uchar number;
	for(number=0;number<5;number++)		//Öð´ÎÆ½¾ù
	{
		adc_L[number]=adc_L[number+1];
		adc_R[number]=adc_R[number+1];
	}
	adc_L[4]=adc_L_data;
	adc_R[4]=adc_R_data;
	
	for(number=0;number<5;number++)		//¼ÓÈ¨Æ½¾ùÖµ
	{
		sum_left+=adc_L[number]*a[number];
		sum_right+=adc_R[number]*a[number];
	}	
	sum_left=sum_left/b;
	sum_right=sum_right/b;
	if(sum_right+sum_left>0)
	prop=-100*(sum_right-sum_left)/(sum_right+sum_left);

	if(prop>0)
	{
		OLED_ShowNum(20,5,prop,4);
	}
	else
	{
		OLED_ShowChar(20,5,'-');
		OLED_ShowNum(28,5,-prop,4);
	}
}


/*void PWM_Control()
{
    e=(int)(key_1*prop+0.0*(prop-last_prop));
		last_prop=prop;
	ZKB1=e-pwm_LR;		//ZKB1=e-pwm_LR;
	ZKB3=-(e-pwm_LR);		//ZKB3=-0.6*pwm_LR;
	ZKB2=e+pwm_LR;		//ZKB2=e+pwm_LR;
	ZKB4=e+pwm_LR;		//ZKB4=0.6*pwm_LR;
	 if(ZKB1<=0)
	   {IN1=0;IN2=1;ZKB1=-ZKB1;}
		else {IN1=1;IN2=0;}
	 if(ZKB3<=0)
	   {IN5=0;IN6=1;ZKB3=-ZKB3;}
		 else {IN5=1;IN6=0;}
	 if(ZKB2>0)
	   {IN3=1;IN4=0;}
		 else {IN3=0;IN4=1;ZKB2=-ZKB2;}
	 if(ZKB4>0)
	   {IN7=1;IN8=0;}	
		 else {IN7=0;IN8=1;ZKB4=-ZKB4;}
}*/
/********************************fgz***********************************************/

void PWM_Control()
{
 //if(prop>-90&&prop<=-80)flag=0;
 //if(prop>=30&&prop<66)flag=1;
 if(prop>=35)flag=2;
 if(prop<=-35)flag=3;
 //if(prop)flag=4;
 //if(prop)flag=5;
 //if(prop)flag=6;
 if(prop<35&&prop>-35)flag=7;
switch(flag)
 {
	 //case 0:IN1=1;IN2=0;IN3=1;IN4=0;ZKB1=20;ZKB2=100;break;//xiaozuozhuan
	 //case 1:IN1=1;IN2=0;IN3=1;IN4=0;ZKB1=100;ZKB2=20;break;//xiaoyouzhuan
	 case 2:IN1=0;IN2=1;IN3=1;IN4=0;ZKB1=20;ZKB2=60;break;//dazuozhuazn
	 case 3:IN1=1;IN2=0;IN3=0;IN4=1;ZKB1=60;ZKB2=20;break;//dayouzhuan
	 //case 4:IN1=1;IN2=0;IN3=1;IN4=0;ZKB1=90;ZKB2=90;break;//shizhiwangdao
	 //case 5:IN2=1;IN1=0;IN3=1;IN4=0;ZKB1=40;ZKB2=40;break;//zhijiao_left
	 //case 6:IN1=1;IN2=0;IN4=1;IN3=0;ZKB1=40;ZKB2=40;break;//zhijiao_right
	 case 7: IN1=1;IN2=0;IN3=1;IN4=0;ZKB1=70;ZKB2=70;break;//zhixing
 }	 
}
/**
