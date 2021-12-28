#include "ogrzewanie_temp.h"
#include <Arduino.h>

OgrzwanieTemp::OgrzwanieTemp()    :
    msg_OG_POMPA(O_POMPA,V_LIGHT),
    msg_OG_SALON(O_SALON,V_LIGHT),
    msg_OG_KUCHNIA(O_KUCHNIA,V_LIGHT),
    msg_OG_LAZIENKA(O_LAZIENKA,V_LIGHT),
    msg_OG_HOL1(O_HOL1,V_LIGHT),
    msg_OG_HOL2(O_HOL2,V_LIGHT),
    msg_OG_HOL3(O_HOL3,V_LIGHT),
    msg_OG_WC(O_WC,V_LIGHT),
    msg_OG_LAMPA(O_LAMPA,V_LIGHT),
    msg_OS_KWIATY(O_KWIATY,V_LIGHT),
    msg_WI_KUCHNIA(W_KUCHNIA,V_LIGHT),
    msg_WI_LAZIENKA(W_LAZIENKA,V_LIGHT),
    
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
    msg_OS_KWIATY.set(0);
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
    pinMode(O_KWIATYPIN, OUTPUT);
    pinMode(W_KUCHNIAPIN, OUTPUT);
    pinMode(W_LAZIENKAPIN, OUTPUT);
 
    send(msg_OG_POMPA);
    send(msg_OG_SALON);
    send(msg_OG_KUCHNIA);
 	send(msg_OG_LAZIENKA);
	send(msg_OG_LAMPA);
    send(msg_OG_HOL1);
    send(msg_OG_HOL2);
    send(msg_OG_HOL3);
    send(msg_OG_WC);
    send(msg_OS_KWIATY);
    send(msg_WI_KUCHNIA);
    send(msg_WI_LAZIENKA);

}

void OgrzwanieTemp::presentation()
{
    present(O_POMPA,S_LIGHT,"Pompa");
    present(O_SALON,S_LIGHT,"Ogrz. salonu");
    present(O_KUCHNIA,S_LIGHT,"Ogrz. kuchnia");
    present(O_LAZIENKA,S_LIGHT,"Ogrz. lazienka");
    present(O_HOL1,S_LIGHT,"Ogrz. hol 1");
    present(O_HOL2, S_LIGHT,"Ogrz. hol 2");
    present(O_HOL3,S_LIGHT,"Ogrz. hol 3");
    present(O_WC,S_LIGHT,"Ogrz. WC");
    present(O_KWIATY,S_LIGHT,"Ośw. kwiatów");
    present(W_KUCHNIA,S_LIGHT,"Wiatrak kuchnia");
    present(W_LAZIENKA,S_LIGHT,"Wiatrak lazienka");
    present(O_LAMPA,S_LIGHT, "Osw. przy pompie");
    
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

void OgrzwanieTemp::setOgrzHol1(bool val)
{
    digitalWrite(O_HOL1PIN, val?HIGH:LOW);
    msg_OG_HOL1.set(val);
    send(msg_OG_HOL1);
}

void OgrzwanieTemp::setOgrzHol2(bool val)
{
    digitalWrite(O_HOL2PIN, val?HIGH:LOW);
    msg_OG_HOL2.set(val);
    send(msg_OG_HOL2);
}

void OgrzwanieTemp::setOgrzHol3(bool val)
{
    digitalWrite(O_HOL3PIN, val?LOW:HIGH);
    msg_OG_HOL3.set(val);
    send(msg_OG_HOL3);
}   

void OgrzwanieTemp::setOgrzHolWC(bool val)
{
    digitalWrite(O_WC, val?LOW:HIGH);
    msg_OG_WC.set(val);
    send(msg_OG_WC);
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
            digitalWrite(O_LAMPAPIN, msg->getBool()?HIGH:LOW);
            msg_OG_LAMPA.set(msg->getBool());
            send(msg_OG_LAMPA);
            return true;
        case O_KWIATY: 
            digitalWrite(O_KWIATYPIN, msg->getBool()?HIGH:LOW);
            msg_OS_KWIATY.set(msg->getBool());
            send(msg_OS_KWIATY);
            return true;
        case W_KUCHNIA: 
            digitalWrite(W_KUCHNIAPIN, msg->getBool()?HIGH:LOW);
            msg_WI_KUCHNIA.set(msg->getBool());
            send(msg_WI_KUCHNIA);
            return true;
        case W_LAZIENKA: 
            digitalWrite(W_LAZIENKAPIN, msg->getBool()?HIGH:LOW);
            msg_WI_LAZIENKA.set(msg->getBool());
            send(msg_WI_LAZIENKA);
            return true;
        case O_HOL1:
            digitalWrite(O_HOL1PIN, msg->getBool()?HIGH:LOW);
            msg_OG_HOL1.set(msg->getBool());
            send(msg_OG_HOL1);
            return true;
        case O_HOL2:
            digitalWrite(O_HOL2PIN, msg->getBool()?HIGH:LOW);
            msg_OG_HOL2.set(msg->getBool());
            send(msg_OG_HOL2);
            return true;
        case O_HOL3:
            digitalWrite(O_HOL3PIN, msg->getBool()?HIGH:LOW);
            msg_OG_HOL3.set(msg->getBool());
            send(msg_OG_HOL3);
            return true;
        case O_WC:
            digitalWrite(O_WCPIN, msg->getBool()?HIGH:LOW);
            msg_OG_WC.set(msg->getBool());
            send(msg_OG_WC);
            return true;
        default:
            return false;
    }
}

