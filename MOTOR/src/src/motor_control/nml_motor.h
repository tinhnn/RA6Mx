/* Copyright (c) 2022 Nguyen Nhan Tinh. All rights reserved. */

#ifndef __NML_MOTOR_H__
#define __NML_MOTOR_H__

/* select motor control board */
#if defined(USING_PCA9685_BOARD)
#include <motor_control/PCA9685/motor_shield.h>
#elif defined(USING_DFR0592_BOARD)
#include "DFR0592/DFR0592.h"
#else
#include "ra6mx/EKA6_board.h"
#endif




#endif /* __NML_MOTOR_H__ */
