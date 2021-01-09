#include "czujnikiruchu.h"
#include <core/MySensorsCore.h>

//#ifdef ID_S_MOTION // V_TRIPPED, V_ARMED
//MyMessage msg_S_MOTION_A(ID_S_MOTION,V_ARMED);
//MyMessage msg_S_MOTION_T(ID_S_MOTION,V_TRIPPED);
//#endif

//#ifdef ID_S_MOTION
//void motion()
//{
//
//	Serial1.print("Motion is: " );
//
//	if (randNumber <= 50) {
//		Serial1.println("Active");
//		send(msg_S_MOTION_T.set(1));
//	} else {
//		Serial1.println("Quiet");
//		send(msg_S_MOTION_T.set(0));
//	}

//#ifdef ID_S_ARMED
//	Serial1.print("System is: " );
//	Serial1.println((isArmed ? "Armed":"Disarmed"));
//	send(msg_S_MOTION_A.set(isArmed));
//#endif
//}
//#endif



void czujnikiruchu()
{
    MyMessage msg_S_MOTION_H_DW(ID_S_RUCH_HOL_DW,V_TRIPPED);
    MyMessage msg_S_MOTION_PRAC(ID_S_RUCH_PRACOWNIA,V_TRIPPED);
    MyMessage msg_S_MOTION_POK(ID_S_RUCH_POKOJ,V_TRIPPED);
    MyMessage msg_S_MOTION_LAZ_L(ID_S_RUCH_LAZIENKA_L,V_TRIPPED);
    MyMessage msg_S_MOTION_LAZ_P(ID_S_RUCH_LAZIENKA_P,V_TRIPPED);
    MyMessage msg_S_MOTION_WC(ID_S_RUCH_WC,V_TRIPPED);
    MyMessage msg_S_MOTION_HOL_PP(ID_S_RUCH_HOL_PP,V_TRIPPED);
    MyMessage msg_S_MOTION_HOL_2PP(ID_S_RUCH_HOL_2PP,V_TRIPPED);
    MyMessage msg_S_MOTION_HOL_2DW(ID_S_RUCH_HOL_2DW,V_TRIPPED);
    MyMessage msg_S_MOTION_HOL_SAL(ID_S_RUCH_HOL_SAL,V_TRIPPED);
    MyMessage msg_S_MOTION_HOL_KUCH(ID_S_RUCH_HOL_KUCH,V_TRIPPED);
    MyMessage msg_S_MOTION_KUCH(ID_S_RUCH_KUCHNIA,V_TRIPPED);
    MyMessage msg_S_MOTION_KUCH_KUCH(ID_S_RUCH_KUCHNIA_KUCH,V_TRIPPED);
    MyMessage msg_S_MOTION_KUCH_SAL(ID_S_RUCH_KUCHNIA_SAL,V_TRIPPED);

    send( msg_S_MOTION_H_DW.set(0));
    send( msg_S_MOTION_PRAC.set(0));
    send( msg_S_MOTION_POK.set(0));
    send( msg_S_MOTION_LAZ_L.set(0));
    send( msg_S_MOTION_LAZ_P.set(0));
    send( msg_S_MOTION_WC.set(0));
    send( msg_S_MOTION_HOL_PP.set(0));
    send( msg_S_MOTION_HOL_2PP.set(0));
    send( msg_S_MOTION_HOL_2DW.set(0));
    send( msg_S_MOTION_HOL_SAL.set(0));
    send( msg_S_MOTION_HOL_KUCH.set(0));
    send( msg_S_MOTION_KUCH.set(0));
    send( msg_S_MOTION_KUCH_KUCH.set(0));
    send( msg_S_MOTION_KUCH_SAL.set(0));
}

void czujnikiruchu_presentation()
{
    present(ID_S_RUCH_HOL_DW,S_MOTION,"CZ. R. drzwi wejsciowe");
    present(ID_S_RUCH_PRACOWNIA,S_MOTION,"CZ. R. ruchu pracownia");
    present(ID_S_RUCH_POKOJ,S_MOTION,"CZ. R. pokoj");
    present(ID_S_RUCH_LAZIENKA_L,S_MOTION,"CZ. R. lazienka lewa");
    present(ID_S_RUCH_LAZIENKA_P,S_MOTION,"CZ. R. lazienka prawa");
    present(ID_S_RUCH_WC,S_MOTION,"CZ. R. WC");
    present(ID_S_RUCH_HOL_PP,S_MOTION,"CZ. R. hol nad pokojami");
    present(ID_S_RUCH_HOL_2PP,S_MOTION,"CZ. R. hol w strone pokoji");
    present(ID_S_RUCH_HOL_2DW,S_MOTION,"CZ. R. w strone drzwi wejsciowych");
    present(ID_S_RUCH_HOL_SAL,S_MOTION,"CZ. R. w stronę salonu");
    present(ID_S_RUCH_HOL_KUCH,S_MOTION,"CZ. R. w strone kuchni");
    present(ID_S_RUCH_KUCHNIA,S_MOTION,"CZ. R. w kuchni");
    present(ID_S_RUCH_KUCHNIA_KUCH,S_MOTION,"CZ. R. kuchnia drzwi w strone kuchni");
    present(ID_S_RUCH_KUCHNIA_SAL,S_MOTION,"CZ. R. kuchnia drzwi w strone salonu");
}

