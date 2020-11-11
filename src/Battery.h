/* *******************************************************************************
 *  Copyright (C) 2014-2019 Mehmet Gunce Akkoyun Can not be copied and/or
 *	distributed without the express permission of Mehmet Gunce Akkoyun
 *	This library is a combined book of enviroment sensor library.
 *
 *	Library				: Battery Management Library
 *	Code Developer		: Mehmet Gunce Akkoyun (akkoyun@me.com)
 *	Revision			: 1.0.0
 *	Relase				: 11.11.2020
 *
 *********************************************************************************/

#ifndef __Battery__
#define __Battery__

#include <Arduino.h>
#include <Wire.h>

class Battery
{
public:
	
	// ************************************************************
	// Public Functions
	// ************************************************************

	bool InstantVoltage(float &Value_);
	bool AverageVoltage(float &Value_);
	bool InstantCurrent(float &Value_);
	bool AverageCurrent(float &Value_);
	bool StateOfCharge(float &Value_);
	bool AverageStateOfCharge(float &Value_);
	bool InstantCapacity(int &Value_);
	bool DesignCapacity(int &Value_);
	bool Temperature(float &Value_);
	bool TimeToEmpty(int &Value_);
	bool TimeToFull(int &Value_);
	bool Age(int &Value_);
	bool Cycle(int &Value_);

private:

	// ************************************************************
	// Private Constants
	// ************************************************************

	// Instant Voltage
	const uint8_t 	IV_Read_Count_ 		= 10;
	const uint8_t 	IV_Average_Type_ 	= 1;
	
	// Average Voltage
	const uint8_t 	AV_Read_Count_ 		= 10;
	const uint8_t 	AV_Average_Type_ 	= 1;
	
	// Instant Current
	const uint8_t 	IC_Read_Count_ 		= 10;
	const uint8_t 	IC_Average_Type_ 	= 1;
	
	// Average Current
	const uint8_t 	AC_Read_Count_ 		= 10;
	const uint8_t 	AC_Average_Type_ 	= 1;
	
	// State of Charge
	const uint8_t 	SOC_Read_Count_ 	= 10;
	const uint8_t 	SOC_Average_Type_ 	= 1;

	// Average State of Charge
	const uint8_t 	ASOC_Read_Count_ 	= 10;
	const uint8_t 	ASOC_Average_Type_ 	= 1;

	// Instant Capacity
	const uint8_t 	ICAP_Read_Count_ 	= 10;
	const uint8_t 	ICAP_Average_Type_ 	= 1;

	// IC Temperature
	const uint8_t 	Temp_Read_Count_ 	= 10;
	const uint8_t 	Temp_Average_Type_ 	= 1;

	// Time to Empty
	const uint8_t 	TTE_Read_Count_ 	= 10;
	const uint8_t 	TTE_Average_Type_ 	= 1;

	// Time to Full
	const uint8_t 	TTF_Read_Count_ 	= 10;
	const uint8_t 	TTF_Average_Type_ 	= 1;

	// Age
	const uint8_t 	AGE_Read_Count_ 	= 10;
	const uint8_t 	AGE_Average_Type_ 	= 1;

	// Cycle
	const uint8_t 	CYC_Read_Count_ 	= 10;
	const uint8_t 	CYC_Average_Type_ 	= 1;

};

#endif /* defined(__Battery__) */