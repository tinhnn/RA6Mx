/* generated HAL header file - do not edit */
#ifndef HAL_DATA_H_
#define HAL_DATA_H_
#include <stdint.h>
#include "bsp_api.h"
#include "common_data.h"
#include "r_gpt.h"
#include "r_timer_api.h"
FSP_HEADER
/** Timer on GPT Instance. */
extern const timer_instance_t Timer_1s;

/** Access the GPT instance using these structures when calling API functions directly (::p_api is not used). */
extern gpt_instance_ctrl_t Timer_1s_ctrl;
extern const timer_cfg_t Timer_1s_cfg;

#ifndef TIMER_1S_ISR
void TIMER_1S_ISR(timer_callback_args_t *p_args);
#endif
void hal_entry(void);
void g_hal_init(void);
FSP_FOOTER
#endif /* HAL_DATA_H_ */
