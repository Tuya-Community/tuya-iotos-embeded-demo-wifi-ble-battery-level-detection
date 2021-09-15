/**
* @file tuya_device.h
* @author zzw
* @email: huanling.zhang@tuya.com
* @brief tuya_device module is used to application file entry
* @version 0.1
* @date 2021-08-26
*
* @copyright Copyright (c) tuya.inc 2021
*
*/

#ifndef __TUYA_DEVICE_H__
#define __TUYA_DEVICE_H__
/*********************************************************************
********************************includes******************************
*********************************************************************/
#include "tuya_error_code.h"

/*********************************************************************
****************************private includes**************************
*********************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _TUYA_DEVICE_GLOBAL
    #define _TUYA_DEVICE_EXT 
#else
    #define _TUYA_DEVICE_EXT extern
#endif /* _TUYA_DEVICE_GLOBAL */ 

/*********************************************************************
******************************macro define****************************
*********************************************************************/
// device information define
#define DEV_SW_VERSION USER_SW_VER
#define PRODECT_ID "h9twaqx7vl3vpo5p"

/* wifi config */
#define WIFI_WORK_MODE_SEL          GWCM_OLD_PROD   // wifi mode select
/*********************************************************************
****************************typedef define****************************
*********************************************************************/


/*********************************************************************
****************************variable define***************************
*********************************************************************/


/*********************************************************************
****************************function define***************************
*********************************************************************/
_TUYA_DEVICE_EXT \
OPERATE_RET device_init(VOID_T);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /*__TUYA_DEVICE_H__*/