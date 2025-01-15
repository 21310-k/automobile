/****************************************************************************************************************/
/*	FILE        : bios_sensor_input.c																			*/
/*	DATE        :Tue, Jan 17, 2012																				*/
/*	DESCRIPTION :AGVのセンサ情報を獲得するモジュール															*/
/*	CPU TYPE    :H8/3052F																						*/
/****************************************************************************************************************/
#include	"machine.h"								/* 組込み関数の定義											*/
#include	"reg3052.h"								/* H8/3052Fの内蔵モジュール定義								*/
#include	"agvdef.h"								/* 無人搬送車のデバイス定義									*/

/*****************************************************************************************************************
	bios_sensor_input関数
*****************************************************************************************************************/
unsigned char bios_sensor_input(void)
{
	return (SENS_PORT);
}