#include <Arduino.h>

#include "main.h"
#include "kontaktrony.h"
#include "czujnikiruchu.h"
#include "swiatla.h"
#include "zaslony.h"
#include "temperatury.h"
#include "wilgotnosci.h"
#include "licznikiwody.h"
#include "energiaelektryczna.h"
#include "ogrzewanie.h"
#include "ogrzewanie_temp.h"
#include <MySensors.h>
/*
 * The MySensors Arduino library handles the wireless radio link and protocol
 * between your home built sensors/actuators and HA controller of choice.
 * The sensors forms a self healing radio network with optional repeaters. Each
 * repeater and gateway builds a routing tables in EEPROM which keeps track of the
 * network topology allowing messages to be routed to nodes.
 *
 * Created by Henrik Ekblad <henrik.ekblad@mysensors.org>
 * Copyright (C) 2013-2019 Sensnology AB
 * Full contributor list: https://github.com/mysensors/MySensors/graphs/contributors
 *
 * Documentation: http://www.mysensors.org
 * Support Forum: http://forum.mysensors.org
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 *******************************
 *
 * REVISION HISTORY
 * Version 1.0 - Barduino 2015, GizMoCuz 2015
 *
 * DESCRIPTION
 * This sketch is intended to create fake sensors which register and respond to the controller
 *
 */




// Wait times
#define LONG_WAIT 500
#define SHORT_WAIT 50

#define SKETCH_NAME "MockMySensors "
#define SKETCH_VERSION "v0.5"

// Define Sensors ids
/*      S_DOOR, S_MOTION, S_SMOKE, S_LIGHT, S_DIMMER, S_COVER, S_TEMP, S_HUM, S_BARO, S_WIND,
	S_RAIN, S_UV, S_WEIGHT, S_POWER, S_HEATER, S_DISTANCE, S_LIGHT_LEVEL, S_ARDUINO_NODE,
	S_ARDUINO_REPEATER_NODE, S_LOCK, S_IR, S_WATER, S_AIR_QUALITY, S_CUSTOM, S_DUST,
	S_SCENE_CONTROLLER
*/

////#define ID_S_ARDUINO_NODE            //auto defined in initialization
////#define ID_S_ARDUINO_REPEATER_NODE   //auto defined in initialization


// Some of these ID's have not been updated for v1.5.  Uncommenting too many of them
// will make the sketch too large for a pro mini's memory so it's probably best to try
// one at a time.


// Global Vars
uint32_t SLEEP_TIME = 900000; // Sleep time between reads (in milliseconds)
bool metric = true;
long randNumber;


//Instantiate Messages objects










#ifdef ID_S_BARO
MyMessage msg_S_BARO_P(ID_S_BARO,V_PRESSURE);
MyMessage msg_S_BARO_F(ID_S_BARO,V_FORECAST);
#endif

#ifdef ID_S_WIND
MyMessage msg_S_WIND_S(ID_S_WIND,V_WIND);
MyMessage msg_S_WIND_G(ID_S_WIND,V_GUST);
MyMessage msg_S_WIND_D(ID_S_WIND,V_DIRECTION);
#endif

#ifdef ID_S_RAIN
MyMessage msg_S_RAIN_A(ID_S_RAIN,V_RAIN);
MyMessage msg_S_RAIN_R(ID_S_RAIN,V_RAINRATE);
#endif

#ifdef ID_S_UV
MyMessage msg_S_UV(ID_S_UV,V_UV);
#endif


#ifdef ID_S_LIGHT_LEVEL
MyMessage msg_S_LIGHT_LEVEL(ID_S_LIGHT_LEVEL,V_LIGHT_LEVEL);
#endif

#ifdef ID_S_AIR_QUALITY
MyMessage msg_S_AIR_QUALITY(ID_S_AIR_QUALITY,V_LEVEL);
#endif

#ifdef ID_S_DUST
MyMessage msg_S_DUST(ID_S_DUST,V_LEVEL);
#endif


