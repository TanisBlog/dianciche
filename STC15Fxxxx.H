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


#ifndef	_STC15Fxxxx_H
#define	_STC15Fxxxx_H
#define  MAIN_Fosc 11059200L
#include <intrins.h>

/*  BYTE Registers  */
sfr P0   = 0x80;
sfr SP   = 0x81;
sfr DPL  = 0x82;
sfr DPH  = 0x83;
sfr	S4CON = 0x84;
sfr	S4BUF = 0x85;
sfr PCON = 0x87;

sfr TCON = 0x88;
sfr TMOD = 0x89;
sfr TL0  = 0x8A;
sfr TL1  = 0x8B;
sfr TH0  = 0x8C;
sfr TH1  = 0x8D;
sfr	AUXR = 0x8E;
sfr WAKE_CLKO = 0x8F;
sfr INT_CLKO = 0x8F;
sfr	AUXR2    = 0x8F;

sfr RL_TL0  = 0x8A;
sfr RL_TL1  = 0x8B;
sfr RL_TH0  = 0x8C;
sfr RL_TH1  = 0x8D;


sfr P1   = 0x90;
sfr P1M1 = 0x91;	//P1M1.n,P1M0.n 	=00--->Standard,	01--->push-pull		Êµ¼ÊÉÏ1TµÄ¶¼Ò»Ñù
sfr P1M0 = 0x92;	//					=10--->pure input,	11--->open drain
sfr P0M1 = 0x93;	//P0M1.n,P0M0.n 	=00--->Standard,	01--->push-pull
sfr P0M0 = 0x94;	//					=10--->pure input,	11--->open drain
sfr P2M1 = 0x95;	//P2M1.n,P2M0.n 	=00--->Standard,	01--->push-pull
sfr P2M0 = 0x96;	//					=10--->pure input,	11--->open drain
sfr CLK_DIV = 0x97;
sfr PCON2   = 0x97;

sfr SCON  = 0x98;
sfr SBUF  = 0x99;
sfr S2CON = 0x9A;	//
sfr S2BUF = 0x9B;	//
sfr P1ASF = 0x9D;	//Ö»Ð´£¬Ä£ÄâÊäÈë(AD»òLVD)Ñ¡Ôñ

sfr P2    = 0xA0;
sfr BUS_SPEED = 0xA1;
sfr AUXR1 = 0xA2;
sfr P_SW1 = 0xA2;

sfr IE    = 0xA8;
sfr SADDR = 0xA9;
sfr WKTCL = 0xAA;	//»½ÐÑ¶¨Ê±Æ÷µÍ×Ö½Ú
sfr WKTCH = 0xAB;	//»½ÐÑ¶¨Ê±Æ÷¸ß×Ö½Ú
sfr	S3CON = 0xAC;
sfr S3BUF = 0xAD;
sfr IE2   = 0xAF;	//STC12C5A60S2ÏµÁÐ

sfr P3    = 0xB0;
sfr P3M1  = 0xB1;	//P3M1.n,P3M0.n 	=00--->Standard,	01--->push-pull
sfr P3M0  = 0xB2;	//					=10--->pure input,	11--->open drain
sfr P4M1  = 0xB3;	//P4M1.n,P4M0.n 	=00--->Standard,	01--->push-pull
sfr P4M0  = 0xB4;	//					=10--->pure input,	11--->open drain
sfr IP2   = 0xB5;	//STC12C5A60S2ÏµÁÐ
sfr IPH2  = 0xB6;	//STC12C5A60S2ÏµÁÐ
sfr IPH   = 0xB7;

sfr IP        = 0xB8;
sfr SADEN     = 0xB9;
sfr	P_SW2     = 0xBA;
sfr ADC_CONTR = 0xBC;	//´øADÏµÁÐ
sfr ADC_RES   = 0xBD;	//´øADÏµÁÐ			 1011 1101
sfr ADC_RESL  = 0xBE;	//´øADÏµÁÐ			 1011 1110

sfr P4        = 0xC0;
sfr WDT_CONTR = 0xC1;
sfr IAP_DATA  = 0xC2;
sfr IAP_ADDRH = 0xC3;
sfr IAP_ADDRL = 0xC4;
sfr IAP_CMD   = 0xC5;
sfr IAP_TRIG  = 0xC6;
sfr IAP_CONTR = 0xC7;

sfr ISP_DATA  = 0xC2;
sfr ISP_ADDRH = 0xC3;
sfr ISP_ADDRL = 0xC4;
sfr ISP_CMD   = 0xC5;
sfr ISP_TRIG  = 0xC6;
sfr ISP_CONTR = 0xC7;

sfr P5     = 0xC8;	//
sfr P5M1   = 0xC9;	//	P5M1.n,P5M0.n 	=00--->Standard,	01--->push-pull
sfr P5M0   = 0xCA;	//					=10--->pure input,	11--->open drain
sfr P6M1   = 0xCB;	//	P5M1.n,P5M0.n 	=00--->Standard,	01--->push-pull
sfr P6M0   = 0xCC;	//					=10--->pure input,	11--->open drain
sfr SPSTAT = 0xCD;	//
sfr SPCTL  = 0xCE;	//
sfr SPDAT  = 0xCF;	//

sfr PSW  = 0xD0;
sfr	T4T3M = 0xD1;
sfr	T4H  = 0xD2;
sfr	T4L  = 0xD3;
sfr	T3H  = 0xD4;
sfr	T3L  = 0xD5;
sfr	T2H  = 0xD6;
sfr	T2L  = 0xD7;

sfr	TH4  = 0xD2;
sfr	TL4  = 0xD3;
sfr	TH3  = 0xD4;
sfr	TL3  = 0xD5;
sfr	TH2  = 0xD6;
sfr	TL2  = 0xD7;

sfr	RL_T4H  = 0xD2;
sfr	RL_T4L  = 0xD3;
sfr	RL_T3H  = 0xD4;
sfr	RL_T3L  = 0xD5;
sfr	RL_T2H  = 0xD6;
sfr	RL_T2L  = 0xD7;

sfr CCON = 0xD8;	//
sfr CMOD = 0xD9;	//
sfr CCAPM0 = 0xDA;	//PCAÄ£¿é0µÄ¹¤×÷Ä£Ê½¼Ä´æÆ÷¡£
sfr CCAPM1 = 0xDB;	//PCAÄ£¿é1µÄ¹¤×÷Ä£Ê½¼Ä´æÆ÷¡£
sfr CCAPM2 = 0xDC;	//PCAÄ£¿é2µÄ¹¤×÷Ä£Ê½¼Ä´æÆ÷¡£

sfr ACC    = 0xE0;
sfr	P7M1   = 0xE1;
sfr	P7M0   = 0xE2;

sfr	P6     = 0xE8;
sfr CL     = 0xE9;	//
sfr CCAP0L = 0xEA;	//PCAÄ£¿é0µÄ²¶×½/±È½Ï¼Ä´æÆ÷µÍ8Î»¡£
sfr CCAP1L = 0xEB;	//PCAÄ£¿é1µÄ²¶×½/±È½Ï¼Ä´æÆ÷µÍ8Î»¡£
sfr CCAP2L = 0xEC;	//PCAÄ£¿é2µÄ²¶×½/±È½Ï¼Ä´æÆ÷µÍ8Î»¡£

sfr B      = 0xF0;
sfr PCA_PWM0 = 0xF2;	//PCAÄ£¿é0 PWM¼Ä´æÆ÷¡£
sfr PCA_PWM1 = 0xF3;	//PCAÄ£¿é1 PWM¼Ä´æÆ÷¡£
sfr PCA_PWM2 = 0xF4;	//PCAÄ£¿é2 PWM¼Ä´æÆ÷¡£

sfr	P7     = 0xF8;
sfr CH     = 0xF9;
sfr CCAP0H = 0xFA;		//PCAÄ£¿é0µÄ²¶×½/±È½Ï¼Ä´æÆ÷¸ß8Î»¡£
sfr CCAP1H = 0xFB;		//PCAÄ£¿é1µÄ²¶×½/±È½Ï¼Ä´æÆ÷¸ß8Î»¡£
sfr CCAP2H = 0xFC;		//PCAÄ£¿é2µÄ²¶×½/±È½Ï¼Ä´æÆ÷¸ß8Î»¡£


