#ifndef _OGRZEWWANIE_H_
#define _OGRZEWANIE_H_

#include "main.h"
#include <core/MySensorsCore.h>

#define ID_S_HEATER_HOL_1       191
#define ID_S_HEATER_HOL_2       192
#define ID_S_HEATER_HOL_3       193
#define ID_S_HEATER_HOL_4       194
#define ID_S_HEATER_WC  195
#define ID_S_HEATER_LAZ 196
#define ID_S_HEATER_SAL 197
#define ID_S_HEATER_KUCH        198

void ogrzewanie();
void ogrzewanie_presentation();




//MyMessage msg_S_HEATER_SET_POINT(ID_S_HEATER,
//                                 V_HVAC_SETPOINT_HEAT);  // HVAC/Heater setpoint (Integer between 0-100). S_HEATER, S_HVAC
//MyMessage msg_S_HEATER_FLOW_STATE(ID_S_HEATER,
//                                 V_HVAC_FLOW_STATE);     // Mode of header. One of "Off", "HeatOn", "CoolOn", or "AutoChangeOver" // S_HVAC, S_HEATER

//MyMessage msg_S_HEATER_STATUS(ID_S_HEATER,V_STATUS);
//MyMessage msg_S_HEATER_TEMP(ID_S_HEATER,V_TEMP);

//float heater_setpoint=21.5;
//String heater_flow_state="Off";

//  float heater_temp=23.5;
//  bool heater_status=false;


// V_TEMP                // Temperature
// V_STATUS              // Binary status. 0=off 1=on
// V_HVAC_FLOW_STATE     // Mode of header. One of "Off", "HeatOn", "CoolOn", or "AutoChangeOver"
// V_HVAC_SPEED          // HVAC/Heater fan speed ("Min", "Normal", "Max", "Auto")
// V_HVAC_SETPOINT_HEAT  // HVAC/Heater setpoint



#endif