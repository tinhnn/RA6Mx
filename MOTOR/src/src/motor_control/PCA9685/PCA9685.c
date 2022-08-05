/* Copyright (c) 2022 Nguyen Nhan Tinh. All rights reserved. */

#include "PCA9685.h"
#include "hal_data.h"

static uint8_t _board_address = 0x40;


static void i2c_write8();
static void i2c_read8();



static void i2c_write8()
{
    err = R_IIC_MASTER_Write(&g_i2c_master_ctrl, &_board_address, ONE_BYTE, true);
}