/*  BIT Registers  */
/*  PSW   */
sbit CY   = PSW^7;
sbit AC   = PSW^6;
sbit F0   = PSW^5;
sbit RS1  = PSW^4;
sbit RS0  = PSW^3;
sbit OV   = PSW^2;
sbit F1   = PSW^1;
sbit P    = PSW^0;

/*  TCON  */
sbit TF1  = TCON^7;	//¶¨Ê±Æ÷1Òç³öÖÐ¶Ï±êÖ¾Î»
sbit TR1  = TCON^6;	//¶¨Ê±Æ÷1ÔËÐÐ¿ØÖÆÎ»
sbit TF0  = TCON^5;	//¶¨Ê±Æ÷0Òç³öÖÐ¶Ï±êÖ¾Î»
sbit TR0  = TCON^4;	//¶¨Ê±Æ÷0ÔËÐÐ¿ØÖÆÎ»
sbit IE1  = TCON^3;	//ÍâÖÐ¶Ï1±êÖ¾Î»
sbit IT1  = TCON^2;	//ÍâÖÐ¶Ï1ÐÅºÅ·½Ê½¿ØÖÆÎ»£¬1£ºÏÂ½µÑØÖÐ¶Ï£¬0£ºÉÏÉýÏÂ½µ¾ùÖÐ¶Ï¡£
sbit IE0  = TCON^1;	//ÍâÖÐ¶Ï0±êÖ¾Î»
sbit IT0  = TCON^0;	//ÍâÖÐ¶Ï0ÐÅºÅ·½Ê½¿ØÖÆÎ»£¬1£ºÏÂ½µÑØÖÐ¶Ï£¬0£ºÉÏÉýÏÂ½µ¾ùÖÐ¶Ï¡£

/*  P0  */
sbit  P00 = P0^0;
sbit  P01 = P0^1;
sbit  P02 = P0^2;
sbit  P03 = P0^3;
sbit  P04 = P0^4;
sbit  P05 = P0^5;
sbit  P06 = P0^6;
sbit  P07 = P0^7;

/*  P1  */
sbit  P10 = P1^0;
sbit  P11 = P1^1;
sbit  P12 = P1^2;
sbit  P13 = P1^3;
sbit  P14 = P1^4;
sbit  P15 = P1^5;
sbit  P16 = P1^6;
sbit  P17 = P1^7;

sbit  RXD2      = P1^0;
sbit  TXD2      = P1^1;
sbit  CCP1      = P1^0;
sbit  CCP0      = P1^1;
sbit  SPI_SS    = P1^2;
sbit  SPI_MOSI  = P1^3;
sbit  SPI_MISO  = P1^4;
sbit  SPI_SCLK  = P1^5;

/*  P2  */
sbit  P20 = P2^0;
sbit  P21 = P2^1;
sbit  P22 = P2^2;
sbit  P23 = P2^3;
sbit  P24 = P2^4;
sbit  P25 = P2^5;
sbit  P26 = P2^6;
sbit  P27 = P2^7;

/*  P3  */
sbit  P30 = P3^0;
sbit  P31 = P3^1;
sbit  P32 = P3^2;
sbit  P33 = P3^3;
sbit  P34 = P3^4;
sbit  P35 = P3^5;
sbit  P36 = P3^6;
sbit  P37 = P3^7;

sbit RXD  = P3^0;
sbit TXD  = P3^1;
sbit INT0 = P3^2;
sbit INT1 = P3^3;
sbit T0   = P3^4;
sbit T1   = P3^5;
sbit WR   = P3^6;
sbit RD   = P3^7;
sbit CCP2  = P3^7;

sbit CLKOUT0   = P3^5;
sbit CLKOUT1   = P3^4;

/*  P4  */
sbit  P40 = P4^0;
sbit  P41 = P4^1;
sbit  P42 = P4^2;
sbit  P43 = P4^3;
sbit  P44 = P4^4;
sbit  P45 = P4^5;
sbit  P46 = P4^6;
sbit  P47 = P4^7;

/*  P5  */
sbit  P50 = P5^0;
sbit  P51 = P5^1;
sbit  P52 = P5^2;
sbit  P53 = P5^3;
sbit  P54 = P5^4;
sbit  P55 = P5^5;
sbit  P56 = P5^6;
sbit  P57 = P5^7;

/*  SCON  */
sbit SM0  = SCON^7;	//SM0/FE		SM0 SM1 = 00 ~ 11: ·½Ê½0~3
sbit SM1  = SCON^6;	//
sbit SM2  = SCON^5;	//¶à»úÍ¨Ñ¶
sbit REN  = SCON^4;	//½ÓÊÕÔÊÐí
sbit TB8  = SCON^3;	//·¢ËÍÊý¾ÝµÚ8Î»
sbit RB8  = SCON^2;	//½ÓÊÕÊý¾ÝµÚ8Î»
sbit TI   = SCON^1;	//·¢ËÍÖÐ¶Ï±êÖ¾Î»
sbit RI   = SCON^0;	//½ÓÊÕÖÐ¶Ï±êÖ¾Î»

/*  IE   */
sbit EA   = IE^7;	//ÖÐ¶ÏÔÊÐí×Ü¿ØÖÆÎ»
sbit ELVD = IE^6;	//µÍÑ¹¼à²âÖÐ¶ÏÔÊÐíÎ»
sbit EADC = IE^5;	//ADC ÖÐ¶Ï ÔÊÐíÎ»
sbit ES   = IE^4;	//´®ÐÐÖÐ¶Ï ÔÊÐí¿ØÖÆÎ»
sbit ET1  = IE^3;	//¶¨Ê±ÖÐ¶Ï1ÔÊÐí¿ØÖÆÎ»
sbit EX1  = IE^2;	//Íâ²¿ÖÐ¶Ï1ÔÊÐí¿ØÖÆÎ»
sbit ET0  = IE^1;	//¶¨Ê±ÖÐ¶Ï0ÔÊÐí¿ØÖÆÎ»
sbit EX0  = IE^0;	//Íâ²¿ÖÐ¶Ï0ÔÊÐí¿ØÖÆÎ»


/*  IP   */ 
/*
sbit PPCA = IP^7;	//PCA ÖÐ¶Ï ÓÅÏÈ¼¶Éè¶¨Î»
sbit PLVD = IP^6; 	//µÍÑ¹ÖÐ¶Ï ÓÅÏÈ¼¶Éè¶¨Î»
sbit PADC = IP^5; 	//ADC ÖÐ¶Ï ÓÅÏÈ¼¶Éè¶¨Î»
sbit PS   = IP^4;	//´®ÐÐÖÐ¶Ï0ÓÅÏÈ¼¶Éè¶¨Î»
sbit PT1  = IP^3;	//¶¨Ê±ÖÐ¶Ï1ÓÅÏÈ¼¶Éè¶¨Î»
sbit PX1  = IP^2;	//Íâ²¿ÖÐ¶Ï1ÓÅÏÈ¼¶Éè¶¨Î»
sbit PT0  = IP^1;	//¶¨Ê±ÖÐ¶Ï0ÓÅÏÈ¼¶Éè¶¨Î»
sbit PX0  = IP^0;	//Íâ²¿ÖÐ¶Ï0ÓÅÏÈ¼¶Éè¶¨Î»
*/

sbit ACC0 = ACC^0;
sbit ACC1 = ACC^1;
sbit ACC2 = ACC^2;
sbit ACC3 = ACC^3;
sbit ACC4 = ACC^4;
sbit ACC5 = ACC^5;
sbit ACC6 = ACC^6;
sbit ACC7 = ACC^7;

sbit B0 = B^0;
sbit B1 = B^1;
sbit B2 = B^2;
sbit B3 = B^3;
sbit B4 = B^4;
sbit B5 = B^5;
sbit B6 = B^6;
sbit B7 = B^7;


