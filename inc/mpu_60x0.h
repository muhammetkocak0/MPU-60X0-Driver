#ifndef MPU_60X0_H_
#define MPU_60X0_H_


#define I2C_DEV_ADDR_AD0 0x68
#define I2C_DEV_ADDR_AD1 0x69

#define REG_SELF_TEST_X_ADDR     0x0D
#define SELF_TEST_XA_TEST_Pos    2
#define SELF_TEST_XA_TEST_Msk    (0x7 << SELF_TEST_XA_TEST_Pos)
#define SELF_TEST_XG_TEST_Pos    0
#define SELF_TEST_XG_TEST_Msk    (0x1F << SELF_TEST_XG_TEST_Pos)

#define REG_SELF_TEST_Y_ADDR     0x0E
#define SELF_TEST_YA_TEST_Pos    2
#define SELF_TEST_YA_TEST_Msk    (0x7 << SELF_TEST_YA_TEST_Pos)
#define SELF_TEST_YG_TEST_Pos    0
#define SELF_TEST_YG_TEST_Msk    (0x1F << SELF_TEST_YG_TEST_Pos)

#define REG_SELF_TEST_Z_ADDR     0x0F
#define SELF_TEST_ZA_TEST_Pos    2
#define SELF_TEST_ZA_TEST_Msk    (0x7 << SELF_TEST_ZA_TEST_Pos)
#define SELF_TEST_ZG_TEST_Pos    0
#define SELF_TEST_ZG_TEST_Msk    (0x1F << SELF_TEST_ZG_TEST_Pos)

#define REG_CONFIG_ADDR          0x1A
#define CONFIG_XA_ST_Pos         7
#define CONFIG_XA_ST_Msk         (0x3 << CONFIG_XA_ST_Pos)
#define CONFIG_YA_ST_Pos         5
#define CONFIG_YA_ST_Msk         (0x3 << CONFIG_YA_ST_Pos)
#define CONFIG_ZA_ST_Pos         3
#define CONFIG_ZA_ST_Msk         (0x3 << CONFIG_ZA_ST_Pos)
#define CONFIG_XG_FIFO_EN_Pos    6
#define CONFIG_YG_FIFO_EN_Pos    5
#define CONFIG_ZG_FIFO_EN_Pos    4
#define CONFIG_WAIT_FOR_ES_Pos   3
#define CONFIG_SLV_3_FIFO_EN_Pos 2
#define CONFIG_SLV_2_FIFO_EN_Pos 1
#define CONFIG_SLV_1_FIFO_EN_Pos 0

#define REG_GYRO_CONFIG_ADDR     0x1B
#define GYRO_CONFIG_FS_SEL_Pos   3
#define GYRO_CONFIG_FS_SEL_Msk   (0x3 << GYRO_CONFIG_FS_SEL_Pos)

#define REG_ACCEL_CONFIG_ADDR    0x1C
#define ACCEL_CONFIG_AFS_SEL_Pos 3
#define ACCEL_CONFIG_AFS_SEL_Msk (0x3 << ACCEL_CONFIG_AFS_SEL_Pos)

#define REG_FIFO_EN_ADDR         0x23
#define FIFO_EN_SLV_3_Pos        5
#define FIFO_EN_SLV_2_Pos        4
#define FIFO_EN_SLV_1_Pos        3
#define FIFO_EN_SLV_0_Pos        2
#define FIFO_EN_ACCEL_Pos        1
#define FIFO_EN_TEMP_Pos         0

#define REG_I2C_MST_CTRL_ADDR    0x24
#define I2C_MST_CTRL_MULT_MST_EN_Pos 7
#define I2C_MST_CTRL_WAIT_FOR_ES_Pos 6
#define I2C_MST_CTRL_SLV_3_FIFO_EN_Pos 5
#define I2C_MST_CTRL_I2C_MST_P_NSR_Pos 4
#define I2C_MST_CTRL_CLK_256_Pos 0

