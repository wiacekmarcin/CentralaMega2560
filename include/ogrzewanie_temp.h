#ifndef OGRZEWANIE_TEMP_H
#define OGRZEWANIE_TEMP_H
#pragma once

#include "main.h"
#include <core/MySensorsCore.h>

#define O_KUCH_SUF	208
#define O_KALORYFER 209
#define O_POMPA 	210
#define O_SALON 	211
#define O_KUCHNIA 	212
#define O_LAZIENKA 	213
#define O_KW_PRYSZ 	214
#define W_KUCHNIA 	215
#define W_LAZIENKA 	216
#define O_LAMPA 	217
#define O_HOL1 		218
#define O_HOL2 		219
#define O_HOL3 		220
#define O_WC 		221
#define O_KW_WANNA  222
#define O_GN_SALON  223


#define O_SALONPIN 		46  //zielony 
#define O_POMPAPIN 		44  //brazowy
#define O_HOL2PIN  		42  //zolty
#define O_LAZIENKAPIN 	40  //fioletowy
#define O_WCPIN  		38 //zielony
#define O_HOL1PIN  		36 //niebieski
#define O_KUCHNIAPIN 	34 //brazowy
#define O_HOL3PIN 		32 //czerwony
#define O_LAMPAPIN 		A14 //fioletowy
#define O_KW_PRYSZPIN 	A12 //niebieski
#define O_GNI_SALONPIN  A10 //szary
#define O_KW_WANNAPIN 	A8  //biały
#define O_KALORYFERPIN 	A6  //biały



class OgrzwanieTemp  
{
	private:

	public:
	OgrzwanieTemp();
		
	//void swiatla();
	void presentation();

	

	bool setMessage(const MyMessage *msg);

	void init();
protected:
	void setPompa(bool val);
	void setOgrzLazienka(bool val);
	void setOgrzKuchnia(bool val);
	void setOgrzSalon(bool val);
	void set(MyMessage & m, int pin, bool val, bool reverse=false);
	private:
	    MyMessage msg_OG_POMPA;
    	MyMessage msg_OG_SALON;
    	MyMessage msg_OG_KUCHNIA;
 	    MyMessage msg_OG_LAZIENKA;
		MyMessage msg_OG_HOL1;
		MyMessage msg_OG_HOL2;
		MyMessage msg_OG_HOL3;
		MyMessage msg_OG_WC;
		MyMessage msg_OG_KALORYFER;
		MyMessage msg_OG_LAMPA;

    	MyMessage msg_OS_KW_PRYSZ;
		MyMessage msg_OS_KW_WANNA;
		MyMessage msg_OG_GN_SALON;
		MyMessage msg_OG_KUCH_SUF;
    	
		
		MyMessage msg_WI_KUCHNIA;
    	MyMessage msg_WI_LAZIENKA;
		
		
		bool o_lazienka = false;
		bool o_kuchnia = false;
		bool o_salon = false;


};
#endif