//							7     6     5    4    3    2    1     0    Reset Value
//sfr IE2       = 0xAF;		-     -     -    -    -    -   ESPI  ES2   0000,0000B	//Auxiliary Interrupt   
#define		SPI_INT_ENABLE()		IE2 |=  2	//ÔÊÐíSPIÖÐ¶Ï
#define		SPI_INT_DISABLE()		IE2 &= ~2	//ÔÊÐíSPIÖÐ¶Ï
#define		UART2_INT_ENABLE()		IE2 |=  1	//ÔÊÐí´®¿Ú2ÖÐ¶Ï
#define		UART2_INT_DISABLE()		IE2 &= ~1	//ÔÊÐí´®¿Ú2ÖÐ¶Ï

//                                          7     6     5    4    3    2    1    0    Reset Value
//sfr IP      = 0xB8; //ÖÐ¶ÏÓÅÏÈ¼¶µÍÎ»      PPCA  PLVD  PADC  PS   PT1  PX1  PT0  PX0   0000,0000
//--------
sbit PPCA	= IP^7;	//PCA Ä£¿éÖÐ¶ÏÓÅÏÈ¼¶
sbit PLVD	= IP^6;	//µÍÑ¹¼à²âÖÐ¶ÏÓÅÏÈ¼¶
sbit PADC	= IP^5;	//ADC ÖÐ¶ÏÓÅÏÈ¼¶
sbit PS   	= IP^4;	//´®ÐÐÖÐ¶Ï0ÓÅÏÈ¼¶Éè¶¨Î»
sbit PT1	= IP^3;	//¶¨Ê±ÖÐ¶Ï1ÓÅÏÈ¼¶Éè¶¨Î»
sbit PX1	= IP^2;	//Íâ²¿ÖÐ¶Ï1ÓÅÏÈ¼¶Éè¶¨Î»
sbit PT0	= IP^1;	//¶¨Ê±ÖÐ¶Ï0ÓÅÏÈ¼¶Éè¶¨Î»
sbit PX0	= IP^0;	//Íâ²¿ÖÐ¶Ï0ÓÅÏÈ¼¶Éè¶¨Î»

//                                           7      6      5     4     3     2    1     0        Reset Value
//sfr IPH   = 0xB7; //ÖÐ¶ÏÓÅÏÈ¼¶¸ßÎ»       PPCAH  PLVDH  PADCH  PSH  PT1H  PX1H  PT0H  PX0H   0000,0000
//sfr IP2   = 0xB5; //                       -      -      -     -     -     -   PSPI   PS2   xxxx,xx00
//sfr IPH2  = 0xB6; //                       -      -      -     -     -     -   PSPIH  PS2H  xxxx,xx00
#define		PPCAH	0x80
#define		PLVDH	0x40
#define		PADCH	0x20
#define		PSH		0x10
#define		PT1H	0x08
#define		PX1H	0x04
#define		PT0H	0x02
#define		PX0H	0x01

#define		PCA_InterruptFirst()	PPCA = 1
#define		LVD_InterruptFirst()	PLVD = 1
#define		ADC_InterruptFirst()	PADC = 1
#define		UART1_InterruptFirst()	PS   = 1
#define		Timer1_InterruptFirst()	PT1  = 1
#define		INT1_InterruptFirst()	PX1  = 1
#define		Timer0_InterruptFirst()	PT0  = 1
#define		INT0_InterruptFirst()	PX0  = 1



/*************************************************************************************************/
#define		S1_DoubleRate()		PCON |= 0x80
#define		S1_SHIFT()			SCON &= 0x3f
#define		S1_8bit()			SCON |= 0x40
#define		S1_9bit()			SCON |= 0xc0
#define		S1_RX_Enable()		SCON |= 0x10
#define		S1_USE_P30P31()		P_SW1 &=  ~0xc0					//UART1 Ê¹ÓÃP30 P31¿Ú	Ä¬ÈÏ
#define		S1_USE_P36P37()		P_SW1 = (P_SW1 & ~0xc0) | 0x40	//UART1 Ê¹ÓÃP36 P37¿Ú
#define		S1_USE_P16P17()		P_SW1 = (P_SW1 & ~0xc0) | 0x80	//UART1 Ê¹ÓÃP16 P17¿Ú
#define		S1_TXD_RXD_SHORT()	PCON2 |= (1<<4)	//½«TXDÓëRXDÁ¬½ÓÖÐ¼ÌÊä³ö
#define		S1_TXD_RXD_OPEN()	PCON2 |= (1<<4)	//½«TXDÓëRXDÁ¬½ÓÖÐ¼Ì¶Ï¿ª	Ä¬ÈÏ
#define 	S1_BRT_UseTimer2()	AUXR |=  1;
#define 	S1_BRT_UseTimer1()	AUXR &= ~1;

//						  7      6      5      4      3      2     1     0        Reset Value
//sfr S2CON = 0x9A;		S2SM0    -    S2SM2  S2REN  S2TB8  S2RB8  S2TI  S2RI      00000000B		 //S2 Control

#define		S2_8bit()			S2CON &= ~(1<<7)		//´®¿Ú2Ä£Ê½0£¬8Î»UART£¬²¨ÌØÂÊ = ¶¨Ê±Æ÷2µÄÒç³öÂÊ / 4
#define		S2_9bit()			S2CON |=  (1<<7)		//´®¿Ú2Ä£Ê½1£¬9Î»UART£¬²¨ÌØÂÊ = ¶¨Ê±Æ÷2µÄÒç³öÂÊ / 4
#define		S2_RX_Enable()		S2CON |=  (1<<4)		//ÔÊÐí´®2½ÓÊÕ

#define		S2_MODE0()			S2CON &= ~(1<<7)		//´®¿Ú2Ä£Ê½0£¬8Î»UART£¬²¨ÌØÂÊ = ¶¨Ê±Æ÷2µÄÒç³öÂÊ / 4
#define		S2_MODE1()			S2CON |=  (1<<7)		//´®¿Ú2Ä£Ê½1£¬9Î»UART£¬²¨ÌØÂÊ = ¶¨Ê±Æ÷2µÄÒç³öÂÊ / 4
#define		S2_RX_EN()			S2CON |=  (1<<4)							//ÔÊÐí´®2½ÓÊÕ
#define		S2_RX_Disable()		S2CON &= ~(1<<4)							//½ûÖ¹´®2½ÓÊÕ
#define		TI2					(S2CON & 2) != 0
#define		RI2					(S2CON & 1) != 0
#define		SET_TI2()			S2CON |=  2
#define		CLR_TI2()			S2CON &= ~2
#define		CLR_RI2()			S2CON &= ~1
#define		S2TB8_SET()			S2CON |=  8
#define		S2TB8_CLR()			S2CON &= ~8
#define		S2_Int_en()			IE2   |=  1		//´®¿Ú2ÔÊÐíÖÐ¶Ï
#define		S2_USE_P10P11()		P_SW2 &= ~1		//UART2 Ê¹ÓÃP1¿Ú	Ä¬ÈÏ
#define		S2_USE_P46P47()		P_SW2 |=  1		//UART2 Ê¹ÓÃP4¿Ú

#define		S3_USE_P00P01()		P_SW2 &= ~2		//UART3 Ê¹ÓÃP0¿Ú	Ä¬ÈÏ
#define		S3_USE_P50P51()		P_SW2 |=  2		//UART3 Ê¹ÓÃP5¿Ú
#define		S4_USE_P02P03()		P_SW2 &= ~4		//UART4 Ê¹ÓÃP0¿Ú	Ä¬ÈÏ
#define		S4_USE_P52P53()		P_SW2 |=  4		//UART4 Ê¹ÓÃP5¿Ú


/**********************************************************/

