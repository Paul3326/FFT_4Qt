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
    bool IsFirstFlag;
    uint8_t state;
}COM_Strc;
extern COM_Strc ComCom;

typedef struct __rtu_para__{
    QString localTime;
    uint16_t para_total_page;
    uint16_t para_current_page;

    QString rtu_station_name;
    QString rtu_location;
    QString rtu_factory_number;
    QString rtu_manufacturer;
    QString rtu_line_name;
    QString rtu_grade;
    QString rtu_type;
    QString rtu_PT_ratio;
    QString rtu_CT_ratio;
    QString rtu_PT_voltage;
    QString rtu_CT_current;
    QString rtu_check_number;
    QString rtu_com_protocol;
    QString rtu_connection_mode;
    QString rtu_error_check_scheme;
    QString rtu_delt_check_scheme;
    QString rtu_dc_voltage_in;
    QString rtu_dc_current_in;
    QString rtu_temperature;
    QString rtu_humidity;
    QString rtu_checkerone;
    QString rtu_checkertwo;
    QString rtu_uid;
}RTU_PARA_Strc;

extern RTU_PARA_Strc rtu_para_para;

#endif // GLOBAL_H
