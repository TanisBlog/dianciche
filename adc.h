
/*---------------------------------------------------------------------*/
/* --- STC MCU International Limited ----------------------------------*/
/* --- STC 1T Series MCU Demo Programme -------------------------------*/
/* --- Mobile: (86)13922805190 ----------------------------------------*/
/* --- Fax: 86-0513-55012956,55012947,55012969 ------------------------*/
/* --- Tel: 86-0513-55012928,55012929,55012966 ------------------------*/
/* --- Web: www.GXWMCU.com --------------------------------------------*/
/* --- QQ:  800003751 -------------------------------------------------*/
/* Èç¹ûÒªÔÚ³ÌÐòÖÐÊ¹ÓÃ´Ë´úÂë,ÇëÔÚ³ÌÐòÖÐ×¢Ã÷Ê¹ÓÃÁËºê¾§¿Æ¼¼µÄ×ÊÁÏ¼°³ÌÐò   */
/*---------------------------------------------------------------------*/


#ifndef	__ADC_H
#define	__ADC_H

#include	"config.h"
#include "common.h"

#define	ADC_P10		0x01	//IOÒý½Å Px.0
#define	ADC_P11		0x02	//IOÒý½Å Px.1
#define	ADC_P12		0x04	//IOÒý½Å Px.2
#define	ADC_P13		0x08	//IOÒý½Å Px.3
#define	ADC_P14		0x10	//IOÒý½Å Px.4
#define	ADC_P15		0x20	//IOÒý½Å Px.5
#define	ADC_P16		0x40	//IOÒý½Å Px.6
#define	ADC_P17		0x80	//IOÒý½Å Px.7
#define	ADC_P1_All	0xFF	//IOËùÓÐÒý½Å

#define ADC_90T		(3<<5)
#define ADC_180T	(2<<5)
#define ADC_360T	(1<<5)
#define ADC_540T	0
#define ADC_FLAG	(1<<4)	//Èí¼þÇå0
#define ADC_START	(1<<3)	//×Ô¶¯Çå0
#define ADC_CH0		0
#define ADC_CH1		1
#define ADC_CH2		2
#define ADC_CH3		3
#define ADC_CH4		4
#define ADC_CH5		5
#define ADC_CH6		6
#define ADC_CH7		7

#define ADC_RES_H2L8	1
#define ADC_RES_H8L2	0


typedef struct
{
	uchar	ADC_Px;			//ÉèÖÃÒª×öADCµÄIO,	ADC_P10 ~ ADC_P17,ADC_P1_All
	uchar	ADC_Speed;		//ADCËÙ¶È			ADC_90T,ADC_180T,ADC_360T,ADC_540T
	uchar	ADC_Power;		//ADC¹¦ÂÊÔÊÐí/¹Ø±Õ	ENABLE,DISABLE
	uchar	ADC_AdjResult;	//ADC½á¹ûµ÷Õû,	ADC_RES_H2L8,ADC_RES_H8L2
	uchar	ADC_Polity;		//ÓÅÏÈ¼¶ÉèÖÃ	PolityHigh,PolityLow
	uchar	ADC_Interrupt;	//ÖÐ¶ÏÔÊÐí		ENABLE,DISABLE
} ADC_InitTypeDef;

void	ADC_Inilize(ADC_InitTypeDef *ADCx);
void	ADC_PowerControl(uchar pwr);
unsigned int		Get_ADC10bitResult(uchar channel);	//channel = 0~7

#endif
