#ifndef _SWIATLA_H_
#define _SWIATLA_H_

#include "main.h"
#include <core/MySensorsCore.h>

#define ID_S_LIGHT_HOLA1          51 
#define ID_S_LIGHT_HOLA2          52 
#define ID_S_LIGHT_HOLA3          53 
#define ID_S_LIGHT_HOLB1          54
#define ID_S_LIGHT_HOLB2          55
#define ID_S_LIGHT_HOLB3          56
#define ID_S_LIGHT_HOLB4          57
#define ID_S_LIGHT_HOLB5          58
#define ID_S_LIGHT_HOLC1          59
#define ID_S_LIGHT_PRAC1          60
#define ID_S_LIGHT_PRAC2          61
#define ID_S_LIGHT_POK1           62
#define ID_S_LIGHT_POK2           63
#define ID_S_LIGHT_LAZ1           64
#define ID_S_LIGHT_LAZ2           65
#define ID_S_LIGHT_LAZP1          66
#define ID_S_LIGHT_LAZP2          67
#define ID_S_LIGHT_LAZP3          68
#define ID_S_LIGHT_LAZP4          69
#define ID_S_LIGHT_LAZW1          70
#define ID_S_LIGHT_LAZW2          71
#define ID_S_LIGHT_LAZL1          72
#define ID_S_LIGHT_LAZL2          73
#define ID_S_LIGHT_SyP1           74
#define ID_S_LIGHT_SYP2           75
#define ID_S_LIGHT_JAD1           76
#define ID_S_LIGHT_JAD2           77
#define ID_S_LIGHT_JAD3           78
#define ID_S_LIGHT_KUCH1          79
#define ID_S_LIGHT_KUCH2          80
#define ID_S_LIGHT_KUCH3          81
#define ID_S_LIGHT_KUCH4          82
#define ID_S_LIGHT_KUCH5          83
#define ID_S_LIGHT_KUCH6          84
#define ID_S_LIGHT_KUCH7          85
#define ID_S_LIGHT_KUCH8          86
#define ID_S_LIGHT_KUCH9          87
#define ID_S_LIGHT_KUCHL1         88
#define ID_S_LIGHT_KUCHL2         89
#define ID_S_LIGHT_KUCHS          90
#define ID_S_LIGHT_SAL1           91
#define ID_S_LIGHT_SAL2           92
#define ID_S_LIGHT_SALL11         93
#define ID_S_LIGHT_SALL12         94
#define ID_S_LIGHT_SALL21         95
#define ID_S_LIGHT_SALL22         96
#define ID_S_LIGHT_SYPW           97



void swiatla();
void swiatla_presentation();


//#ifdef ID_S_LIGHT
//MyMessage msg_S_LIGHT(ID_S_LIGHT,V_LIGHT);
//bool isLightOn=0;
//#endif

//#ifdef ID_S_LIGHT
//	Serial1.println("  S_LIGHT");
//  present(ID_S_LIGHT,S_LIGHT,"Hall Light");
//  wait(SHORT_WAIT);
//#endif

#endif
