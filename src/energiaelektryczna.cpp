#include "energiaelektryczna.h"

#if 0
void energiaelektryczna()
{
    
    MyMessage wattMsg(ID_S_POWER230, V_WATT);
    MyMessage kWhMsg(ID_S_POWER230, V_KWH);
    MyMessage pcMsg(ID_S_POWER230, V_VAR1);
    send(wattMsg.set(0));
    send(kWhMsg.set(0));
    send(pcMsg.set(0));
}

void energiaelektryczna_presentation()
{
    present(ID_S_POWER230,S_POWER,"Zyzycie energii 230V");
}
#endif