#define		Timer0_16bitAutoReload()	TMOD &= ~0x03					//16Î»×Ô¶¯ÖØ×°
#define		Timer0_16bit()				TMOD  = (TMOD & ~0x03) | 0x01	//16Î»
#define		Timer0_8bitAutoReload()		TMOD  = (TMOD & ~0x03) | 0x02	//8Î»×Ô¶¯ÖØ×°
#define		Timer0_16bitAutoRL_NoMask()	TMOD |=  0x03		//16Î»×Ô¶¯ÖØ×°²»¿ÉÆÁ±ÎÖÐ¶Ï
#define		Timer0_AsCounterP32()		TMOD |=  4		//Ê±Æ÷0ÓÃ×ö¼ÆÊýÆ÷
#define		Timer0_AsTimer()			TMOD &= ~4		//Ê±Æ÷0ÓÃ×ö¶¨Ê±Æ÷
#define		Timer0_ExtControlP34()		TMOD |=  4		//Ê±Æ÷0ÓÉÍâ²¿INT0¸ßµçÆ½ÔÊÐí¶¨Ê±¼ÆÊý
#define 	Timer0_Run()	 			TR0 = 1				//ÔÊÐí¶¨Ê±Æ÷0¼ÆÊý
#define 	Timer0_Stop()	 			TR0 = 0				//½ûÖ¹¶¨Ê±Æ÷0¼ÆÊý
#define 	Timer0_InterruptEnable()	ET0 = 1				//ÔÊÐíTimer1ÖÐ¶Ï.
#define 	Timer0_InterruptDisable()	ET0 = 0				//½ûÖ¹Timer1ÖÐ¶Ï.

#define		Timer1_16bitAutoReload()	TMOD &= ~0x30					//16Î»×Ô¶¯ÖØ×°
#define		Timer1_16bit()				TMOD  = (TMOD & ~0x30) | 0x10	//16Î»
#define		Timer1_8bitAutoReload()		TMOD  = (TMOD & ~0x30) | 0x20	//8Î»×Ô¶¯ÖØ×°
#define		Timer1_16bitAutoRL_NoMask()	TMOD |=  0x30		//16Î»×Ô¶¯ÖØ×°²»¿ÉÆÁ±ÎÖÐ¶Ï
#define		Timer1_AsCounterP33()		TMOD |=  (1<<6)		//Ê±Æ÷1ÓÃ×ö¼ÆÊýÆ÷
#define		Timer1_AsTimer()			TMOD &= ~(1<<6)		//Ê±Æ÷1ÓÃ×ö¶¨Ê±Æ÷
#define		Timer1_ExtControlP35()		TMOD |=  (1<<7)		//Ê±Æ÷1ÓÉÍâ²¿INT1¸ßµçÆ½ÔÊÐí¶¨Ê±¼ÆÊý
#define 	Timer1_Run()	 			TR1 = 1				//ÔÊÐí¶¨Ê±Æ÷1¼ÆÊý
#define 	Timer1_Stop()	 			TR1 = 0				//½ûÖ¹¶¨Ê±Æ÷1¼ÆÊý
#define 	Timer1_InterruptEnable()	ET1 = 1				//ÔÊÐíTimer1ÖÐ¶Ï.
#define 	Timer1_InterruptDisable()	ET1 = 0				//½ûÖ¹Timer1ÖÐ¶Ï.


//						   7     6       5      4     3      2      1      0    Reset Value
//sfr AUXR  = 0x8E;		T0x12 T1x12 UART_M0x6  BRTR S2SMOD BRTx12 EXTRAM S1BRS  0000,0000	//Auxiliary Register 

#define 	Timer0_1T()					AUXR |=  (1<<7)	//Timer0 clodk = fo
#define 	Timer0_12T()				AUXR &= ~(1<<7)	//Timer0 clodk = fo/12	12·ÖÆµ,	default
#define 	Timer1_1T()					AUXR |=  (1<<6)	//Timer1 clodk = fo
#define 	Timer1_12T()				AUXR &= ~(1<<6)	//Timer1 clodk = fo/12	12·ÖÆµ,	default
#define		S1_M0x6()					AUXR |=  (1<<5)	//UART Mode0 Speed is 6x Standard
#define		S1_M0x1()					AUXR &= ~(1<<5)	//default,	UART Mode0 Speed is Standard
#define 	Timer2_Run()	 			AUXR |=  (1<<4)	//ÔÊÐí¶¨Ê±Æ÷2¼ÆÊý
#define 	Timer2_Stop()	 			AUXR &= ~(1<<4)	//½ûÖ¹¶¨Ê±Æ÷2¼ÆÊý
#define		Timer2_AsCounterP31()		AUXR |=  (1<<3)	//Ê±Æ÷2ÓÃ×ö¼ÆÊýÆ÷
#define		Timer2_AsTimer()			AUXR &= ~(1<<3)	//Ê±Æ÷2ÓÃ×ö¶¨Ê±Æ÷
#define 	Timer2_1T()					AUXR |=  (1<<2)	//Timer0 clodk = fo
#define 	Timer2_12T()				AUXR &= ~(1<<2)	//Timer0 clodk = fo/12	12·ÖÆµ,	default
#define 	Timer2_InterruptEnable()	IE2  |=  (1<<2)	//ÔÊÐíTimer2ÖÐ¶Ï.
#define 	Timer2_InterruptDisable()	IE2  &= ~(1<<2)	//½ûÖ¹Timer2ÖÐ¶Ï.

#define 	ExternalRAM_enable()		AUXR |=  2		//ÔÊÐíÍâ²¿XRAM£¬½ûÖ¹Ê¹ÓÃÄÚ²¿1024RAM
#define 	InternalRAM_enable()		AUXR &= ~2		//½ûÖ¹Íâ²¿XRAM£¬ÔÊÐíÊ¹ÓÃÄÚ²¿1024RAM

#define		T0_pulseP34_enable()		AUXR2 |=  1		//ÔÊÐí T0 Òç³öÂö³åÔÚT0(P3.5)½ÅÊä³ö£¬Fck0 = 1/2 T0 Òç³öÂÊ£¬T0¿ÉÒÔ1T»ò12T¡£
#define		T0_pulseP34_disable()		AUXR2 &= ~1
#define		T1_pulseP35_enable()		AUXR2 |=  2		//ÔÊÐí T1 Òç³öÂö³åÔÚT1(P3.4)½ÅÊä³ö£¬Fck1 = 1/2 T1 Òç³öÂÊ£¬T1¿ÉÒÔ1T»ò12T¡£
#define		T1_pulseP35_disable()		AUXR2 &= ~2
#define		T2_pulseP30_enable()		AUXR2 |=  4		//ÔÊÐí T2 Òç³öÂö³åÔÚT1(P3.0)½ÅÊä³ö£¬Fck2 = 1/2 T2 Òç³öÂÊ£¬T2¿ÉÒÔ1T»ò12T¡£
#define		T2_pulseP30_disable()		AUXR2 &= ~4

#define		T0_pulseP35(n)		ET0=0,Timer0_AsTimer(),Timer0_1T(),Timer0_16bitAutoReload(),TH0=(65536-(n/2+MAIN_Fosc/2)/(n))/256,TL0=(65536-(n/2+MAIN_Fosc/2)/(n))%256,AUXR2 |= bit0,TR0=1		//fx=fosc/(2*M)/n,  M=1 or M=12
#define		T1_pulseP34(n)		ET1=0,Timer1_AsTimer(),Timer1_1T(),Timer1_16bitAutoReload(),TH1=(65536-(n/2+MAIN_Fosc/2)/(n))/256,TL1=(65536-(n/2+MAIN_Fosc/2)/(n))%256,AUXR2 |= bit1,TR1=1		//fx=fosc/(2*M)/n,  M=1 or M=12
#define		T2_pulseP30(n)		Timer2_InterruptDisable(),Timer2_AsTimer(),Timer2_1T(),TH2=(65536-(n/2+MAIN_Fosc/2)/(n))/256,TL2=(65536-(n/2+MAIN_Fosc/2)/(n))%256,AUXR2 |= bit2,Timer2_Run()	//fx=fosc/(2*M)/n,  M=1 or M=12

#define		Timer0_Load(n)		TH0 = (65536-n) / 256,	TL0 = (65536-n) % 256
#define		Timer1_Load(n)		TH1 = (65536-n) / 256,	TL1 = (65536-n) % 256
#define		Timer2_Load(n)		TH2 = (65536-n) / 256,	TL2 = (65536-n) % 256

#define		Timer0_Load_us(n)	TH0=(65536-MainFosc_KHZ*(n)/1000)/256,TL0=(65536-MainFosc_KHZ*(n)/1000)%256
#define		Timer1_Load_us(n)	TH1=(65536-MainFosc_KHZ*(n)/1000)/256,TL1=(65536-MainFosc_KHZ*(n)/1000)%256
#define		Timer2_Load_us(n)	TH2=(65536-MainFosc_KHZ*(n)/1000)/256,TL2=(65536-MainFosc_KHZ*(n)/1000)%256


