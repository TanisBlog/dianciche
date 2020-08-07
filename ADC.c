
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



#include	"adc.h"


//========================================================================
// º¯Êý: void	ADC_Inilize(ADC_InitTypeDef *ADCx)
// ÃèÊö: ADC³õÊ¼»¯³ÌÐò.
// ²ÎÊý: ADCx: ½á¹¹²ÎÊý,Çë²Î¿¼adc.hÀïµÄ¶¨Òå.
// ·µ»Ø: none.
// °æ±¾: V1.0, 2012-10-22
//========================================================================
void	ADC_Inilize(ADC_InitTypeDef *ADCx)
{
	P1ASF = ADCx->ADC_Px;
	ADC_CONTR = (ADC_CONTR & ~ADC_90T) | ADCx->ADC_Speed;
	if(ADCx->ADC_Power == ENABLE)	ADC_CONTR |= 0x80;
	else							ADC_CONTR &= 0x7F;
	if(ADCx->ADC_AdjResult == ADC_RES_H2L8)	PCON2 |=  (1<<5);	//10Î»AD½á¹ûµÄ¸ß2Î»·ÅADC_RESµÄµÍ2Î»£¬µÍ8Î»ÔÚADC_RESL¡£
	else									PCON2 &= ~(1<<5);	//10Î»AD½á¹ûµÄ¸ß8Î»·ÅADC_RES£¬µÍ2Î»ÔÚADC_RESLµÄµÍ2Î»¡£
	if(ADCx->ADC_Interrupt == ENABLE)	EADC = 1;			//ÖÐ¶ÏÔÊÐí		ENABLE,DISABLE
	else								EADC = 0;
	if(ADCx->ADC_Polity == PolityHigh)	PADC = 1;		//ÓÅÏÈ¼¶ÉèÖÃ	PolityHigh,PolityLow
	else								PADC = 0;
}


//========================================================================
// º¯Êý: void	ADC_PowerControl(u8 pwr)
// ÃèÊö: ADCµçÔ´¿ØÖÆ³ÌÐò.
// ²ÎÊý: pwr: µçÔ´¿ØÖÆ,ENABLE»òDISABLE.
// ·µ»Ø: none.
// °æ±¾: V1.0, 2012-10-22
//========================================================================
void	ADC_PowerControl(uchar pwr)
{
	if(pwr == ENABLE)	ADC_CONTR |= 0x80;
	else				ADC_CONTR &= 0x7f;
}

//========================================================================
// º¯Êý: u16	Get_ADC10bitResult(u8 channel)
// ÃèÊö: ²éÑ¯·¨¶ÁÒ»´ÎADC½á¹û.
// ²ÎÊý: channel: Ñ¡ÔñÒª×ª»»µÄADC.
// ·µ»Ø: 10Î»ADC½á¹û.
// °æ±¾: V1.0, 2012-10-22
//========================================================================
uint	Get_ADC10bitResult(uchar channel)	//channel = 0~7
{
	uint	adc;
	uchar	i;

	if(channel > ADC_CH7)	return	1024;	//´íÎó,·µ»Ø1024,µ÷ÓÃµÄ³ÌÐòÅÐ¶Ï	
	ADC_RES = 0;
	ADC_RESL = 0;

	ADC_CONTR = (ADC_CONTR & 0xe0) | ADC_START | channel; 
	NOP(4);			//¶ÔADC_CONTR²Ù×÷ºóÒª4TÖ®ºó²ÅÄÜ·ÃÎÊ

	for(i=0; i<250; i++)		//³¬Ê±
	{
		if(ADC_CONTR & ADC_FLAG)
		{
			ADC_CONTR &= ~ADC_FLAG;
			if(PCON2 &  (1<<5))		//10Î»AD½á¹ûµÄ¸ß2Î»·ÅADC_RESµÄµÍ2Î»£¬µÍ8Î»ÔÚADC_RESL¡£
			{
				adc = (u16)(ADC_RES & 3);
				adc = (adc << 8) | ADC_RESL;
			}
			else		//10Î»AD½á¹ûµÄ¸ß8Î»·ÅADC_RES£¬µÍ2Î»ÔÚADC_RESLµÄµÍ2Î»¡£
			{
				adc = (u16)ADC_RES;
				adc = (adc << 2) | (ADC_RESL & 3);
			}
			return	adc;
		}
	}
	return	1024;	//´íÎó,·µ»Ø1024,µ÷ÓÃµÄ³ÌÐòÅÐ¶Ï
}


//========================================================================
// º¯Êý: void timer0_int (void) interrupt ADC_VECTOR
// ÃèÊö: ADCÖÐ¶Ïº¯Êý.
// ²ÎÊý: none.
// ·µ»Ø: none.
// °æ±¾: V1.0, 2012-10-22
//========================================================================
void ADC_int (void) interrupt ADC_VECTOR
{
	ADC_CONTR &= ~ADC_FLAG;
}