#ifdef ID_S_HVAC
MyMessage msg_S_HVAC_V_HVAC_SETPOINT_HEAT(ID_S_HVAC,V_HVAC_SETPOINT_HEAT);
MyMessage msg_S_HVAC_V_HVAC_SETPOINT_COOL(ID_S_HVAC,V_HVAC_SETPOINT_COOL);
MyMessage msg_S_HVAC_V_HVAC_FLOW_STATET(ID_S_HVAC,V_HVAC_FLOW_STATE);
MyMessage msg_S_HVAC_V_HVAC_FLOW_MODE(ID_S_HVAC,V_HVAC_FLOW_MODE);
MyMessage msg_S_HVAC_V_HVAC_SPEED(ID_S_HVAC,V_HVAC_SPEED);

float hvac_SetPointHeat = 16.5;
float hvac_SetPointCool = 25.5;
String hvac_FlowState   = "AutoChangeOver";
String hvac_FlowMode    = "Auto";
String hvac_Speed       = "Normal";

//Thermostat/HVAC device
//V_HVAC_SETPOINT_HEAT,  // HVAC/Heater setpoint
//V_HVAC_SETPOINT_COOL,  // HVAC cold setpoint
//V_HVAC_FLOW_STATE,     // Mode of header. One of "Off", "HeatOn", "CoolOn", or "AutoChangeOver"
//V_HVAC_FLOW_MODE,      // Flow mode for HVAC ("Auto", "ContinuousOn", "PeriodicOn")
//V_HVAC_SPEED           // HVAC/Heater fan speed ("Min", "Normal", "Max", "Auto")

// NOT IMPLEMENTED YET
//V_TEMP                 // Temperature
//V_STATUS               // Binary status. 0=off 1=on
#endif

#ifdef ID_S_MULTIMETER
MyMessage msg_S_MULTIMETER_V_VOLTAGE(ID_S_MULTIMETER,V_VOLTAGE);
MyMessage msg_S_MULTIMETER_V_CURRENT(ID_S_MULTIMETER,V_CURRENT);

// Multimeter device	V_VOLTAGE, V_CURRENT, V_IMPEDANCE
// V_IMPEDANCE	14	Impedance value
// V_VOLTAGE	38	Voltage level
// V_CURRENT	39	Current level
#endif
OgrzwanieTemp ot;
Temperatury tt;

void setup()
{
	// Random SEED
	randomSeed(analogRead(0));

	wait(LONG_WAIT);

	ot.init();
	tt.init();
}

void presentation()
{
	// Send the Sketch Version Information to the Gateway
	sendSketchInfo(SKETCH_NAME, SKETCH_VERSION);
	wait(LONG_WAIT);

	// Get controller configuratio
	metric = getControllerConfig().isMetric;
	wait(LONG_WAIT);

	tt.presentation();
  	wait(SHORT_WAIT);

	ot.presentation();
  	wait(SHORT_WAIT);	  

#if 0
	kontaktrony_presentation();
	wait(SHORT_WAIT);


	czujnikiruchu_presentation();
	wait(SHORT_WAIT);

  	swiatla_presentation();
  	wait(SHORT_WAIT);

  	zaslony_presentation();
  	wait(SHORT_WAIT);

  	

  	wilgotnosci_presentation();
  	wait(SHORT_WAIT);

  	licznikiwody_presentation();
  	wait(SHORT_WAIT);

  	energiaelektryczna_presentation();
  	wait(SHORT_WAIT);

  	ogrzewanie_presentation();
  	wait(SHORT_WAIT);
#endif

#ifdef ID_S_BARO
	Serial1.println("  S_BARO");
	present(ID_S_BARO,S_BARO," Air pressure");
	wait(SHORT_WAIT);
#endif

#ifdef ID_S_WIND
	Serial1.println("  S_WIND");
	present(ID_S_WIND,S_WIND,"Wind Station");
	wait(SHORT_WAIT);
#endif

#ifdef ID_S_RAIN
	Serial1.println("  S_RAIN");
	present(ID_S_RAIN,S_RAIN,"Rain Station");
	wait(SHORT_WAIT);
#endif

#ifdef ID_S_HEATER
	Serial1.println("  S_HEATER");
	present(ID_S_HEATER,S_HEATER,"Garage Heater");
	wait(SHORT_WAIT);
#endif


#ifdef ID_S_LIGHT_LEVEL
	Serial1.println("  S_LIGHT_LEVEL");
	present(ID_S_LIGHT_LEVEL,S_LIGHT_LEVEL,"Outside Light Level");
	wait(SHORT_WAIT);
#endif

#ifdef ID_S_AIR_QUALITY
	Serial1.println("  S_AIR_QUALITY");
	present(ID_S_AIR_QUALITY,S_AIR_QUALITY,"Air Station");
	wait(SHORT_WAIT);
#endif

#ifdef ID_S_HVAC
	Serial1.println("  HVAC");
	present(ID_S_HVAC,S_HVAC,"HVAC");
	wait(SHORT_WAIT);
#endif

#ifdef ID_S_MULTIMETER
	Serial1.println("  MULTIMETER");
	present(ID_S_MULTIMETER,S_MULTIMETER,"Electric Staion");
	wait(SHORT_WAIT);
#endif


}