//sfr WDT_CONTR = 0xC1; //Watch-Dog-Timer Control register
//                                      7     6     5      4       3      2   1   0     Reset Value
//                                  WDT_FLAG  -  EN_WDT CLR_WDT IDLE_WDT PS2 PS1 PS0    xx00,0000
#define D_WDT_FLAG			(1<<7)
#define D_EN_WDT			(1<<5)
#define D_CLR_WDT			(1<<4)	//auto clear
#define D_IDLE_WDT			(1<<3)	//WDT counter when Idle
#define D_WDT_SCALE_2		0
#define D_WDT_SCALE_4		1
#define D_WDT_SCALE_8		2		//T=393216*N/fo
#define D_WDT_SCALE_16		3
#define D_WDT_SCALE_32		4
#define D_WDT_SCALE_64		5
#define D_WDT_SCALE_128		6
#define D_WDT_SCALE_256		7

#define	WDT_reset(n)	WDT_CONTR = D_EN_WDT + D_CLR_WDT + D_IDLE_WDT + (n)		//³õÊ¼»¯WDT£¬Î¹¹·


//						  7     6      5    4     3      2    1     0     Reset Value
//sfr PCON   = 0x87;	SMOD  SMOD0  LVDF  POF   GF1    GF0   PD   IDL    0001,0000	 //Power Control 
//SMOD		//´®¿ÚË«±¶ËÙ
//SMOD0
#define		LVDF		(1<<5)	//P4.6µÍÑ¹¼ì²â±êÖ¾
//POF
//GF1
//GF0
//#define 	D_PD		2		//set 1, power down mode
//#define 	D_IDLE		1		//set 1, idle mode
#define		MCU_IDLE()			PCON |= 1	//MCU ½øÈë IDLE Ä£Ê½
#define		MCU_POWER_DOWN()	PCON |= 2	//MCU ½øÈë Ë¯Ãß Ä£Ê½


//sfr ISP_CMD   = 0xC5;
#define		ISP_STANDBY()	ISP_CMD = 0		//ISP¿ÕÏÐÃüÁî£¨½ûÖ¹£©
#define		ISP_READ()		ISP_CMD = 1		//ISP¶Á³öÃüÁî
#define		ISP_WRITE()		ISP_CMD = 2		//ISPÐ´ÈëÃüÁî
#define		ISP_ERASE()		ISP_CMD = 3		//ISP²Á³ýÃüÁî

//sfr ISP_TRIG  = 0xC6;
#define 	ISP_TRIG()	ISP_TRIG = 0x5A,	ISP_TRIG = 0xA5		//ISP´¥·¢ÃüÁî

//							  7    6    5      4    3    2    1     0    Reset Value
//sfr IAP_CONTR = 0xC7;		IAPEN SWBS SWRST CFAIL  -   WT2  WT1   WT0   0000,x000	//IAP Control Register
#define ISP_EN			(1<<7)
#define ISP_SWBS		(1<<6)
#define ISP_SWRST		(1<<5)
#define ISP_CMD_FAIL	(1<<4)
#define ISP_WAIT_1MHZ	7
#define ISP_WAIT_2MHZ	6
#define ISP_WAIT_3MHZ	5
#define ISP_WAIT_6MHZ	4
#define ISP_WAIT_12MHZ	3
#define ISP_WAIT_20MHZ	2
#define ISP_WAIT_24MHZ	1
#define ISP_WAIT_30MHZ	0

#if (MAIN_Fosc >= 24000000L)
	#define		ISP_WAIT_FREQUENCY	ISP_WAIT_30MHZ
#elif (MAIN_Fosc >= 20000000L)
	#define		ISP_WAIT_FREQUENCY	ISP_WAIT_24MHZ
#elif (MAIN_Fosc >= 12000000L)
	#define		ISP_WAIT_FREQUENCY	ISP_WAIT_20MHZ
#elif (MAIN_Fosc >= 6000000L)
	#define		ISP_WAIT_FREQUENCY	ISP_WAIT_12MHZ
#elif (MAIN_Fosc >= 3000000L)
	#define		ISP_WAIT_FREQUENCY	ISP_WAIT_6MHZ
#elif (MAIN_Fosc >= 2000000L)
	#define		ISP_WAIT_FREQUENCY	ISP_WAIT_3MHZ
#elif (MAIN_Fosc >= 1000000L)
	#define		ISP_WAIT_FREQUENCY	ISP_WAIT_2MHZ
#else
	#define		ISP_WAIT_FREQUENCY	ISP_WAIT_1MHZ
#endif



/* ADC Register */
//								7       6      5       4         3      2    1    0   Reset Value
//sfr ADC_CONTR = 0xBC;		ADC_POWER SPEED1 SPEED0 ADC_FLAG ADC_START CHS2 CHS1 CHS0 0000,0000	//AD ×ª»»¿ØÖÆ¼Ä´æÆ÷ 
//sfr ADC_RES  = 0xBD;		ADCV.9 ADCV.8 ADCV.7 ADCV.6 ADCV.5 ADCV.4 ADCV.3 ADCV.2	  0000,0000	//A/D ×ª»»½á¹û¸ß8Î» 
//sfr ADC_RESL = 0xBE;												  ADCV.1 ADCV.0	  0000,0000	//A/D ×ª»»½á¹ûµÍ2Î»
//sfr ADC_CONTR  = 0xBC;	//Ö±½ÓÓÃMOV²Ù×÷£¬²»ÒªÓÃÓë»ò


//sfr SPCTL  = 0xCE;	SPI¿ØÖÆ¼Ä´æÆ÷
//   7       6       5       4       3       2       1       0    	Reset Value
//	SSIG	SPEN	DORD	MSTR	CPOL	CPHA	SPR1	SPR0		0x00

#define	SPI_SSIG_None()		SPCTL |=  (1<<7)		//1: ºöÂÔSS½Å
#define	SPI_SSIG_Enable()	SPCTL &= ~(1<<7)		//0: SS½ÅÓÃÓÚ¾ö¶¨Ö÷´Ó»ú
#define	SPI_Enable()		SPCTL |=  (1<<6)		//1: ÔÊÐíSPI
#define	SPI_Disable()		SPCTL &= ~(1<<6)		//0: ½ûÖ¹SPI
#define	SPI_LSB_First()		SPCTL |=  (1<<5)		//1: LSBÏÈ·¢
#define	SPI_MSB_First()		SPCTL &= ~(1<<5)		//0: MSBÏÈ·¢
#define	SPI_Master()		SPCTL |=  (1<<4)		//1: ÉèÎªÖ÷»ú
#define	SPI_Slave()			SPCTL &= ~(1<<4)		//0: ÉèÎª´Ó»ú
#define	SPI_SCLK_NormalH()	SPCTL |=  (1<<3)		//1: ¿ÕÏÐÊ±SCLKÎª¸ßµçÆ½
#define	SPI_SCLK_NormalL()	SPCTL &= ~(1<<3)		//0: ¿ÕÏÐÊ±SCLKÎªµÍµçÆ½
#define	SPI_PhaseH()		SPCTL |=  (1<<2)		//1: 
#define	SPI_PhaseL()		SPCTL &= ~(1<<2)		//0: 
#define	SPI_Speed(n)		SPCTL = (SPCTL & ~3) | (n)	//ÉèÖÃËÙ¶È, 0 -- fosc/4, 1 -- fosc/16, 2 -- fosc/64, 3 -- fosc/128

//sfr SPDAT  = 0xCF; //SPI Data Register                                                     0000,0000
//sfr SPSTAT  = 0xCD;	//SPI×´Ì¬¼Ä´æÆ÷
//   7       6      5   4   3   2   1   0    	Reset Value
//	SPIF	WCOL	-	-	-	-	-	-
#define	SPIF	0x80		//SPI´«ÊäÍê³É±êÖ¾¡£Ð´Èë1Çå0¡£
#define	WCOL	0x40		//SPIÐ´³åÍ»±êÖ¾¡£Ð´Èë1Çå0¡£

