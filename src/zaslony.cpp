#include "zaslony.h"


void zaslony()
{
    MyMessage msg_S_COVER_SYP_IN_U(ID_S_COVER_SYP_IN,V_UP);
    MyMessage msg_S_COVER_SYP_IN_D(ID_S_COVER_SYP_IN,V_DOWN);
    MyMessage msg_S_COVER_SYP_IN_S(ID_S_COVER_SYP_IN,V_STOP);
    MyMessage msg_S_COVER_SYP_IN_V(ID_S_COVER_SYP_IN,V_VAR1);
    MyMessage msg_S_COVER_SYP_OUT_U(ID_S_COVER_SYP_OUT,V_UP);
    MyMessage msg_S_COVER_SYP_OUT_D(ID_S_COVER_SYP_OUT,V_DOWN);
    MyMessage msg_S_COVER_SYP_OUT_S(ID_S_COVER_SYP_OUT,V_STOP);
    MyMessage msg_S_COVER_SYP_OUT_V(ID_S_COVER_SYP_OUT,V_VAR1);
    MyMessage msg_S_COVER_SAL_IN_U(ID_S_COVER_SAL_IN,V_UP);
    MyMessage msg_S_COVER_SAL_IN_D(ID_S_COVER_SAL_IN,V_DOWN);
    MyMessage msg_S_COVER_SAL_IN_S(ID_S_COVER_SAL_IN,V_STOP);
    MyMessage msg_S_COVER_SAL_IN_V(ID_S_COVER_SAL_IN,V_VAR1);
    MyMessage msg_S_COVER_SAL_OUT_U(ID_S_COVER_SAL_OUT,V_UP);
    MyMessage msg_S_COVER_SAL_OUT_D(ID_S_COVER_SAL_OUT,V_DOWN);
    MyMessage msg_S_COVER_SAL_OUT_S(ID_S_COVER_SAL_OUT,V_STOP);
    MyMessage msg_S_COVER_SAL_OUT_V(ID_S_COVER_SAL_OUT,V_VAR1);
    MyMessage msg_S_COVER_KUCH_IN_U(ID_S_COVER_KUCH_IN,V_UP);
    MyMessage msg_S_COVER_KUCH_IN_D(ID_S_COVER_KUCH_IN,V_DOWN);
    MyMessage msg_S_COVER_KUCH_IN_S(ID_S_COVER_KUCH_IN,V_STOP);
    MyMessage msg_S_COVER_KUCH_IN_V(ID_S_COVER_KUCH_IN,V_VAR1);
    MyMessage msg_S_COVER_KUCH_OUT_U(ID_S_COVER_KUCH_OUT,V_UP);
    MyMessage msg_S_COVER_KUCH_OUT_D(ID_S_COVER_KUCH_OUT,V_DOWN);
    MyMessage msg_S_COVER_KUCH_OUT_S(ID_S_COVER_KUCH_OUT,V_STOP);
    MyMessage msg_S_COVER_KUCH_OUT_V(ID_S_COVER_KUCH_OUT,V_VAR1);
    MyMessage msg_S_COVER_PRAC_IN_U(ID_S_COVER_PRAC_IN,V_UP);
    MyMessage msg_S_COVER_PRAC_IN_D(ID_S_COVER_PRAC_IN,V_DOWN);
    MyMessage msg_S_COVER_PRAC_IN_S(ID_S_COVER_PRAC_IN,V_STOP);
    MyMessage msg_S_COVER_PRAC_IN_V(ID_S_COVER_PRAC_IN,V_VAR1);
    MyMessage msg_S_COVER_PRAC_OUT_U(ID_S_COVER_PRAC_OUT,V_UP);
    MyMessage msg_S_COVER_PRAC_OUT_D(ID_S_COVER_PRAC_OUT,V_DOWN);
    MyMessage msg_S_COVER_PRAC_OUT_S(ID_S_COVER_PRAC_OUT,V_STOP);
    MyMessage msg_S_COVER_PRAC_OUT_V(ID_S_COVER_PRAC_OUT,V_VAR1);
    MyMessage msg_S_COVER_POK_IN_U(ID_S_COVER_POK_IN,V_UP);
    MyMessage msg_S_COVER_POK_IN_D(ID_S_COVER_POK_IN,V_DOWN);
    MyMessage msg_S_COVER_POK_IN_S(ID_S_COVER_POK_IN,V_STOP);
    MyMessage msg_S_COVER_POK_IN_V(ID_S_COVER_POK_IN,V_VAR1);
    MyMessage msg_S_COVER_POK_OUT_U(ID_S_COVER_POK_OUT,V_UP);
    MyMessage msg_S_COVER_POK_OUT_D(ID_S_COVER_POK_OUT,V_DOWN);
    MyMessage msg_S_COVER_POK_OUT_S(ID_S_COVER_POK_OUT,V_STOP);
    MyMessage msg_S_COVER_POK_OUT_V(ID_S_COVER_POK_OUT,V_VAR1);
    send(msg_S_COVER_SYP_IN_S.set(-1));;
    send(msg_S_COVER_SYP_OUT_S.set(-1));;
    send(msg_S_COVER_SAL_IN_S.set(-1));;
    send(msg_S_COVER_SAL_OUT_S.set(-1));;
    send(msg_S_COVER_KUCH_IN_S.set(-1));;
    send(msg_S_COVER_KUCH_OUT_S.set(-1));;
    send(msg_S_COVER_PRAC_IN_S.set(-1));;
    send(msg_S_COVER_PRAC_OUT_S.set(-1));;
    send(msg_S_COVER_POK_IN_S.set(-1));;
    send(msg_S_COVER_POK_OUT_S.set(-1));;
}
void zaslony_presentation()
{
    present(ID_S_COVER_SYP_IN,S_COVER,"Zaslony sypialnia");
    present(ID_S_COVER_SYP_OUT,S_COVER,"Rolety sypialnia");
    present(ID_S_COVER_SAL_IN,S_COVER,"Zaslony salon");
    present(ID_S_COVER_SAL_OUT,S_COVER,"Rolety salon");
    present(ID_S_COVER_KUCH_IN,S_COVER,"Zaslony kuchnia");
    present(ID_S_COVER_KUCH_OUT,S_COVER,"Rolety kuhcnia");
    present(ID_S_COVER_PRAC_IN,S_COVER,"Zaslony pracownia");
    present(ID_S_COVER_PRAC_OUT,S_COVER,"Rolety pracownia");
    present(ID_S_COVER_POK_IN,S_COVER,"Zaslony pokoj");
    present(ID_S_COVER_POK_OUT,S_COVER,"Rolety pokoj");
}