void loop()
{
	sendBatteryLevel(100);
	wait(LONG_WAIT);

	requestTime();
	wait(LONG_WAIT);

	tt.get();
	wait(SHORT_WAIT);
#if 0
	kontaktrony();
	czujnikiruchu();
	zaslony();
	swiatla();
  	
	wilgotnosci();
	licznikiwody();
  	energiaelektryczna();
	ogrzewanie();
#endif

#ifdef ID_S_BARO
	baro();
#endif

#ifdef ID_S_WIND
	wind();
#endif

#ifdef ID_S_RAIN
	rain();
#endif

#ifdef ID_S_UV
	uv();
#endif

#ifdef ID_S_HEATER
	heater();
#endif

#ifdef ID_S_LIGHT_LEVEL
	light_level();
#endif

#ifdef ID_S_AIR_QUALITY
	air();
#endif

#ifdef ID_S_DUST
	dust();
#endif

#ifdef ID_S_HVAC
	hvac();
#endif

#ifdef ID_S_MULTIMETER
	multimeter();
#endif


#ifdef ID_S_CUSTOM
	custom();
#endif

	wait(SLEEP_TIME); //sleep a bit
}

// This is called when a new time value was received
void receiveTime(uint32_t controllerTime)
{

	Serial1.print("Time value received: ");
	Serial1.println(controllerTime);

}







#ifdef ID_S_BARO
void baro()
{

	const char *weather[] = {"stable","sunny","cloudy","unstable","thunderstorm","unknown"};
	long pressure = map(randNumber,1,100,870,1086);// hPa?
	int forecast = map(randNumber,1,100,0,5);

	Serial1.print("Atmospheric Pressure is: " );
	Serial1.println(pressure);
	send(msg_S_BARO_P.set(pressure));

	Serial1.print("Weather forecast: " );
	Serial1.println(weather[forecast]);
	send(msg_S_BARO_F.set(weather[forecast]));

}
#endif

#ifdef ID_S_WIND
void wind()
{

	Serial1.print("Wind Speed is: " );
	Serial1.println(randNumber);
	send(msg_S_WIND_S.set(randNumber));

	Serial1.print("Wind Gust is: " );
	Serial1.println(randNumber+10);
	send(msg_S_WIND_G.set(randNumber+10));

	Serial1.print("Wind Direction is: " );
	Serial1.println(map(randNumber,1,100,0,360));
	send(msg_S_WIND_D.set(map(randNumber,1,100,0,360)));

}
#endif

#ifdef ID_S_RAIN
void rain()
{

	Serial1.print("Rain amount  is: " );
	Serial1.println(randNumber);

	send(msg_S_RAIN_A.set(randNumber));

	Serial1.print("Rain rate  is: " );
	Serial1.println(randNumber/60);

	send(msg_S_RAIN_R.set(randNumber/60,1));

}
#endif

#ifdef ID_S_UV
void uv()
{

	Serial1.print("Ultra Violet level is: " );
	Serial1.println(map(randNumber,1,100,0,15));

	send(msg_S_UV.set(map(randNumber,1,100,0,15)));

}
#endif

