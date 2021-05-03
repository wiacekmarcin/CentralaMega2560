#include "ogrzewanie_temp.h"
#include <Arduino.h>

OgrzwanieTemp::OgrzwanieTemp()    :
    msg_OG_POMPA(O_POMPA,V_LIGHT),
    msg_OG_SALON(O_SALON,V_LIGHT),
    msg_OG_KUCHNIA(O_KUCHNIA,V_LIGHT),
    msg_OG_LAZIENKA(O_LAZIENKA,V_LIGHT),
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
    pinMode(O_KWIATYPIN, OUTPUT);
    pinMode(W_KUCHNIAPIN, OUTPUT);
    pinMode(W_LAZIENKAPIN, OUTPUT);
 
    send(msg_OG_POMPA);
    send(msg_OG_SALON);
    send(msg_OG_KUCHNIA);
 	send(msg_OG_LAZIENKA);
	send(msg_OG_LAMPA);
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
        default:
            return false;
    }
}

