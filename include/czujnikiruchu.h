#ifndef _CZUJNIKIRUCHU_H_
#define _CZUJNIKIRUCHU_H_

#include "main.h"
#include <core/MySensorsCore.h>

#define ID_S_RUCH_PRACOWNIA          31 
#define ID_S_RUCH_POKOJ              32 
#define ID_S_RUCH_LAZIENKA_L         33
#define ID_S_RUCH_LAZIENKA_P         34
#define ID_S_RUCH_WC                 35
#define ID_S_RUCH_HOL_PP             36
#define ID_S_RUCH_HOL_2PP            37
#define ID_S_RUCH_HOL_DW             38
#define ID_S_RUCH_HOL_2DW            39
#define ID_S_RUCH_HOL_SAL            40
#define ID_S_RUCH_HOL_KUCH           41
#define ID_S_RUCH_KUCHNIA            42
#define ID_S_RUCH_KUCHNIA_KUCH       43
#define ID_S_RUCH_KUCHNIA_SAL        44



void czujnikiruchu();

void czujnikiruchu_presentation();

#endif