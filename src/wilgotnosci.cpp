#include "wilgotnosci.h"

#if 0

void wilgotnosci()
{
    MyMessage msg_S_HUM_TEMP_POKOJ(ID_S_HUM_TEMP_POKOJ,V_HUM);
    MyMessage msg_S_HUM_TEMP_PRAC(ID_S_HUM_TEMP_PRAC,V_HUM);
    MyMessage msg_S_HUM_TEMP_LAZ(ID_S_HUM_TEMP_LAZ,V_HUM);
    MyMessage msg_S_HUM_TEMP_WC(ID_S_HUM_TEMP_WC,V_HUM);
    MyMessage msg_S_HUM_TEMP_KUCH_1(ID_S_HUM_TEMP_KUCH_1,V_HUM);
    MyMessage msg_S_HUM_TEMP_KUCH_2(ID_S_HUM_TEMP_KUCH_2,V_HUM);
    MyMessage msg_S_HUM_TEMP_SALON_1(ID_S_HUM_TEMP_SALON_1,V_HUM);
    MyMessage msg_S_HUM_TEMP_SALON_2(ID_S_HUM_TEMP_SALON_2,V_HUM);
    MyMessage msg_S_HUM_TEMP_SYP(ID_S_HUM_TEMP_SYP,V_HUM);
    MyMessage msg_S_HUM_TEMP_JAD(ID_S_HUM_TEMP_JAD,V_HUM);
    MyMessage msg_S_HUM_TEMP_OUT(ID_S_HUM_TEMP_OUT,V_HUM);
    MyMessage msg_S_HUM_TEMP_POMPA(ID_S_HUM_TEMP_POMPA,V_HUM);
    send(msg_S_HUM_TEMP_POKOJ.set(50));
    send(msg_S_HUM_TEMP_PRAC.set(50));
    send(msg_S_HUM_TEMP_LAZ.set(50));
    send(msg_S_HUM_TEMP_WC.set(50));
    send(msg_S_HUM_TEMP_KUCH_1.set(50));
    send(msg_S_HUM_TEMP_KUCH_2.set(50));
    send(msg_S_HUM_TEMP_SALON_1.set(50));
    send(msg_S_HUM_TEMP_SALON_2.set(50));
    send(msg_S_HUM_TEMP_SYP.set(50));
    send(msg_S_HUM_TEMP_JAD.set(50));
    send(msg_S_HUM_TEMP_OUT.set(50));
    send(msg_S_HUM_TEMP_OUT.set(50));
    send(msg_S_HUM_TEMP_POMPA.set(50));
}
void wilgotnosci_presentation()
{
    present(ID_S_HUM_TEMP_POKOJ,S_HUM,"Wilgotnosc pokoj");
    present(ID_S_HUM_TEMP_PRAC,S_HUM,"Wilgotnosc pracownia");
    present(ID_S_HUM_TEMP_LAZ,S_HUM,"Wilgotnosc lazienka");
    present(ID_S_HUM_TEMP_WC,S_HUM,"Wilgotnosc wc");
    present(ID_S_HUM_TEMP_KUCH_1,S_HUM,"Wilgotnosc kuhcnia 1");
    present(ID_S_HUM_TEMP_KUCH_2,S_HUM,"Wilgotnosc kuchnia 2");
    present(ID_S_HUM_TEMP_SALON_1,S_HUM,"Wilgotnosc salon 1");
    present(ID_S_HUM_TEMP_SALON_2,S_HUM,"Wilgotnosc 2");
    present(ID_S_HUM_TEMP_SYP,S_HUM,"Wilgotnosc sypialnia");
    present(ID_S_HUM_TEMP_JAD,S_HUM,"Wilgotnosc jadalnia");
    present(ID_S_HUM_TEMP_OUT,S_HUM,"Wilgotnosc na zewn.");
    present(ID_S_HUM_TEMP_POMPA,S_HUM,"Wilgotnosc pompa ogrz.");
}

#endif