#define		SPI_USE_P12P13P14P15()	AUXR1 &= 0x0c	//½«SPIÇÐ»»µ½P12(SS) P13(MOSI) P14(MISO) P15(SCLK)(ÉÏµçÄ¬ÈÏ)¡£
#define		SPI_USE_P24P23P22P21()	AUXR1 = (AUXR1 & ~0x0c) | 0x04	//½«SPIÇÐ»»µ½P24(SS) P23(MOSI) P22(MISO) P21(SCLK)¡£
#define		SPI_USE_P54P40P41P43()	AUXR1 = (AUXR1 & ~0x0c) | 0x08	//½«SPIÇÐ»»µ½P54(SS) P40(MOSI) P41(MISO) P43(SCLK)¡£


/*
;PCA_PWMn:    7       6     5   4   3   2     1       0
;			EBSn_1	EBSn_0	-	-	-	-	EPCnH	EPCnL
;B5-B2:		±£Áô
;B1(EPCnH):	ÔÚPWMÄ£Ê½ÏÂ£¬ÓëCCAPnH×é³É9Î»Êý¡£
;B0(EPCnL):	ÔÚPWMÄ£Ê½ÏÂ£¬ÓëCCAPnL×é³É9Î»Êý¡£
*/
#define		PWM0_NORMAL()	PCA_PWM0 &= ~3				//PWM0Õý³£Êä³ö(Ä¬ÈÏ)
#define		PWM0_OUT_0()	PCA_PWM0 |=  3				//PWM0Ò»Ö±Êä³ö0
#define		PWM0_OUT_1()	PCA_PWM0 &= ~3, CCAP0H = 0;	//PWM0Ò»Ö±Êä³ö1

#define		PWM1_NORMAL()	PCA_PWM1 &= ~3				//PWM0Õý³£Êä³ö(Ä¬ÈÏ)
#define		PWM1_OUT_0()	PCA_PWM1 |=  3				//PWM0Ò»Ö±Êä³ö0
#define		PWM1_OUT_1()	PCA_PWM1 &= ~3, CCAP1H = 0;	//PWM1Ò»Ö±Êä³ö1

#define		PWM2_NORMAL()	PCA_PWM2 &= ~3				//PWM1Õý³£Êä³ö(Ä¬ÈÏ)
#define		PWM2_OUT_0()	PCA_PWM2 |=  3				//PWM2Ò»Ö±Êä³ö0
#define		PWM2_OUT_1()	PCA_PWM2 &= ~3, CCAP2H = 0;	//PWM2Ò»Ö±Êä³ö1


//						7     6     5     4     3     2     1     0     Reset Value
//sfr CCON   = 0xD8;	CF    CR    -     -     -    CCF2  CCF1  CCF0   00xx,xx00	//PCA ¿ØÖÆ¼Ä´æÆ÷¡£
sbit CCF0  = CCON^0;	//PCA Ä£¿é0ÖÐ¶Ï±êÖ¾£¬ÓÉÓ²¼þÖÃÎ»£¬±ØÐëÓÉÈí¼þÇå0¡£
sbit CCF1  = CCON^1;	//PCA Ä£¿é1ÖÐ¶Ï±êÖ¾£¬ÓÉÓ²¼þÖÃÎ»£¬±ØÐëÓÉÈí¼þÇå0¡£
sbit CCF2  = CCON^2;	//PCA Ä£¿é2ÖÐ¶Ï±êÖ¾£¬ÓÉÓ²¼þÖÃÎ»£¬±ØÐëÓÉÈí¼þÇå0¡£
sbit CR    = CCON^6;	//1: ÔÊÐíPCA¼ÆÊýÆ÷¼ÆÊý£¬±ØÐëÓÉÈí¼þÇå0¡£
sbit CF    = CCON^7;	//PCA¼ÆÊýÆ÷Òç³ö£¨CH£¬CLÓÉFFFFH±äÎª0000H£©±êÖ¾¡£PCA¼ÆÊýÆ÷Òç³öºóÓÉÓ²¼þÖÃÎ»£¬±ØÐëÓÉÈí¼þÇå0¡£

//					 7     6     5     4     3     2     1     0    Reset Value
//sfr CMOD  = 0xD9;	CIDL   -     -     -   CPS2   CPS1  CPS0  ECF   0xxx,0000	//PCA ¹¤×÷Ä£Ê½¼Ä´æÆ÷¡£
#define PCA_IDLE_OFF()		CMOD |=  (1<<7)				//IDLE×´Ì¬PCAÍ£Ö¹¼ÆÊý¡£
#define PCA_IDLE_ON()		CMOD &= ~(1<<7)				//IDLE×´Ì¬PCA¼ÌÐø¼ÆÊý¡£
#define PCA_CLK_12T()		CMOD &= ~0x0E				//PCA¼ÆÊýÂö³åÑ¡ÔñÍâ²¿¾§Õñ/12¡£	fosc/12
#define PCA_CLK_2T()		CMOD = (CMOD & ~0x0E) + 2	//PCA¼ÆÊýÂö³åÑ¡ÔñÍâ²¿¾§Õñ/2¡£	fosc/2
#define PCA_CLK_T0()		CMOD = (CMOD & ~0x0E) + 4	//PCA¼ÆÊýÂö³åÑ¡ÔñTimer0ÖÐ¶Ï£¬Timer0¿ÉÍ¨¹ýAUXR¼Ä´æÆ÷ÉèÖÃ³É¹¤×÷ÔÚ12T»ò1TÄ£Ê½¡£
#define PCA_CLK_ECI()		CMOD = (CMOD & ~0x0E) + 6	//PCA¼ÆÊýÂö³åÑ¡Ôñ´ÓECI/P3.4½ÅÊäÈëµÄÍâ²¿Ê±ÖÓ£¬×î´ó fosc/2¡£
#define PCA_CLK_1T()		CMOD = (CMOD & ~0x0E) + 8	//PCA¼ÆÊýÂö³åÑ¡ÔñÍâ²¿¾§Õñ¡£		Fosc/1
#define PCA_CLK_4T()		CMOD = (CMOD & ~0x0E) + 10	//PCA¼ÆÊýÂö³åÑ¡ÔñÍâ²¿¾§Õñ/4¡£	Fosc/4
#define PCA_CLK_6T()		CMOD = (CMOD & ~0x0E) + 12	//PCA¼ÆÊýÂö³åÑ¡ÔñÍâ²¿¾§Õñ/6¡£	Fosc/6
#define PCA_CLK_8T()		CMOD = (CMOD & ~0x0E) + 14	//PCA¼ÆÊýÂö³åÑ¡ÔñÍâ²¿¾§Õñ/8¡£	Fosc/8
#define PCA_INT_ENABLE()	CMOD |=  1					//PCA¼ÆÊýÆ÷Òç³öÖÐ¶ÏÔÊÐíÎ»£¬1---ÔÊÐíCF£¨CCON.7£©²úÉúÖÐ¶Ï¡£
#define PCA_INT_DISABLE()	CMOD &= ~1					//PCA¼ÆÊýÆ÷Òç³öÖÐ¶Ï½ûÖ¹¡£

//					    7      6       5        4       3       2       1      0    Reset Value
//sfr AUXR1 = 0xA2;	  S1_S1  S1_S0  CCP_S1   CCP_S0  SPI_S1   SPI_S0    -     DPS   0100,0000	//Auxiliary Register 1

#define		PCA_USE_P12P11P10P37()	AUXR1 &= ~0x30		//½«PCA/PWMÇÐ»»µ½P12(ECI) P11(CCP0) P10(CCP1) P37(CCP2)(ÉÏµçÄ¬ÈÏ)¡£
#define		PCA_USE_P34P35P36P37()	AUXR1 = (AUXR1 & ~0x30) | 0x10	//½«PCA/PWMÇÐ»»µ½P34(ECI) P35(CCP0) P36(CCP1) P37(CCP2)¡£
#define		PCA_USE_P24P25P26P27()	AUXR1 = (AUXR1 & ~0x30) | 0x20	//½«PCA/PWMÇÐ»»µ½P24(ECI) P25(CCP0) P26(CCP1) P27(CCP2)¡£

