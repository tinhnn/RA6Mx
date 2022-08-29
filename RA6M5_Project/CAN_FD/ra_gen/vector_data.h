/* generated vector header file - do not edit */
#ifndef VECTOR_DATA_H
#define VECTOR_DATA_H
#ifdef __cplusplus
        extern "C" {
        #endif
/* Number of interrupts allocated */
#ifndef VECTOR_DATA_IRQ_COUNT
#define VECTOR_DATA_IRQ_COUNT    (13)
#endif
/* ISR prototypes */
void usbfs_interrupt_handler(void);
void usbfs_resume_handler(void);
void usbfs_d0fifo_handler(void);
void usbfs_d1fifo_handler(void);
void usbhs_interrupt_handler(void);
void usbhs_d0fifo_handler(void);
void usbhs_d1fifo_handler(void);
void dmac_int_isr(void);
void canfd_error_isr(void);
void canfd_channel_tx_isr(void);
void canfd_rx_fifo_isr(void);

/* Vector table allocations */
#define VECTOR_NUMBER_USBFS_INT ((IRQn_Type) 0) /* USBFS INT (USBFS interrupt) */
#define USBFS_INT_IRQn          ((IRQn_Type) 0) /* USBFS INT (USBFS interrupt) */
#define VECTOR_NUMBER_USBFS_RESUME ((IRQn_Type) 1) /* USBFS RESUME (USBFS resume interrupt) */
#define USBFS_RESUME_IRQn          ((IRQn_Type) 1) /* USBFS RESUME (USBFS resume interrupt) */
#define VECTOR_NUMBER_USBFS_FIFO_0 ((IRQn_Type) 2) /* USBFS FIFO 0 (DMA transfer request 0) */
#define USBFS_FIFO_0_IRQn          ((IRQn_Type) 2) /* USBFS FIFO 0 (DMA transfer request 0) */
#define VECTOR_NUMBER_USBFS_FIFO_1 ((IRQn_Type) 3) /* USBFS FIFO 1 (DMA transfer request 1) */
#define USBFS_FIFO_1_IRQn          ((IRQn_Type) 3) /* USBFS FIFO 1 (DMA transfer request 1) */
#define VECTOR_NUMBER_USBHS_USB_INT_RESUME ((IRQn_Type) 4) /* USBHS USB INT RESUME (USBHS interrupt) */
#define USBHS_USB_INT_RESUME_IRQn          ((IRQn_Type) 4) /* USBHS USB INT RESUME (USBHS interrupt) */
#define VECTOR_NUMBER_USBHS_FIFO_0 ((IRQn_Type) 5) /* USBHS FIFO 0 (DMA transfer request 0) */
#define USBHS_FIFO_0_IRQn          ((IRQn_Type) 5) /* USBHS FIFO 0 (DMA transfer request 0) */
#define VECTOR_NUMBER_USBHS_FIFO_1 ((IRQn_Type) 6) /* USBHS FIFO 1 (DMA transfer request 1) */
#define USBHS_FIFO_1_IRQn          ((IRQn_Type) 6) /* USBHS FIFO 1 (DMA transfer request 1) */
#define VECTOR_NUMBER_DMAC0_INT ((IRQn_Type) 7) /* DMAC0 INT (DMAC transfer end 0) */
#define DMAC0_INT_IRQn          ((IRQn_Type) 7) /* DMAC0 INT (DMAC transfer end 0) */
#define VECTOR_NUMBER_DMAC1_INT ((IRQn_Type) 8) /* DMAC1 INT (DMAC transfer end 1) */
#define DMAC1_INT_IRQn          ((IRQn_Type) 8) /* DMAC1 INT (DMAC transfer end 1) */
#define VECTOR_NUMBER_CAN0_CHERR ((IRQn_Type) 9) /* CAN0 CHERR (Channel error) */
#define CAN0_CHERR_IRQn          ((IRQn_Type) 9) /* CAN0 CHERR (Channel error) */
#define VECTOR_NUMBER_CAN0_TX ((IRQn_Type) 10) /* CAN0 TX (Transmit interrupt) */
#define CAN0_TX_IRQn          ((IRQn_Type) 10) /* CAN0 TX (Transmit interrupt) */
#define VECTOR_NUMBER_CAN_GLERR ((IRQn_Type) 11) /* CAN GLERR (Global error) */
#define CAN_GLERR_IRQn          ((IRQn_Type) 11) /* CAN GLERR (Global error) */
#define VECTOR_NUMBER_CAN_RXF ((IRQn_Type) 12) /* CAN RXF (Global recieve FIFO interrupt) */
#define CAN_RXF_IRQn          ((IRQn_Type) 12) /* CAN RXF (Global recieve FIFO interrupt) */
#ifdef __cplusplus
        }
        #endif
#endif /* VECTOR_DATA_H */