#ifdef ID_S_HEATER
void heater()
{
	//  float heater_setpoint=21.5;
	//  float heater_temp=23.5;
	//  bool heater_status=false;
	//  String heatState="Off";

	Serial1.print("Heater flow state is: " );
	Serial1.println(heater_flow_state);
	send(msg_S_HEATER_FLOW_STATE.set(heater_flow_state.c_str()));

	//  Serial1.print("Heater on/off is: " );
	//  Serial1.println((heater_status==true)?"On":"Off");
	//  send(msg_S_HEATER_STATUS.set(heater_status));

	//  Serial1.print("Heater Temperature is: " );
	//  Serial1.println(heater_temp,1);
	//  send(msg_S_HEATER_TEMP.set(heater_temp,1));

	Serial1.print("Heater Setpoint: " );
	Serial1.println(heater_setpoint,1);
	send(msg_S_HEATER_SET_POINT.set(heater_setpoint,1));
}
#endif

#ifdef ID_S_LIGHT_LEVEL
void light_level()
{

	Serial1.print("Light is: " );
	Serial1.println(map(randNumber,1,100,0,150));

	send(msg_S_LIGHT_LEVEL.set(map(randNumber,1,100,0,150)));

}
#endif

#ifdef ID_S_AIR_QUALITY
void air()
{

	Serial1.print("Air Quality is: " );
	Serial1.println(randNumber);

	send(msg_S_AIR_QUALITY.set(randNumber));

}
#endif

#ifdef ID_S_DUST
void dust()
{

	Serial1.print("Dust level is: " );
	Serial1.println(randNumber);

	send(msg_S_DUST.set(randNumber));

}
#endif


#ifdef ID_S_HVAC
void hvac()
{

	//  float hvac_SetPointHeat = 16.5;
	//  float hvac_SetPointCool = 25.5;
	//  String hvac_FlowState   = "AutoChangeOver";
	//  String hvac_FlowMode    = "Auto";
	//  String hvac_Speed       = "Normal";

	Serial1.print("HVAC Set Point Heat is: " );
	Serial1.println(hvac_SetPointHeat);
	send(msg_S_HVAC_V_HVAC_SETPOINT_HEAT.set(hvac_SetPointHeat,1));

	Serial1.print("HVAC Set Point Cool is: " );
	Serial1.println(hvac_SetPointCool);
	send(msg_S_HVAC_V_HVAC_SETPOINT_COOL.set(hvac_SetPointCool,1));

	Serial1.print("HVAC Flow State is: " );
	Serial1.println(hvac_FlowState);
	send(msg_S_HVAC_V_HVAC_FLOW_STATET.set(hvac_FlowState.c_str()));

	Serial1.print("HVAC Flow Mode is: " );
	Serial1.println(hvac_FlowMode);
	send(msg_S_HVAC_V_HVAC_FLOW_MODE.set(hvac_FlowMode.c_str()));

	Serial1.print("HVAC Speed is: " );
	Serial1.println(hvac_Speed);
	send(msg_S_HVAC_V_HVAC_SPEED.set(hvac_Speed.c_str()));

}
#endif

#ifdef ID_S_MULTIMETER
void multimeter()
{
	int impedance=map(randNumber,1,100,0,15000);
	int volt=map(randNumber,1,100,0,380);
	int amps=map(randNumber,1,100,0,16);

	Serial1.print("Impedance is: " );
	Serial1.println(impedance);
	send(msg_S_MULTIMETER_V_IMPEDANCE.set(impedance));

	Serial1.print("Voltage is: " );
	Serial1.println(volt);
	send(msg_S_MULTIMETER_V_VOLTAGE.set(volt));

	Serial1.print("Current is: " );
	Serial1.println(amps);
	send(msg_S_MULTIMETER_V_CURRENT.set(amps));

}
#endif


#ifdef ID_S_CUSTOM
void custom()
{

	Serial1.print("Custom value is: " );
	Serial1.println(randNumber);

	send(msg_S_CUSTOM_1.set(randNumber));
	send(msg_S_CUSTOM_2.set(randNumber));
	send(msg_S_CUSTOM_3.set(randNumber));
	send(msg_S_CUSTOM_4.set(randNumber));
	send(msg_S_CUSTOM_5.set(randNumber));

}
#endif


void receive(const MyMessage &message)
{
	switch (message.getType()) {
	case V_LIGHT: 
	//case V_STATUS: 
	{
		ot.setMessage(&message);
		break;
	}
	default:
		break;
	}
}
