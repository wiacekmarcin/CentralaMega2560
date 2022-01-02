#include "ogrzewanie_temp.h"
#include <Arduino.h>

OgrzwanieTemp::OgrzwanieTemp()    :
    msg_OG_POMPA(O_POMPA,V_STATUS),
    msg_OG_SALON(O_SALON,V_STATUS),
    msg_OG_KUCHNIA(O_KUCHNIA,V_STATUS),
    msg_OG_LAZIENKA(O_LAZIENKA,V_STATUS),
    msg_OG_HOL1(O_HOL1,V_STATUS),
    msg_OG_HOL2(O_HOL2,V_STATUS),
    msg_OG_HOL3(O_HOL3,V_STATUS),
    msg_OG_WC(O_WC,V_STATUS),
    msg_OG_LAMPA(O_LAMPA,V_STATUS),
    msg_OG_KALORYFER(O_KALORYFER, V_STATUS),
    msg_OS_KW_PRYSZ(O_KW_PRYSZ,V_STATUS),
    msg_OS_KW_WANNA(O_KW_WANNA,V_STATUS),
    msg_OG_GN_SALON(O_GN_SALON, V_STATUS),
    msg_OG_KUCH_SUF(O_KUCH_SUF, V_STATUS),
    msg_WI_KUCHNIA(W_KUCHNIA,V_STATUS),
    msg_WI_LAZIENKA(W_LAZIENKA,V_STATUS),
    
    o_lazienka(false),
	o_kuchnia(false),
	o_salon(false)

{
    msg_OG_POMPA.set(0);
    msg_OG_SALON.set(0);
    msg_OG_KUCHNIA.set(0);
    msg_OG_LAZIENKA.set(0);
    msg_OG_HOL1.set(0);
    msg_OG_HOL2.set(0);
    msg_OG_HOL3.set(0);
    msg_OG_WC.set(0);
    msg_OS_KW_PRYSZ.set(0);
    msg_WI_KUCHNIA.set(0);
    msg_WI_LAZIENKA.set(0);
    msg_OG_LAMPA.set(0);
    msg_OG_KALORYFER.set(0);
    msg_OS_KW_WANNA.set(0);
    msg_OG_GN_SALON.set(0);
    msg_OG_KUCH_SUF.set(0);
    msg_WI_KUCHNIA.set(0);
    msg_WI_LAZIENKA.set(0);
}
void OgrzwanieTemp::init()
{
    pinMode(O_POMPAPIN, OUTPUT);
    pinMode(O_LAZIENKAPIN, OUTPUT);
    pinMode(O_SALONPIN, OUTPUT);
    pinMode(O_KUCHNIAPIN, OUTPUT);
    pinMode(O_LAMPAPIN, OUTPUT);
    pinMode(O_HOL1PIN, OUTPUT);
    pinMode(O_HOL2PIN, OUTPUT);
    pinMode(O_HOL3PIN, OUTPUT);
    pinMode(O_WCPIN, OUTPUT);
    pinMode(O_KW_PRYSZPIN, OUTPUT);
    pinMode(O_GNI_SALONPIN, OUTPUT);
    pinMode(O_KW_WANNAPIN, OUTPUT);
    pinMode(O_KALORYFERPIN, OUTPUT);

    //pinMode(W_KUCHNIAPIN, OUTPUT);
    //pinMode(W_LAZIENKAPIN, OUTPUT);


    send(msg_OG_POMPA);
    send(msg_OG_SALON);
    send(msg_OG_KUCHNIA);
 	send(msg_OG_LAZIENKA);
	send(msg_OG_LAMPA);
    send(msg_OG_HOL1);
    send(msg_OG_HOL2);
    send(msg_OG_HOL3);
    send(msg_OG_WC);
    send(msg_OS_KW_PRYSZ);
    send(msg_WI_KUCHNIA);
    send(msg_WI_LAZIENKA);
    send(msg_OG_KALORYFER);
    send(msg_OS_KW_WANNA);
    send(msg_OG_GN_SALON);
    send(msg_OG_KUCH_SUF);
}

void OgrzwanieTemp::presentation()
{
    present(O_POMPA,S_BINARY,"Pompa");
    present(O_SALON,S_BINARY,"Ogrz. salonu");
    present(O_KUCHNIA,S_BINARY,"Ogrz. kuchnia");
    present(O_LAZIENKA,S_BINARY,"Ogrz. lazienka");
    present(O_HOL1,S_BINARY,"Ogrz. hol 1");
    present(O_HOL2, S_BINARY,"Ogrz. hol 2");
    present(O_HOL3,S_BINARY,"Ogrz. hol 3");
    present(O_WC,S_BINARY,"Ogrz. WC");
    present(O_KW_PRYSZ,S_BINARY,"Ośw. kwiatów (Prysznic)");
    present(O_KW_WANNA,S_BINARY,"Ośw. kwiatów (Wanna)");
    present(W_KUCHNIA,S_BINARY,"Wiatrak kuchnia");
    present(W_LAZIENKA,S_BINARY,"Wiatrak lazienka");
    present(O_LAMPA,S_BINARY, "Osw. przy pompie");
    present(O_KUCH_SUF,S_BINARY, "Ogrz. w sufice w kuchni");
    present(O_KALORYFER,S_BINARY, "Kaloryfer lazienka");
    present(O_KALORYFER,S_BINARY, "Gniazdo Salon");
    
}

