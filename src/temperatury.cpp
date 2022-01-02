 #include "temperatury.h"

Temperatury::Temperatury() :
    msg_S_T_WC(ID_S_TEMP_HUM_WC,V_TEMP),
    msg_S_T_HOL(ID_S_TEMP_HUM_HOL,V_TEMP),
    msg_S_H_WC(ID_S_TEMP_HUM_WC,V_HUM),
    msg_S_H_HOL(ID_S_TEMP_HUM_HOL,V_HUM),
    czWC(TEMP_HUM_WC_PIN, DHTTYPE),
    czHol(TEMP_HUM_HOL_PIN, DHTTYPE)

{

}

void Temperatury::init() 
{
    pinMode(TEMP_HUM_WC_PIN, INPUT);
    pinMode(TEMP_HUM_HOL_PIN, INPUT);
    czWC.begin();
    czHol.begin();
    msg_S_T_WC.set(0);
    msg_S_T_HOL.set(0);
    msg_S_H_WC.set(0);
    msg_S_H_HOL.set(0);
    send(msg_S_T_WC);
    send(msg_S_T_HOL);
    send(msg_S_H_WC);
    send(msg_S_H_HOL);
}

void Temperatury::get()
{
 
    msg_S_T_WC.set(czWC.readTemperature(),1);
    send(msg_S_T_WC);
    msg_S_H_WC.set(czWC.readHumidity(),0);
    send(msg_S_H_WC);

    msg_S_T_HOL.set(czHol.readTemperature(),1);
    send(msg_S_T_HOL);
    msg_S_H_HOL.set(czHol.readHumidity(), 0);
    send(msg_S_H_HOL);



    /*
    MyMessage msg_S_TEMP_HOL_1(ID_S_TEMP_HOL_1,V_TEMP);
    MyMessage msg_S_TEMP_HOL_2(ID_S_TEMP_HOL_2,V_TEMP);
    MyMessage msg_S_TEMP_HOL_3(ID_S_TEMP_HOL_3,V_TEMP);
    MyMessage msg_S_TEMP_KUCHNIA(ID_S_TEMP_KUCHNIA,V_TEMP);
    MyMessage msg_S_TEMP_WC(ID_S_TEMP_WC,V_TEMP);
    MyMessage msg_S_TEMP_LAZIENKA(ID_S_TEMP_LAZIENKA,V_TEMP);
    MyMessage msg_S_TEMP_CPU_POK(ID_S_TEMP_CPU_POK,V_TEMP);
    MyMessage msg_S_TEMP_CPU_KUCH(ID_S_TEMP_CPU_KUCH,V_TEMP);
    MyMessage msg_S_TEMP_CPU_WC(ID_S_TEMP_CPU_WC,V_TEMP);
    MyMessage msg_S_TEMP_CPU_CENT(ID_S_TEMP_CPU_CENT,V_TEMP);
    MyMessage msg_S_TEMP_CPU_SYP(ID_S_TEMP_CPU_SYP,V_TEMP);
    MyMessage msg_S_TEMP_OUT(ID_S_TEMP_OUT,V_TEMP);
    MyMessage msg_S_TEMP_HUM_POKOJ(ID_S_TEMP_HUM_POKOJ,V_TEMP);
    MyMessage msg_S_TEMP_HUM_PRAC(ID_S_TEMP_HUM_PRAC,V_TEMP);
    MyMessage msg_S_TEMP_HUM_LAZ(ID_S_TEMP_HUM_LAZ,V_TEMP);
    MyMessage msg_S_TEMP_HUM_WC(ID_S_TEMP_HUM_WC,V_TEMP);
    MyMessage msg_S_TEMP_HUM_KUCH_1(ID_S_TEMP_HUM_KUCH_1,V_TEMP);
    MyMessage msg_S_TEMP_HUM_KUCH_2(ID_S_TEMP_HUM_KUCH_2,V_TEMP);
    MyMessage msg_S_TEMP_HUM_SALON_1(ID_S_TEMP_HUM_SALON_1,V_TEMP);
    MyMessage msg_S_TEMP_HUM_SALON_2(ID_S_TEMP_HUM_SALON_2,V_TEMP);
    MyMessage msg_S_TEMP_HUM_SYP(ID_S_TEMP_HUM_SYP,V_TEMP);
    MyMessage msg_S_TEMP_HUM_JAD(ID_S_TEMP_HUM_JAD,V_TEMP);
    MyMessage msg_S_TEMP_HUM_OUT(ID_S_TEMP_HUM_OUT,V_TEMP);
    MyMessage msg_S_TEMP_HUM_POMPA(ID_S_TEMP_HUM_POMPA,V_TEMP);
    send(msg_S_TEMP_HOL_1.set(20));;
    send(msg_S_TEMP_HOL_2.set(20));;
    send(msg_S_TEMP_HOL_3.set(20));;
    send(msg_S_TEMP_KUCHNIA.set(20));;
    send(msg_S_TEMP_WC.set(20));;
    send(msg_S_TEMP_LAZIENKA.set(20));;
    send(msg_S_TEMP_CPU_POK.set(20));;
    send(msg_S_TEMP_CPU_KUCH.set(20));;
    send(msg_S_TEMP_CPU_WC.set(20));;
    send(msg_S_TEMP_CPU_CENT.set(20));;
    send(msg_S_TEMP_CPU_SYP.set(20));;
    send(msg_S_TEMP_OUT.set(20));;
    send(msg_S_TEMP_HUM_POKOJ.set(20));;
    send(msg_S_TEMP_HUM_PRAC.set(20));;
    send(msg_S_TEMP_HUM_LAZ.set(20));;
    send(msg_S_TEMP_HUM_WC.set(20));;
    send(msg_S_TEMP_HUM_KUCH_1.set(20));;
    send(msg_S_TEMP_HUM_KUCH_2.set(20));;
    send(msg_S_TEMP_HUM_SALON_1.set(20));;
    send(msg_S_TEMP_HUM_SALON_2.set(20));;
    send(msg_S_TEMP_HUM_SYP.set(20));;
    send(msg_S_TEMP_HUM_JAD.set(20));;
    send(msg_S_TEMP_HUM_OUT.set(20));;
    send(msg_S_TEMP_HUM_POMPA.set(20));;
    */
}
void Temperatury::presentation()
{
    present(ID_S_TEMP_HUM_WC,S_TEMP, "Temp. WC");
    present(ID_S_TEMP_HUM_HOL,S_TEMP, "Temp Hol");
    present(ID_S_TEMP_HUM_WC,S_HUM, "Wilg WC");
    present(ID_S_TEMP_HUM_HOL,S_HUM, "Wilg Hol");
    /*
    present(ID_S_TEMP_HOL_1,S_TEMP,"Temp. podlogi w holu 1");
    present(ID_S_TEMP_HOL_2,S_TEMP,"Temp. podlogi w holu 2");
    present(ID_S_TEMP_HOL_3,S_TEMP,"Temp. podlogi w holu 3");
    present(ID_S_TEMP_KUCHNIA,S_TEMP,"Temp. podlogi w kuchni");
    present(ID_S_TEMP_WC,S_TEMP,"Temp. podlogi w wc");
    present(ID_S_TEMP_LAZIENKA,S_TEMP,"Temp. pollogi w lazience");
    present(ID_S_TEMP_CPU_POK,S_TEMP,"Temp. sterownika pokoje");
    present(ID_S_TEMP_CPU_KUCH,S_TEMP,"Temp. sterownika kuchnia");
    present(ID_S_TEMP_CPU_WC,S_TEMP,"Temp. sterownika wc");
    present(ID_S_TEMP_CPU_CENT,S_TEMP,"Temp. sterownika centrala");
    present(ID_S_TEMP_CPU_SYP,S_TEMP,"Temp. sterownika sypialnia");
    present(ID_S_TEMP_OUT,S_TEMP,"Temp. na zewnatrzn");
    present(ID_S_TEMP_HUM_POKOJ,S_TEMP,"Temp. w pokoju");
    present(ID_S_TEMP_HUM_PRAC,S_TEMP,"Temp, w pracownii");
    present(ID_S_TEMP_HUM_LAZ,S_TEMP,"Temp. w lazience");
    present(ID_S_TEMP_HUM_WC,S_TEMP,"Temp. w wc");
    present(ID_S_TEMP_HUM_KUCH_1,S_TEMP,"Temp. w kuchni 1");
    present(ID_S_TEMP_HUM_KUCH_2,S_TEMP,"Temp. w kuchni 2");
    present(ID_S_TEMP_HUM_SALON_1,S_TEMP,"Temp. w salonie 1");
    present(ID_S_TEMP_HUM_SALON_2,S_TEMP,"Temp. w salonie 2");
    present(ID_S_TEMP_HUM_SYP,S_TEMP,"Temp. w sypialni");
    present(ID_S_TEMP_HUM_JAD,S_TEMP,"Temp. w jadalni");
    present(ID_S_TEMP_HUM_OUT,S_TEMP,"Temp (z wilg) na zewnatrzn");
    present(ID_S_TEMP_HUM_POMPA,S_TEMP,"Temp (z wilg) na zewnatrzn");
    */
}