#define REG_I2C_SLV0_ADDR_ADDR   0x25
#define I2C_SLV0_ADDR_RW_Pos     7

#define REG_I2C_SLV0_REG_ADDR    0x26

#define REG_I2C_SLV0_CTRL_ADDR   0x27
#define I2C_SLV0_CTRL_GRP_Pos    4
#define I2C_SLV0_CTRL_LEN_Pos    0

#define REG_I2C_SLV1_ADDR_ADDR   0x28
#define I2C_SLV1_ADDR_RW_Pos     7

#define REG_I2C_SLV1_REG_ADDR    0x29

#define REG_I2C_SLV1_CTRL_ADDR   0x2A
#define I2C_SLV1_CTRL_GRP_Pos    4
#define I2C_SLV1_CTRL_LEN_Pos    0

#define REG_I2C_SLV2_ADDR_ADDR   0x2B
#define I2C_SLV2_ADDR_RW_Pos     7

#define REG_I2C_SLV2_REG_ADDR    0x2C

#define REG_I2C_SLV2_CTRL_ADDR   0x2D
#define I2C_SLV2_CTRL_GRP_Pos    4
#define I2C_SLV2_CTRL_LEN_Pos    0

#define REG_I2C_SLV3_ADDR_ADDR   0x2E
#define I2C_SLV3_ADDR_RW_Pos     7

#define REG_I2C_SLV3_REG_ADDR    0x2F

#define REG_I2C_SLV3_CTRL_ADDR   0x30
#define I2C_SLV3_CTRL_GRP_Pos    4

#define REG_I2C_SLV4_ADDR_ADDR   0x31
#define I2C_SLV4_ADDR_RW_Pos     7

#define REG_I2C_SLV4_REG_ADDR    0x32

#define REG_I2C_SLV4_DO_ADDR     0x33

#define REG_I2C_SLV4_CTRL_ADDR   0x34
#define I2C_SLV4_CTRL_GRP_Pos    4
#define I2C_SLV4_CTRL_INT_EN_Pos 2
#define I2C_SLV4_CTRL_REG_DIS_Pos 1
#define I2C_SLV4_CTRL_BYTE_SW_Pos 0

#define REG_I2C_MST_STATUS_ADDR  0x36
#define I2C_MST_STATUS_PASS_THROUGH_Pos 7
#define I2C_MST_STATUS_INT_LEVEL_Pos   6
#define I2C_MST_STATUS_INT_OPEN_Pos    5
#define I2C_MST_STATUS_LATCH_INT_EN_Pos 4
#define I2C_MST_STATUS_INT_RD_CLEAR_Pos 3
#define I2C_MST_STATUS_FSYNC_INT_LEVEL_Pos 2
#define I2C_MST_STATUS_FSYNC_INT_EN_Pos 1
#define I2C_MST_STATUS_I2C_BYPASS_EN_Pos 0

#define REG_INT_PIN_CFG_ADDR     0x37
#define INT_PIN_CFG_INT_LEVEL_Pos    7
#define INT_PIN_CFG_INT_OPEN_Pos     6
#define INT_PIN_CFG_LATCH_INT_EN_Pos  5
#define INT_PIN_CFG_INT_RD_CLEAR_Pos  4
#define INT_PIN_CFG_FSYNC_INT_LEVEL_Pos 3
#define INT_PIN_CFG_FSYNC_INT_EN_Pos  2
#define INT_PIN_CFG_I2C_BYPASS_EN_Pos 1

#define REG_INT_ENABLE_ADDR      0x38
#define INT_ENABLE_DATA_RDY_EN_Pos  0
#define INT_ENABLE_I2C_MST_INT_EN_Pos 3
#define INT_ENABLE_FIFO_OFLOW_EN_Pos  4

#define REG_INT_STATUS_ADDR      0x3A
#define INT_STATUS_DATA_RDY_INT_Pos  0
#define INT_STATUS_I2C_MST_INT_Pos   3
#define INT_STATUS_FIFO_OFLOW_INT_Pos 4



#endif /* MPU_60X0_H_ */