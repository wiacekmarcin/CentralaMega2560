#ifndef _TEMPERATURA_H_
#define _TEMPERATURA_H_

#include "main.h"
#include <core/MySensorsCore.h>

#define ID_S_TEMP_HOL_1     121
#define ID_S_TEMP_HOL_2     122
#define ID_S_TEMP_HOL_3     123
#define ID_S_TEMP_KUCHNIA   124
#define ID_S_TEMP_WC        125
#define ID_S_TEMP_LAZIENKA  126
#define ID_S_TEMP_CPU_POK   127
#define ID_S_TEMP_CPU_KUCH  128
#define ID_S_TEMP_CPU_WC    129
#define ID_S_TEMP_CPU_CENT  133
#define ID_S_TEMP_CPU_SYP   134
#define ID_S_TEMP_OUT       135
#define ID_S_TEMP_HUM_POKOJ  135
#define ID_S_TEMP_HUM_PRAC   136
#define ID_S_TEMP_HUM_LAZ    137
#define ID_S_TEMP_HUM_WC     138
#define ID_S_TEMP_HUM_KUCH_1   139
#define ID_S_TEMP_HUM_KUCH_2   140
#define ID_S_TEMP_HUM_SALON_1  141
#define ID_S_TEMP_HUM_SALON_2  142
#define ID_S_TEMP_HUM_SYP    143
#define ID_S_TEMP_HUM_JAD    144
#define ID_S_TEMP_HUM_OUT    145
#define ID_S_TEMP_HUM_POMPA  146

void temperatury();
void temperatury_presentation();

//MyMessage msg_S_TEMP(ID_S_TEMP,V_TEMP);

#endif




