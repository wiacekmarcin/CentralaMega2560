#include "kontaktrony.h"


//#ifdef ID_S_ARMED
//bool isArmed;
//#endif


//#ifdef ID_S_DOOR // V_TRIPPED, V_ARMED


void kontaktrony()
{
    MyMessage msg_S_DOOR_T_WE(ID_S_DRZWI_WEJSCIOWE,V_TRIPPED);
    MyMessage msg_S_DOOR_T_PR(ID_S_DRZWI_PRACOWNIA,V_TRIPPED);
    MyMessage msg_S_DOOR_T_PA(ID_S_DRZWI_POKOJ,V_TRIPPED);
    MyMessage msg_S_DOOR_T_LA(ID_S_DRZWI_LAZIENKA,V_TRIPPED);
    MyMessage msg_S_DOOR_T_WC(ID_S_DRZWI_WC,V_TRIPPED);
    MyMessage msg_S_DOOR_T_KU(ID_S_DRZWI_KUCHNIA,V_TRIPPED);
    MyMessage msg_S_DOOR_A(ID_S_ARMED, V_ARMED);

    MyMessage msg_S_DOOR_T_BSYP_O1(ID_S_DRZWI_BAL_SYP_OTW_1,V_TRIPPED);
    MyMessage msg_S_DOOR_T_BSYP_O2(ID_S_DRZWI_BAL_SYP_OTW_2,V_TRIPPED);
    MyMessage msg_S_DOOR_T_BSYP_U(ID_S_DRZWI_BAL_SYP_UCH,V_TRIPPED);

    MyMessage msg_S_DOOR_T_BSAL_O1(ID_S_DRZWI_BAL_SAL_OTW_1,V_TRIPPED);
    MyMessage msg_S_DOOR_T_BSAL_O2(ID_S_DRZWI_BAL_SAL_OTW_2,V_TRIPPED);
    MyMessage msg_S_DOOR_T_BSAL_U(ID_S_DRZWI_BAL_SAL_UCH,V_TRIPPED);

    MyMessage msg_S_WINDOW_T_PRAC_O1(ID_S_OKNO_PRAC_OTW_1,V_TRIPPED);
    MyMessage msg_S_WINDOW_T_PRAC_O2(ID_S_OKNO_PRAC_OTW_2,V_TRIPPED);
    MyMessage msg_S_WINDOW_T_PRAC_U(ID_S_OKNO_PRAC_UCH,V_TRIPPED);

    MyMessage msg_S_WINDOW_T_POK_O1(ID_S_OKNO_POK_OTW_1,V_TRIPPED);
    MyMessage msg_S_WINDOW_T_POK_O2(ID_S_OKNO_POK_OTW_2,V_TRIPPED);
    MyMessage msg_S_WINDOW_T_POK_U(ID_S_OKNO_POK_UCH,V_TRIPPED);

    MyMessage msg_S_WINDOW_T_KUCH_O1(ID_S_OKNO_KUCH_OTW_1,V_TRIPPED);
    MyMessage msg_S_WINDOW_T_KUCH_O2(ID_S_OKNO_KUCH_OTW_2,V_TRIPPED);
    MyMessage msg_S_WINDOW_T_KUCH_U(ID_S_OKNO_KUCH_UCH,V_TRIPPED);
    send(msg_S_DOOR_T_WE.set((int16_t)1));
    send(msg_S_DOOR_T_PR.set((int16_t)1));
    send(msg_S_DOOR_T_PA.set((int16_t)1));
    send(msg_S_DOOR_T_LA.set((int16_t)1));
    send(msg_S_DOOR_T_WC.set((int16_t)1));
    send(msg_S_DOOR_T_KU.set((int16_t)1));

    send( msg_S_DOOR_T_BSYP_O1.set((int16_t)1));
    send( msg_S_DOOR_T_BSYP_O2.set((int16_t)1));
    send( msg_S_DOOR_T_BSYP_U.set((int16_t)1));

    send( msg_S_DOOR_T_BSAL_O1.set((int16_t)1));
    send( msg_S_DOOR_T_BSAL_O2.set((int16_t)1));
    send( msg_S_DOOR_T_BSAL_U.set((int16_t)1));

    send( msg_S_WINDOW_T_PRAC_O1.set((int16_t)1));
    send( msg_S_WINDOW_T_PRAC_O2.set((int16_t)1));
    send( msg_S_WINDOW_T_PRAC_U.set((int16_t)1));

    send( msg_S_WINDOW_T_POK_O1.set((int16_t)1));
    send( msg_S_WINDOW_T_POK_O2.set((int16_t)1));
    send( msg_S_WINDOW_T_POK_U.set((int16_t)1));

    send( msg_S_WINDOW_T_KUCH_O1.set((int16_t)1));
    send( msg_S_WINDOW_T_KUCH_O2.set((int16_t)1));
    send( msg_S_WINDOW_T_KUCH_U.set((int16_t)1));


	//Serial.print("Door is: " );

    //drzwi otwarte
    //send(msg_S_DOOR_T.set((int16_t)1));

    //zamkniete
    //send(msg_S_DOOR_T.set((int16_t)0));

	
#ifdef ID_S_ARMED
	//Serial.print("System is: " );
	//Serial.println((isArmed ? "Armed":"Disarmed"));
	send(msg_S_DOOR_A.set(true));
#endif
}

