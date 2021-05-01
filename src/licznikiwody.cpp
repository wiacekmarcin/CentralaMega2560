#include "licznikiwody.h"


#if 0



void licznikiwody()
{
    MyMessage msg_S_WATER_CW_WC_UMY_F(ID_S_WATER_CW_WC_UMY,V_FLOW);
    MyMessage msg_S_WATER_ZW_WC_UMY_F(ID_S_WATER_ZW_WC_UMY,V_FLOW);
    MyMessage msg_S_WATER_ZW_WC_SED_F(ID_S_WATER_ZW_WC_SED,V_FLOW);
    MyMessage msg_S_WATER_ZW_WC_PRA_F(ID_S_WATER_ZW_WC_PRA,V_FLOW);
    MyMessage msg_S_WATER_CW_WC_PRA_F(ID_S_WATER_CW_WC_PRA,V_FLOW);
    MyMessage msg_S_WATER_ZW_LAZ_PRY_F(ID_S_WATER_ZW_LAZ_PRY,V_FLOW);
    MyMessage msg_S_WATER_CW_LAZ_PRY_F(ID_S_WATER_CW_LAZ_PRY,V_FLOW);
    MyMessage msg_S_WATER_ZW_LAZ_UMY_F(ID_S_WATER_ZW_LAZ_UMY,V_FLOW);
    MyMessage msg_S_WATER_CW_LAZ_UMY_F(ID_S_WATER_CW_LAZ_UMY,V_FLOW);
    MyMessage msg_S_WATER_ZW_LAZ_SED_F(ID_S_WATER_ZW_LAZ_SED,V_FLOW);
    MyMessage msg_S_WATER_ZW_LAZ_WAN_F(ID_S_WATER_ZW_LAZ_WAN,V_FLOW);
    MyMessage msg_S_WATER_CW_LAZ_WAN_F(ID_S_WATER_CW_LAZ_WAN,V_FLOW);
    MyMessage msg_S_WATER_CW_KUCH_UMY_F(ID_S_WATER_CW_KUCH_UMY,V_FLOW);
    MyMessage msg_S_WATER_ZW_KUCH_UMY_F(ID_S_WATER_ZW_KUCH_UMY,V_FLOW);
    MyMessage msg_S_WATER_ZW_KUCH_ZMY_F(ID_S_WATER_ZW_KUCH_ZMY,V_FLOW);

    MyMessage msg_S_WATER_CW_WC_UMY_V(ID_S_WATER_CW_WC_UMY,V_VOLUME);
    MyMessage msg_S_WATER_ZW_WC_UMY_V(ID_S_WATER_ZW_WC_UMY,V_VOLUME);
    MyMessage msg_S_WATER_ZW_WC_SED_V(ID_S_WATER_ZW_WC_SED,V_VOLUME);
    MyMessage msg_S_WATER_ZW_WC_PRA_V(ID_S_WATER_ZW_WC_PRA,V_VOLUME);
    MyMessage msg_S_WATER_CW_WC_PRA_V(ID_S_WATER_CW_WC_PRA,V_VOLUME);
    MyMessage msg_S_WATER_ZW_LAZ_PRY_V(ID_S_WATER_ZW_LAZ_PRY,V_VOLUME);
    MyMessage msg_S_WATER_CW_LAZ_PRY_V(ID_S_WATER_CW_LAZ_PRY,V_VOLUME);
    MyMessage msg_S_WATER_ZW_LAZ_UMY_V(ID_S_WATER_ZW_LAZ_UMY,V_VOLUME);
    MyMessage msg_S_WATER_CW_LAZ_UMY_V(ID_S_WATER_CW_LAZ_UMY,V_VOLUME);
    MyMessage msg_S_WATER_ZW_LAZ_SED_V(ID_S_WATER_ZW_LAZ_SED,V_VOLUME);
    MyMessage msg_S_WATER_ZW_LAZ_WAN_V(ID_S_WATER_ZW_LAZ_WAN,V_VOLUME);
    MyMessage msg_S_WATER_CW_LAZ_WAN_V(ID_S_WATER_CW_LAZ_WAN,V_VOLUME);
    MyMessage msg_S_WATER_CW_KUCH_UMY_V(ID_S_WATER_CW_KUCH_UMY,V_VOLUME);
    MyMessage msg_S_WATER_ZW_KUCH_UMY_V(ID_S_WATER_ZW_KUCH_UMY,V_VOLUME);
    MyMessage msg_S_WATER_ZW_KUCH_ZMY_V(ID_S_WATER_ZW_KUCH_ZMY,V_VOLUME);
    send(msg_S_WATER_CW_WC_UMY_F.set(0));
    send(msg_S_WATER_CW_WC_UMY_V.set(0));
    send(msg_S_WATER_ZW_WC_UMY_F.set(0));
    send(msg_S_WATER_ZW_WC_UMY_V.set(0));
    send(msg_S_WATER_ZW_WC_SED_F.set(0));
    send(msg_S_WATER_ZW_WC_SED_V.set(0));
    send(msg_S_WATER_ZW_WC_PRA_F.set(0));
    send(msg_S_WATER_ZW_WC_PRA_V.set(0));
    send(msg_S_WATER_CW_WC_PRA_F.set(0));
    send(msg_S_WATER_CW_WC_PRA_V.set(0));
    send(msg_S_WATER_ZW_LAZ_PRY_F.set(0));
    send(msg_S_WATER_ZW_LAZ_PRY_V.set(0));
    send(msg_S_WATER_CW_LAZ_PRY_F.set(0));
    send(msg_S_WATER_CW_LAZ_PRY_V.set(0));
    send(msg_S_WATER_ZW_LAZ_UMY_F.set(0));
    send(msg_S_WATER_ZW_LAZ_UMY_V.set(0));
    send(msg_S_WATER_CW_LAZ_UMY_F.set(0));
    send(msg_S_WATER_CW_LAZ_UMY_V.set(0));
    send(msg_S_WATER_ZW_LAZ_SED_F.set(0));
    send(msg_S_WATER_ZW_LAZ_SED_V.set(0));
    send(msg_S_WATER_ZW_LAZ_WAN_F.set(0));
    send(msg_S_WATER_ZW_LAZ_WAN_V.set(0));
    send(msg_S_WATER_CW_LAZ_WAN_F.set(0));
    send(msg_S_WATER_CW_LAZ_WAN_V.set(0));
    send(msg_S_WATER_CW_KUCH_UMY_F.set(0));
    send(msg_S_WATER_CW_KUCH_UMY_V.set(0));
    send(msg_S_WATER_ZW_KUCH_UMY_F.set(0));
    send(msg_S_WATER_ZW_KUCH_UMY_V.set(0));
    send(msg_S_WATER_ZW_KUCH_ZMY_F.set(0));
    send(msg_S_WATER_ZW_KUCH_ZMY_V.set(0));
}
void licznikiwody_presentation()
{
    present(ID_S_WATER_CW_WC_UMY,S_WATER,"Ciepla woda umywalka WC");
    present(ID_S_WATER_ZW_WC_UMY,S_WATER,"Zimna woda umywalka WC");
    present(ID_S_WATER_ZW_WC_SED,S_WATER,"Zimna woda sedes WC");
    present(ID_S_WATER_ZW_WC_PRA,S_WATER,"Zimna woda pralka WC");
    present(ID_S_WATER_CW_WC_PRA,S_WATER,"Ciepla woda pralka WC");
    present(ID_S_WATER_ZW_LAZ_PRY,S_WATER,"Zimna woda prysznic lazienka");
    present(ID_S_WATER_CW_LAZ_PRY,S_WATER,"Ciepla woda prysznic lazienka");
    present(ID_S_WATER_ZW_LAZ_UMY,S_WATER,"Zimna woda umywalka lazienka");
    present(ID_S_WATER_CW_LAZ_UMY,S_WATER,"Ciepla woda umywalka lazienka");
    present(ID_S_WATER_ZW_LAZ_SED,S_WATER,"Zimna woda sedes lazienka");
    present(ID_S_WATER_ZW_LAZ_WAN,S_WATER,"Zimna woda wanna lazienka");
    present(ID_S_WATER_CW_LAZ_WAN,S_WATER,"Ciepla woda wanna lazienka");
    present(ID_S_WATER_CW_KUCH_UMY,S_WATER,"Ciepla woda umywalka kuchnia");
    present(ID_S_WATER_ZW_KUCH_UMY,S_WATER,"Zimna woda umywalka kuchnia");
    present(ID_S_WATER_ZW_KUCH_ZMY,S_WATER,"Zimna woda zmywarka kuchnia");
}

#endif // 0