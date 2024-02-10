#ifndef MPU_60X0_H_
#define MPU_60X0_H_
#include "mpu60x0_reg.h"

typedef struct{
uint8_t AD_State;
master_ctrl_t master_ctrl;

}mpu60x0_handle_t;

typedef struct{
uint8_t master_state;
slave_ctrl slave[5];
}master_ctrl_t;

typedef struct{
    uint8_t slv_status;
    uint8_t slv_addr;
}slave_ctrl;





uint8_t init_mpu60x0(mpu60x0_handle_t *pMpu60x0);




#define I2C_DEV_ADDR_AD_Low 0x68
#define I2C_DEV_ADDR_AD_High 0x69

#define AD_State_Low    0x0
#define AD_State_High   0x1


#endif /* MPU_60X0_H_ */