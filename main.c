#include	"STC15Fxxxx.H"
#include "OLED12864.h"
//#include "intrins.h"
#include "common.h"
#include "pwm.h"
//#include "key.h"

	
sbit left_conduction=P1^2;  //ADC3  011    µç´Å´«¸ÐÆ÷(12)
sbit right_conduction=P1^3;  //ADC4  100(13)

sbit ENA=P2^3;
sbit ENB=P2^1;
uchar i=0;

/*uchar key_1=8.0;
uchar key_2=0;
uchar key_3=95;
uchar key_4=0;*/
extern uchar number;

extern uint adc_L_data;
extern uint adc_R_data;
extern uint adc_L[5];
extern uint adc_R[5];
extern int ZKB1,ZKB2;		//Õ¼¿Õ±Èshuzidaiding


void delay_nus(unsigned int ii)   //ÑÓÊ±£¬i>=12,
{
ii=ii/10;
while(ii--);
}

void delay_nms(unsigned int n)	//ÑÓÊ±nºÁÃë
{
n=n+1;
while(--n)
delay_nus(900);
}

void timer0_init()
{
  TMOD=0X00;
	TH0=(65536-50)/256;
	TL0=(65535-50)%256;
	EA=1;
	ET0=1;
	TR0=1;
}

void ADC_control()
{
	uchar flag;
	uint low1;
	P1ASF=0X0c;  //P1^2,P1^3,
	ADC_CONTR=0x82;
	delay_nms(10);
	ADC_CONTR=0x8a;
	delay_nms(1);
	flag=0;
	while(flag==0)
	{
		flag=ADC_CONTR&0x10;
	}		
	ADC_CONTR=0x82;	
	low1=ADC_RESL&0x03;
	adc_L_data=ADC_RES*4+low1;
	OLED_ShowNum(20,6,adc_L_data,4);
	
  ADC_RES=0;ADC_RESL=0;
	
	ADC_CONTR=0x83;
	delay_nms(10);
	ADC_CONTR=0x8b;
	delay_nms(1);
	flag=0;
	while(flag==0)
	{
		flag=ADC_CONTR&0x10;
	}
	ADC_CONTR=0x83;
	low1=ADC_RESL&0x03;
	adc_R_data=ADC_RES*4+low1;
	OLED_ShowNum(20,7,adc_R_data,4);
}

void main()
{
	timer0_init();
	OLED_Init();	
	while(1)
	{
		/*OLED_ShowNum(0,0,key_1,4);
		OLED_ShowNum(0,1,key_2,4);
	  OLED_ShowNum(0,2,key_3,4);
  	OLED_ShowNum(0,3,key_4,4);
		key_dowm();*/
		ADC_control();
		PWM_Control();
		PWM_figure();
	}
}	

void timer0() interrupt 1
{
 if(i<ZKB1)
 {
  ENA=1;
 }
 else
 {
  ENA=0;
 }
 if(i<ZKB2)
 {
  ENB=1;
 }
 else
 {
  ENB=0;
 }
 i++;
 if(i>=100){i=0;}
}