#define		DPS_SEL1()		AUXR1 |=  1		//1£ºÑ¡ÔñDPTR1¡£
#define		DPS_SEL0()		AUXR1 &= ~1		//0£ºÑ¡ÔñDPTR0(ÉÏµçÄ¬ÈÏ)¡£


/*									7     6      5      4     3     2     1     0     Reset Value
//sfr CCAPM0 = 0xDA;	PWM ¼Ä´æÆ÷  -   ECOM0  CAPP0  CAPN0  MAT0  TOG0  PWM0  ECCF0   x000,0000	//PCA Ä£¿é0 
//sfr CCAPM1 = 0xDB;	PWM ¼Ä´æÆ÷  -   ECOM1  CAPP1  CAPN1  MAT1  TOG1  PWM1  ECCF1   x000,0000	//PCA Ä£¿é1
//sfr CCAPM2 = 0xDC;	PWM ¼Ä´æÆ÷  -   ECOM2  CAPP2  CAPN2  MAT2  TOG2  PWM2  ECCF2   x000,0000	//PCA Ä£¿é2
;ECOMn = 1:	ÔÊÐí±È½Ï¹¦ÄÜ¡£
;CAPPn = 1:	ÔÊÐíÉÏÉýÑØ´¥·¢²¶×½¹¦ÄÜ¡£
;CAPNn = 1:	ÔÊÐíÏÂ½µÑØ´¥·¢²¶×½¹¦ÄÜ¡£
;MATn  = 1:	µ±Æ¥ÅäÇé¿ö·¢ÉúÊ±£¬ÔÊÐíCCONÖÐµÄCCFnÖÃÎ»¡£
;TOGn  = 1:	µ±Æ¥ÅäÇé¿ö·¢ÉúÊ±£¬CEXn½«·­×ª¡£(CEX0/PCA0/PWM0/P3.7,CEX1/PCA1/PWM1/P3.5)
;PWMn  = 1:	½«CEXnÉèÖÃÎªPWMÊä³ö¡£
;ECCFn = 1:	ÔÊÐíCCONÖÐµÄCCFn´¥·¢ÖÐ¶Ï¡£
;ECOMn CAPPn CAPNn MATn TOGn PWMn ECCFn
;  0     0     0    0    0    0     0		00H	Î´ÆôÓÃÈÎºÎ¹¦ÄÜ¡£
;  x     1     0    0    0    0     x	 	20H	16Î»CEXnÉÏÉýÑØ´¥·¢²¶×½¹¦ÄÜ¡£
;  x     0     1    0    0    0     x	 	10H	16Î»CEXnÏÂ½µÑØ´¥·¢²¶×½¹¦ÄÜ¡£
;  x     1     1    0    0    0     x	 	30H	16Î»CEXn/PCAn±ßÑØ£¨ÉÏ¡¢ÏÂÑØ£©´¥·¢²¶×½¹¦ÄÜ¡£
;  1     0     0    1    0    0     x	 	48H	16Î»Èí¼þ¶¨Ê±Æ÷¡£
;  1     0     0    1    1    0     x	 	4CH	16Î»¸ßËÙÂö³åÊä³ö¡£
;  1     0     0    0    0    1     0		42H	8Î»PWM¡£ÎÞÖÐ¶Ï
;  1     1     0    0    0    1     1		63H	8Î»PWM¡£µÍ±ä¸ß¿É²úÉúÖÐ¶Ï
;  1     0     1    0    0    1     1		53H	8Î»PWM¡£¸ß±äµÍ¿É²úÉúÖÐ¶Ï
;  1     1     1    0    0    1     1		73H	8Î»PWM¡£µÍ±ä¸ß»ò¸ß±äµÍ¾ù¿É²úÉúÖÐ¶Ï
;*******************************************************************
;*******************************************************************/
#define		PCA0_none()				CCAPM0 = 0
#define		PCA0_PWM(nbit)			CCAPM0 = 0x42,PCA_PWM0 = (PCA_PWM0 & 0x0c) | ((8-nbit)<<6)
#define		PCA0_PWM_rise_int(nbit) CCAPM0 = 0x63,PCA_PWM0 = (PCA_PWM0 & 0x0c) | ((8-nbit)<<6)
#define		PCA0_PWM_fall_int(nbit) CCAPM0 = 0x53,PCA_PWM0 = (PCA_PWM0 & 0x0c) | ((8-nbit)<<6)
#define		PCA0_PWM_edge_int(nbit) CCAPM0 = 0x73,PCA_PWM0 = (PCA_PWM0 & 0x0c) | ((8-nbit)<<6)
#define		PCA0_capture_rise()		CCAPM0 = (0x20 + 1)
#define		PCA0_capture_fall()		CCAPM0 = (0x10 + 1)
#define		PCA0_capture_edge()		CCAPM0 = (0x30 + 1)
#define		PCA0_16bit_Timer()		CCAPM0 = (0x48 + 1)
#define		PCA0_High_Pulse()		CCAPM0 = (0x4C + 1)

#define		PCA1_none()				CCAPM1 = 0
#define		PCA1_PWM(nbit)			CCAPM1 = 0x42,PCA_PWM1 = (PCA_PWM1 & 0x0c) | ((8-nbit)<<6)
#define		PCA1_PWM_rise_int(nbit) CCAPM1 = 0x63,PCA_PWM1 = (PCA_PWM1 & 0x0c) | ((8-nbit)<<6)
#define		PCA1_PWM_fall_int(nbit) CCAPM1 = 0x53,PCA_PWM1 = (PCA_PWM1 & 0x0c) | ((8-nbit)<<6)
#define		PCA1_PWM_edge_int(nbit) CCAPM1 = 0x73,PCA_PWM1 = (PCA_PWM1 & 0x0c) | ((8-nbit)<<6)
#define		PCA1_capture_rise()		CCAPM1 = (0x20 + 1)
#define		PCA1_capture_fall()		CCAPM1 = (0x10 + 1)
#define		PCA1_capture_edge()		CCAPM1 = (0x30 + 1)
#define		PCA1_16bit_Timer()		CCAPM1 = (0x48 + 1)
#define		PCA1_High_Pulse()		CCAPM1 = (0x4C + 1)

#define		PCA2_none()				CCAPM2 = 0
#define		PCA2_PWM(nbit)			CCAPM2 = 0x42,PCA_PWM2 = (PCA_PWM2 & 0x0c) | ((8-nbit)<<6)
#define		PCA2_PWM_rise_int(nbit) CCAPM2 = 0x63,PCA_PWM2 = (PCA_PWM2 & 0x0c) | ((8-nbit)<<6)
#define		PCA2_PWM_fall_int(nbit) CCAPM2 = 0x53,PCA_PWM2 = (PCA_PWM2 & 0x0c) | ((8-nbit)<<6)
#define		PCA2_PWM_edge_int(nbit) CCAPM2 = 0x73,PCA_PWM2 = (PCA_PWM2 & 0x0c) | ((8-nbit)<<6)
#define		PCA2_capture_rise()		CCAPM2 = (0x20 + 1)
#define		PCA2_capture_fall()		CCAPM2 = (0x10 + 1)
#define		PCA2_capture_edge()		CCAPM2 = (0x30 + 1)
#define		PCA2_16bit_Timer()		CCAPM2 = (0x48 + 1)
#define		PCA2_High_Pulse()		CCAPM2 = (0x4C + 1)

/* Above is STC additional SFR or change */




/**********************************************************/
typedef 	unsigned char	u8;
typedef 	unsigned int	u16;
typedef 	unsigned long	u32;

