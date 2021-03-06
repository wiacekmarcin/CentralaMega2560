#ifndef OGRZEWANIE_TEMP_H
#define OGRZEWANIE_TEMP_H
#pragma once

#include "main.h"
#include <core/MySensorsCore.h>

#define O_POMPA 210
#define O_SALON 211
#define O_KUCHNIA 212
#define O_LAZIENKA 213
#define O_KWIATY 214
#define W_KUCHNIA 215
#define W_LAZIENKA 216
#define O_LAMPA 217

#define POMPAPIN 53 //fioloetowy
#define O_LAZIENKAPIN 52 //brazowy
#define O_SALONPIN 51 //czerwony
#define O_KUCHNIAPIN 50 //zolty
#define O_LAMPAPIN 49 //niebieski
#define O_KWIATYPIN 48 //zielony
#define W_KUCHNIAPIN 47 //pomaranczowy
#define W_LAZIENKAPIN 46 //szary

class OgrzwanieTemp  
{
	private:

	public:
	OgrzwanieTemp();
		
	//void swiatla();
	void presentation();

	void setOgrzLazienka(bool val);
	void setOgrzKuchnia(bool val);
	void setOgrzSalon(bool val);
	void setLampa(bool val);

	bool setMessage(const MyMessage *msg);

	void init();
protected:
	void setPompa(bool val);
	private:
	    MyMessage msg_OG_POMPA;
    	MyMessage msg_OG_SALON;
    	MyMessage msg_OG_KUHCNIA;
 	    MyMessage msg_OG_LAZIENKA;
		MyMessage msg_OG_LAMPA;
    	MyMessage msg_OS_KWIATY;
    	MyMessage msg_WI_KUHCNIA;
    	MyMessage msg_WI_LAZIENKA;
		

		bool o_lazienka = false;
		bool o_kuchnia = false;
		bool o_salon = false;


};
#endif