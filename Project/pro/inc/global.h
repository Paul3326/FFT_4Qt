#ifndef GLOBAL_H
#define GLOBAL_H
#include <qglobal.h>
#include <QString>

typedef enum{
    RTU_PARA,
    RTU_CHECK,
}XML_Type;

typedef enum{
    CONNECT,
    DISCONNECT,
    RESEARCH,
}COM_STATE_ENUM;

typedef struct __comcom__{
    int state;
}COM_Strc;
extern COM_Strc ComCom;

typedef struct __rtu_para__{
    QString localTime;
    uint16_t para_total_page;
    uint16_t para_current_page;

}RTU_PARA_Strc;
extern RTU_PARA_Strc rtu_para_para;

#endif // GLOBAL_H