/**********************************************************/
#define NOP1()  _nop_()
#define NOP2()  NOP1(),NOP1()
#define NOP3()  NOP2(),NOP1()
#define NOP4()  NOP3(),NOP1()
#define NOP5()  NOP4(),NOP1()
#define NOP6()  NOP5(),NOP1()
#define NOP7()  NOP6(),NOP1()
#define NOP8()  NOP7(),NOP1()
#define NOP9()  NOP8(),NOP1()
#define NOP10() NOP9(),NOP1()
#define NOP11() NOP10(),NOP1()
#define NOP12() NOP11(),NOP1()
#define NOP13() NOP12(),NOP1()
#define NOP14() NOP13(),NOP1()
#define NOP15() NOP14(),NOP1()
#define NOP16() NOP15(),NOP1()
#define NOP17() NOP16(),NOP1()
#define NOP18() NOP17(),NOP1()
#define NOP19() NOP18(),NOP1()
#define NOP20() NOP19(),NOP1()
#define NOP21() NOP20(),NOP1()
#define NOP22() NOP21(),NOP1()
#define NOP23() NOP22(),NOP1()
#define NOP24() NOP23(),NOP1()
#define NOP25() NOP24(),NOP1()
#define NOP26() NOP25(),NOP1()
#define NOP27() NOP26(),NOP1()
#define NOP28() NOP27(),NOP1()
#define NOP29() NOP28(),NOP1()
#define NOP30() NOP29(),NOP1()
#define NOP31() NOP30(),NOP1()
#define NOP32() NOP31(),NOP1()
#define NOP33() NOP32(),NOP1()
#define NOP34() NOP33(),NOP1()
#define NOP35() NOP34(),NOP1()
#define NOP36() NOP35(),NOP1()
#define NOP37() NOP36(),NOP1()
#define NOP38() NOP37(),NOP1()
#define NOP39() NOP38(),NOP1()
#define NOP40() NOP39(),NOP1()
#define NOP(N)  NOP##N()


/**********************************************/


/****************************************************************/


//sfr INT_CLKO = 0x8F;	//¸½¼ÓµÄ SFR WAKE_CLKO (µØÖ·£º0x8F)
/*
    7   6    5    4   3     2        1       0         Reset Value
    -  EX4  EX3  EX2  -   T2CLKO   T1CLKO  T0CLKO      0000,0000B
b6 -  EX4      : ÍâÖÐ¶ÏINT4ÔÊÐí
b5 -  EX3      : ÍâÖÐ¶ÏINT3ÔÊÐí
b4 -  EX2      : ÍâÖÐ¶ÏINT2ÔÊÐí
b2 - T1CLKO    : ÔÊÐí T2 Òç³öÂö³åÔÚP3.0½ÅÊä³ö£¬Fck1 = 1/2 T1 Òç³öÂÊ
b1 - T1CLKO    : ÔÊÐí T1 Òç³öÂö³åÔÚP3.4½ÅÊä³ö£¬Fck1 = 1/2 T1 Òç³öÂÊ
b0 - T0CLKO    : ÔÊÐí T0 Òç³öÂö³åÔÚP3.5½ÅÊä³ö£¬Fck0 = 1/2 T0 Òç³öÂÊ
*/

#define		LVD_InterruptEnable()		ELVD = 1
#define		LVD_InterruptDisable()		ELVD = 0


//sfr WKTCL = 0xAA;	//STC11F\10ºÍSTC15ÏµÁÐ »½ÐÑ¶¨Ê±Æ÷µÍ×Ö½Ú
//sfr WKTCH = 0xAB;	//STC11F\10ºÍSTC15ÏµÁÐ »½ÐÑ¶¨Ê±Æ÷¸ß×Ö½Ú
//	B7		B6	B5	B4	B3	B2	B1	B0		B7	B6	B5	B4	B3	B2	B1	B0
//	WKTEN				S11	S10	S9	S8		S7	S6	S5	S4	S3	S2	S1	S0	n * 560us
#define		WakeTimerDisable()		WKTCH &= 0x7f	//WKTEN = 0		½ûÖ¹Ë¯Ãß»½ÐÑ¶¨Ê±Æ÷
#define		WakeTimerSet(scale)		WKTCL = (scale) % 256,WKTCH = (scale) / 256 | 0x80	//WKTEN = 1	ÔÊÐíË¯Ãß»½ÐÑ¶¨Ê±Æ÷


//sfr CLK_DIV = 0x97; //Clock Divder ÏµÍ³Ê±ÖÓ·ÖÆµ  -     -      -       -     -  CLKS2 CLKS1 CLKS0 xxxx,x000
#define		SYSTEM_CLK_1T()		CLK_DIV &= ~0x07	//default
#define		SYSTEM_CLK_2T()		CLK_DIV = (CLK_DIV & ~0x07) | 1
#define		SYSTEM_CLK_4T()		CLK_DIV = (CLK_DIV & ~0x07) | 2
#define		SYSTEM_CLK_8T()		CLK_DIV = (CLK_DIV & ~0x07) | 3
#define		SYSTEM_CLK_16T()	CLK_DIV = (CLK_DIV & ~0x07) | 4
#define		SYSTEM_CLK_32T()	CLK_DIV = (CLK_DIV & ~0x07) | 5
#define		SYSTEM_CLK_64T()	CLK_DIV = (CLK_DIV & ~0x07) | 6
#define		SYSTEM_CLK_128T()	CLK_DIV =  CLK_DIV          | 7

#define		MCLKO_P54_None()	CLK_DIV &= ~0xc0					//Ö÷Ê±ÖÓ²»Êä³ö
#define		MCLKO_P54_DIV1()	CLK_DIV  = (CLK_DIV & ~0xc0) | 0x40	//Ö÷Ê±ÖÓ²»·ÖÆµÊä³ö
#define		MCLKO_P54_DIV2()	CLK_DIV  = (CLK_DIV & ~0xc0) | 0x80	//Ö÷Ê±ÖÓ2·ÖÆµÊä³ö
#define		MCLKO_P54_DIV4()	CLK_DIV  =  CLK_DIV | 0xc0			//Ö÷Ê±ÖÓ4·ÖÆµÊä³ö

#define		MCLKO_P34_None()	CLK_DIV &= ~0xc0					//Ö÷Ê±ÖÓ²»Êä³ö
#define		MCLKO_P34_DIV1()	CLK_DIV  = (CLK_DIV & ~0xc0) | 0x40	//Ö÷Ê±ÖÓ²»·ÖÆµÊä³ö
#define		MCLKO_P34_DIV2()	CLK_DIV  = (CLK_DIV & ~0xc0) | 0x80	//Ö÷Ê±ÖÓ2·ÖÆµÊä³ö
#define		MCLKO_P34_DIV4()	CLK_DIV  =  CLK_DIV | 0xc0			//Ö÷Ê±ÖÓ4·ÖÆµÊä³ö

//sfr BUS_SPEED = 0xA1; //Stretch register      -   -  -  -   -   -  EXRTS1  EXRTSS0 xxxx,xx10
#define		BUS_SPEED_1T()	BUS_SPEED = 0
#define		BUS_SPEED_2T()	BUS_SPEED = 1
#define		BUS_SPEED_4T()	BUS_SPEED = 2
#define		BUS_SPEED_8T()	BUS_SPEED = 3

/*   interrupt vector */
#define		INT0_VECTOR		0
#define		TIMER0_VECTOR	1
#define		INT1_VECTOR		2
#define		TIMER1_VECTOR	3
#define		UART1_VECTOR	4
#define		ADC_VECTOR		5
#define		LVD_VECTOR		6
#define		PCA_VECTOR		7
#define		UART2_VECTOR	8
#define		SPI_VECTOR		9
#define		INT2_VECTOR		10
#define		INT3_VECTOR		11
#define		TIMER2_VECTOR	12
#define		INT4_VECTOR		16
#define		UART3_VECTOR	17
#define		UART4_VECTOR	18
#define		TIMER3_VECTOR	19
#define		TIMER4_VECTOR	20


#define	TRUE	1
#define	FALSE	0

//=============================================================

//========================================

#define	PolityLow			0	//µÍÓÅÏÈ¼¶ÖÐ¶Ï
#define	PolityHigh			1	//¸ßÓÅÏÈ¼¶ÖÐ¶Ï

//========================================

#define		MCLKO_None	0
#define		MCLKO_DIV1	1
#define		MCLKO_DIV2	2
#define		MCLKO_DIV4	3

#define		ENABLE		1
#define		DISABLE		0

#define		STC15F_L2K08S2	8
#define		STC15F_L2K16S2	16
#define		STC15F_L2K24S2	24
#define		STC15F_L2K32S2	32
#define		STC15F_L2K40S2	40
#define		STC15F_L2K48S2	48
#define		STC15F_L2K56S2	56
#define		STC15F_L2K60S2	60
#define		IAP15F_L2K61S2	61

#endif

