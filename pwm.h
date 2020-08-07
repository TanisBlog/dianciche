#ifndef _PWM_H_
#define _PWM_H_

#include	"STC15Fxxxx.H"
#include "common.h"

typedef unsigned char BYTE;
typedef unsigned int WORD;

extern uchar pwm_LR;
void PWM_Control();
void PWM_figure();

#define CCP_S0 0x10                 //P_SW1.4
#define CCP_S1 0x20                 //P_SW1.5

//sfr CCON        =   0xD8;           //PCA?????
//sbit CCF0       =   CCON^0;         //PCA??0????  1
//sbit CCF1       =   CCON^1;         //PCA??1????  1

#endif 
