#include "ogrzewanie.h"



void ogrzewanie()
{
    MyMessage msg_S_HEATER_HOL_1_SET_POINT(ID_S_HEATER_HOL_1,V_HVAC_SETPOINT_HEAT);
    MyMessage msg_S_HEATER_HOL_1_FLOW_STATE(ID_S_HEATER_HOL_1,V_HVAC_FLOW_STATE);
    MyMessage msg_S_HEATER_HOL_1_STATUS(ID_S_HEATER_HOL_1,V_STATUS);
    MyMessage msg_S_HEATER_HOL_1_TEMP(ID_S_HEATER_HOL_1,V_TEMP);
    MyMessage msg_S_HEATER_HOL_2_SET_POINT(ID_S_HEATER_HOL_2,V_HVAC_SETPOINT_HEAT);
    MyMessage msg_S_HEATER_HOL_2_FLOW_STATE(ID_S_HEATER_HOL_2,V_HVAC_FLOW_STATE);
    MyMessage msg_S_HEATER_HOL_2_STATUS(ID_S_HEATER_HOL_2,V_STATUS);
    MyMessage msg_S_HEATER_HOL_2_TEMP(ID_S_HEATER_HOL_2,V_TEMP);
    MyMessage msg_S_HEATER_HOL_3_SET_POINT(ID_S_HEATER_HOL_3,V_HVAC_SETPOINT_HEAT);
    MyMessage msg_S_HEATER_HOL_3_FLOW_STATE(ID_S_HEATER_HOL_3,V_HVAC_FLOW_STATE);
    MyMessage msg_S_HEATER_HOL_3_STATUS(ID_S_HEATER_HOL_3,V_STATUS);
    MyMessage msg_S_HEATER_HOL_3_TEMP(ID_S_HEATER_HOL_3,V_TEMP);
    MyMessage msg_S_HEATER_HOL_4_SET_POINT(ID_S_HEATER_HOL_4,V_HVAC_SETPOINT_HEAT);
    MyMessage msg_S_HEATER_HOL_4_FLOW_STATE(ID_S_HEATER_HOL_4,V_HVAC_FLOW_STATE);
    MyMessage msg_S_HEATER_HOL_4_STATUS(ID_S_HEATER_HOL_4,V_STATUS);
    MyMessage msg_S_HEATER_HOL_4_TEMP(ID_S_HEATER_HOL_4,V_TEMP);
    MyMessage msg_S_HEATER_WC_SET_POINT(ID_S_HEATER_WC,V_HVAC_SETPOINT_HEAT);
    MyMessage msg_S_HEATER_WC_FLOW_STATE(ID_S_HEATER_WC,V_HVAC_FLOW_STATE);
    MyMessage msg_S_HEATER_WC_STATUS(ID_S_HEATER_WC,V_STATUS);
    MyMessage msg_S_HEATER_WC_TEMP(ID_S_HEATER_WC,V_TEMP);
    MyMessage msg_S_HEATER_LAZ_SET_POINT(ID_S_HEATER_LAZ,V_HVAC_SETPOINT_HEAT);
    MyMessage msg_S_HEATER_LAZ_FLOW_STATE(ID_S_HEATER_LAZ,V_HVAC_FLOW_STATE);
    MyMessage msg_S_HEATER_LAZ_STATUS(ID_S_HEATER_LAZ,V_STATUS);
    MyMessage msg_S_HEATER_LAZ_TEMP(ID_S_HEATER_LAZ,V_TEMP);
    MyMessage msg_S_HEATER_SAL_SET_POINT(ID_S_HEATER_SAL,V_HVAC_SETPOINT_HEAT);
    MyMessage msg_S_HEATER_SAL_FLOW_STATE(ID_S_HEATER_SAL,V_HVAC_FLOW_STATE);
    MyMessage msg_S_HEATER_SAL_STATUS(ID_S_HEATER_SAL,V_STATUS);
    MyMessage msg_S_HEATER_SAL_TEMP(ID_S_HEATER_SAL,V_TEMP);
    MyMessage msg_S_HEATER_KUCH_SET_POINT(ID_S_HEATER_KUCH,V_HVAC_SETPOINT_HEAT);
    MyMessage msg_S_HEATER_KUCH_FLOW_STATE(ID_S_HEATER_KUCH,V_HVAC_FLOW_STATE);
    MyMessage msg_S_HEATER_KUCH_STATUS(ID_S_HEATER_KUCH,V_STATUS);
    MyMessage msg_S_HEATER_KUCH_TEMP(ID_S_HEATER_KUCH,V_TEMP);
    send(msg_S_HEATER_HOL_1_SET_POINT.set(23));
    send(msg_S_HEATER_HOL_1_FLOW_STATE.set("off"));
    send(msg_S_HEATER_HOL_1_STATUS.set(0));
    send(msg_S_HEATER_HOL_1_TEMP.set(20));
    send(msg_S_HEATER_HOL_2_SET_POINT.set(23));
    send(msg_S_HEATER_HOL_2_FLOW_STATE.set("off"));
    send(msg_S_HEATER_HOL_2_STATUS.set(0));
    send(msg_S_HEATER_HOL_2_TEMP.set(20));
    send(msg_S_HEATER_HOL_3_SET_POINT.set(23));
    send(msg_S_HEATER_HOL_3_FLOW_STATE.set("off"));
    send(msg_S_HEATER_HOL_3_STATUS.set(0));
    send(msg_S_HEATER_HOL_3_TEMP.set(20));
    send(msg_S_HEATER_HOL_4_SET_POINT.set(23));
    send(msg_S_HEATER_HOL_4_FLOW_STATE.set("off"));
    send(msg_S_HEATER_HOL_4_STATUS.set(0));
    send(msg_S_HEATER_HOL_4_TEMP.set(20));
    send(msg_S_HEATER_WC_SET_POINT.set(23));
    send(msg_S_HEATER_WC_FLOW_STATE.set("off"));
    send(msg_S_HEATER_WC_STATUS.set(0));
    send(msg_S_HEATER_WC_TEMP.set(20));
    send(msg_S_HEATER_LAZ_SET_POINT.set(23));
    send(msg_S_HEATER_LAZ_FLOW_STATE.set("off"));
    send(msg_S_HEATER_LAZ_STATUS.set(0));
    send(msg_S_HEATER_LAZ_TEMP.set(20));
    send(msg_S_HEATER_SAL_SET_POINT.set(23));
    send(msg_S_HEATER_SAL_FLOW_STATE.set("off"));
    send(msg_S_HEATER_SAL_STATUS.set(0));
    send(msg_S_HEATER_SAL_TEMP.set(20));
    send(msg_S_HEATER_KUCH_SET_POINT.set(23));
    send(msg_S_HEATER_KUCH_FLOW_STATE.set("off"));
    send(msg_S_HEATER_KUCH_STATUS.set(0));
    send(msg_S_HEATER_KUCH_TEMP.set(20));
}

void ogrzewanie_presentation()
{
    present(ID_S_HEATER_HOL_1,S_HEATER,"Ogrzewanie podlogowe hol 1");
    present(ID_S_HEATER_HOL_2,S_HEATER,"Ogrzewanie podlogowe hol 2");
    present(ID_S_HEATER_HOL_3,S_HEATER,"Ogrzewanie podlogowe hol 3");
    present(ID_S_HEATER_HOL_4,S_HEATER,"Ogrzewanie podlogowe hol 4");
    present(ID_S_HEATER_WC,S_HEATER,"Ogrzewanie podlogowe wc 1");
    present(ID_S_HEATER_LAZ,S_HEATER,"Ogrzewanie podlogowe lazienka");
    present(ID_S_HEATER_SAL,S_HEATER,"Ogrzewanie scienne salon");
    present(ID_S_HEATER_KUCH,S_HEATER,"Ogrzewanie podlogowe kuchnia");
}
