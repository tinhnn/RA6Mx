################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ra/fsp/src/r_gpt/r_gpt.c 

C_DEPS += \
./ra/fsp/src/r_gpt/r_gpt.d 

OBJS += \
./ra/fsp/src/r_gpt/r_gpt.o 


# Each subdirectory must supply rules for building sources it contributes
ra/fsp/src/r_gpt/%.o: ../ra/fsp/src/r_gpt/%.c
	$(file > $@.in,-mcpu=cortex-m33 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -O2 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal  -g -D_RA_CORE=CM33 -D_RENESAS_RA_ -I"C:/Users/tinhnn/Documents/Github/RA6Mx/RA6M5_Project/GPIO/src/src" -I"C:/Users/tinhnn/Documents/Github/RA6Mx/RA6M5_Project/GPIO/src/ra/fsp/inc" -I"C:/Users/tinhnn/Documents/Github/RA6Mx/RA6M5_Project/GPIO/src/ra/fsp/inc/api" -I"C:/Users/tinhnn/Documents/Github/RA6Mx/RA6M5_Project/GPIO/src/ra/fsp/inc/instances" -I"C:/Users/tinhnn/Documents/Github/RA6Mx/RA6M5_Project/GPIO/src/ra/arm/CMSIS_5/CMSIS/Core/Include" -I"C:/Users/tinhnn/Documents/Github/RA6Mx/RA6M5_Project/GPIO/src/ra_gen" -I"C:/Users/tinhnn/Documents/Github/RA6Mx/RA6M5_Project/GPIO/src/ra_cfg/fsp_cfg/bsp" -I"C:/Users/tinhnn/Documents/Github/RA6Mx/RA6M5_Project/GPIO/src/ra_cfg/fsp_cfg" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" -x c "$<")
	@echo Building file: $< && arm-none-eabi-gcc @"$@.in"