void OgrzwanieTemp::setOgrzLazienka(bool val)
{
    o_lazienka = val;
    digitalWrite(O_LAZIENKAPIN, val?HIGH:LOW);
    digitalWrite(O_POMPAPIN,   (o_lazienka||o_kuchnia||o_salon)?HIGH:LOW);
    msg_OG_LAZIENKA.set(val);
    send(msg_OG_LAZIENKA);
    msg_OG_POMPA.set(o_lazienka||o_kuchnia||o_salon);
    send(msg_OG_POMPA);
}

void OgrzwanieTemp::setOgrzKuchnia(bool val)
{
    o_kuchnia = val;
    digitalWrite(O_KUCHNIAPIN, val?HIGH:LOW);
    digitalWrite(O_POMPAPIN,   (o_lazienka||o_kuchnia||o_salon)?HIGH:LOW);
    msg_OG_KUCHNIA.set(val);
    send(msg_OG_KUCHNIA);
    msg_OG_POMPA.set(o_lazienka||o_kuchnia||o_salon);
    send(msg_OG_POMPA);
}
	
void OgrzwanieTemp::setOgrzSalon(bool val)
{
    o_salon = val;
    digitalWrite(O_SALONPIN, val?HIGH:LOW);
    digitalWrite(O_POMPAPIN,   (o_lazienka||o_kuchnia||o_salon)?HIGH:LOW);
    msg_OG_SALON.set(val);
    send(msg_OG_SALON);
    msg_OG_POMPA.set(o_lazienka||o_kuchnia||o_salon);
    send(msg_OG_POMPA);
}

void OgrzwanieTemp::set(MyMessage & m, int pin, bool val, bool reverse)
{
    m.set(val);
    if (reverse) {
        digitalWrite(pin, val?LOW:HIGH);
    } else {
        digitalWrite(pin, val?HIGH:LOW);
    }
    send(m);
}

void OgrzwanieTemp::setPompa(bool val)
{
    o_salon = val;
    o_kuchnia = val;
    o_lazienka = val;

    digitalWrite(O_KUCHNIAPIN, val?HIGH:LOW);
    digitalWrite(O_LAZIENKAPIN, val?HIGH:LOW);
    digitalWrite(O_SALONPIN, val?HIGH:LOW);
    digitalWrite(O_POMPAPIN,   (o_lazienka||o_kuchnia||o_salon)?HIGH:LOW);
    msg_OG_LAZIENKA.set(val);
    send(msg_OG_LAZIENKA);
    msg_OG_KUCHNIA.set(val);
    send(msg_OG_KUCHNIA);
    msg_OG_SALON.set(val);
    send(msg_OG_SALON);
    msg_OG_POMPA.set(o_lazienka||o_kuchnia||o_salon);
    send(msg_OG_POMPA);

}

bool OgrzwanieTemp::setMessage(const MyMessage *msg)
{
    switch(msg->getSensor()) {
        case O_POMPA:
            setPompa(msg->getBool());
            return true;
        case O_SALON:
            setOgrzSalon(msg->getBool());
            return true;
        case O_KUCHNIA:
            setOgrzKuchnia(msg->getBool());
            return true;
        case O_LAZIENKA:
            setOgrzLazienka(msg->getBool());
            return true;
        case O_LAMPA: 
            set(msg_OG_LAMPA, O_LAMPAPIN, msg->getBool());
            return true;
        case O_KW_PRYSZ: 
            set(msg_OS_KW_PRYSZ, O_KW_PRYSZPIN, msg->getBool());
            return true;
        case O_KW_WANNA: 
            set(msg_OS_KW_WANNA, O_KW_WANNAPIN, msg->getBool());
            return true;
        case W_KUCHNIA: 
            //set (msg_WI_KUCHNIA, W_KUCHNIAPIN, msg->getBool());
            return true;
        case W_LAZIENKA: 
            //set(msg_WI_LAZIENKA, W_LAZIENKAPIN, msg->getBool());
            return true;
        case O_HOL1:
            set(msg_OG_HOL1, O_HOL1PIN, msg->getBool());
            return true;
        case O_HOL2:
            set(msg_OG_HOL2, O_HOL2PIN, msg->getBool());
            return true;
        case O_HOL3:
            set(msg_OG_HOL3, O_HOL3PIN, msg->getBool(), true);
            return true;
        case O_WC:
            set(msg_OG_WC, O_WCPIN, msg->getBool(), true);
            return true;
        case O_KUCH_SUF:
            set(msg_OG_KUCH_SUF, O_KUCH_SUF, msg->getBool());
            return true;
        case O_KALORYFER:
            set(msg_OG_KALORYFER, O_KALORYFER, msg->getBool());
            return true;
        case O_GN_SALON:
            set(msg_OG_GN_SALON, O_GN_SALON, msg->getBool());
            return true;
        default:
            return false;
    }
}

