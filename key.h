#ifndef _KEY_H_
#define _KEY_H_

#include	"STC15Fxxxx.H"
#include "common.h"

sbit button_1=P0^1;
sbit button_2=P0^0;
sbit button_3=P2^6;
sbit button_4=P2^7;

extern uchar key_1;
extern uchar key_2;
extern uchar key_3;
extern uchar key_4;

void key_dowm();

#endif 
