#ifndef _ZASLONY_H
#define _ZASLONY_H


#include "main.h"
#include <core/MySensorsCore.h>

//  present(ID_S_COVER,S_COVER,"Window cover");
#define ID_S_COVER_SYP_IN   101       	
#define ID_S_COVER_SYP_OUT  102
#define ID_S_COVER_SAL_IN   103
#define ID_S_COVER_SAL_OUT  104
#define ID_S_COVER_KUCH_IN  105
#define ID_S_COVER_KUCH_OUT 106
#define ID_S_COVER_PRAC_IN  107
#define ID_S_COVER_PRAC_OUT 108
#define ID_S_COVER_POK_IN   109
#define ID_S_COVER_POK_OUT  110


void zaslony();
void zaslony_presentation();

//MyMessage msg_S_COVER_U(ID_S_COVER,V_UP);
//MyMessage msg_S_COVER_D(ID_S_COVER,V_DOWN);
//MyMessage msg_S_COVER_S(ID_S_COVER,V_STOP);
//MyMessage msg_S_COVER_V(ID_S_COVER,V_VAR1);
//int coverState=0; //0=Stop; 1=up; -1=down


//
//	if (coverState == 1) {
//		Serial1.println("Opening");
//		send(msg_S_COVER_U.set(1));
//	} else if (coverState == -1) {
//		Serial1.println("Closing");
//		send(msg_S_COVER_D.set(0));
//	} else {
//		Serial1.println("Idle");
//		send(msg_S_COVER_S.set(-1));
//	}
//	send(msg_S_COVER_V.set(coverState));
//}



//	present(ID_S_COVER,S_COVER,"Window cover");



#endif