void kontaktrony_presentation()
{
    Serial1.println("  S_DOOR");
	present(ID_S_DRZWI_WEJSCIOWE,S_DOOR,"Drzwi wejsciowe");
    present(ID_S_DRZWI_PRACOWNIA,S_DOOR,"Drzwi pracownia");
    present(ID_S_DRZWI_POKOJ,S_DOOR,"Drzwi pokoj");
    present(ID_S_DRZWI_LAZIENKA,S_DOOR,"Drzwi lazienka");
    present(ID_S_DRZWI_WC,S_DOOR,"Drzwi wc");
    present(ID_S_DRZWI_KUCHNIA,S_DOOR,"Drzwi kuchnia");

    present(ID_S_DRZWI_BAL_SYP_OTW_1,S_DOOR,"Drzwi balkonowe lewe sypialnia");
    present(ID_S_DRZWI_BAL_SYP_OTW_2,S_DOOR,"Drzwi balkonowe prawe sypialnia");
    present(ID_S_DRZWI_BAL_SYP_UCH,S_DOOR,"Drzwi balkonowe uchylone sypialnia");

    present(ID_S_DRZWI_BAL_SAL_OTW_1,S_DOOR,"Drzwi balkonowe lewe salon");
    present(ID_S_DRZWI_BAL_SAL_OTW_2,S_DOOR,"Drzwi balkonowe prawe salon");
    present(ID_S_DRZWI_BAL_SAL_UCH,S_DOOR,"Drzwi balkonowe uchylone salon");

    present(ID_S_OKNO_PRAC_OTW_1,S_DOOR,"Okno lewe pracownia");
    present(ID_S_OKNO_PRAC_OTW_2,S_DOOR,"Okno prawe pracownia");
    present(ID_S_OKNO_PRAC_UCH,S_DOOR,"Okno uchylone pracownia");

    present(ID_S_OKNO_POK_OTW_1,S_DOOR,"Okno lewe pokoj");
    present(ID_S_OKNO_POK_OTW_2,S_DOOR,"Okno prawe pokoj");
    present(ID_S_OKNO_POK_UCH,S_DOOR,"Okno uchylone pokoj");

    present(ID_S_OKNO_KUCH_OTW_1,S_DOOR,"Okno lewe kuchnia");
    present(ID_S_OKNO_KUCH_OTW_2,S_DOOR,"Okno prawe kuchnia");
    present(ID_S_OKNO_KUCH_UCH,S_DOOR,"Okno uchylone kuchnia");
}
