/* generated vector header file - do not edit */
        #ifndef VECTOR_DATA_H
        #define VECTOR_DATA_H
                /* Number of interrupts allocated */
        #ifndef VECTOR_DATA_IRQ_COUNT
        #define VECTOR_DATA_IRQ_COUNT    (10)
        #endif
        /* ISR prototypes */
        void sci_uart_rxi_isr(void);
        void sci_uart_txi_isr(void);
        void sci_uart_tei_isr(void);
        void sci_uart_eri_isr(void);
        void r_icu_isr(void);
        void spi_rxi_isr(void);
        void spi_txi_isr(void);
        void spi_tei_isr(void);
        void spi_eri_isr(void);

        /* Vector table allocations */
        #define VECTOR_NUMBER_SCI7_RXI ((IRQn_Type) 0) /* SCI7 RXI (Received data full) */
        #define VECTOR_NUMBER_SCI7_TXI ((IRQn_Type) 1) /* SCI7 TXI (Transmit data empty) */
        #define VECTOR_NUMBER_SCI7_TEI ((IRQn_Type) 2) /* SCI7 TEI (Transmit end) */
        #define VECTOR_NUMBER_SCI7_ERI ((IRQn_Type) 3) /* SCI7 ERI (Receive error) */
        #define VECTOR_NUMBER_ICU_IRQ0 ((IRQn_Type) 4) /* ICU IRQ0 (External pin interrupt 0) */
        #define VECTOR_NUMBER_SPI1_RXI ((IRQn_Type) 5) /* SPI1 RXI (Receive buffer full) */
        #define VECTOR_NUMBER_SPI1_TXI ((IRQn_Type) 6) /* SPI1 TXI (Transmit buffer empty) */
        #define VECTOR_NUMBER_SPI1_TEI ((IRQn_Type) 7) /* SPI1 TEI (Transmission complete event) */
        #define VECTOR_NUMBER_SPI1_ERI ((IRQn_Type) 8) /* SPI1 ERI (Error) */
        #define VECTOR_NUMBER_ICU_IRQ15 ((IRQn_Type) 9) /* ICU IRQ15 (External pin interrupt 15) */
        typedef enum IRQn {
            Reset_IRQn = -15,
            NonMaskableInt_IRQn = -14,
            HardFault_IRQn = -13,
            MemoryManagement_IRQn = -12,
            BusFault_IRQn = -11,
            UsageFault_IRQn = -10,
            SecureFault_IRQn = -9,
            SVCall_IRQn = -5,
            DebugMonitor_IRQn = -4,
            PendSV_IRQn = -2,
            SysTick_IRQn = -1,
            SCI7_RXI_IRQn = 0, /* SCI7 RXI (Received data full) */
            SCI7_TXI_IRQn = 1, /* SCI7 TXI (Transmit data empty) */
            SCI7_TEI_IRQn = 2, /* SCI7 TEI (Transmit end) */
            SCI7_ERI_IRQn = 3, /* SCI7 ERI (Receive error) */
            ICU_IRQ0_IRQn = 4, /* ICU IRQ0 (External pin interrupt 0) */
            SPI1_RXI_IRQn = 5, /* SPI1 RXI (Receive buffer full) */
            SPI1_TXI_IRQn = 6, /* SPI1 TXI (Transmit buffer empty) */
            SPI1_TEI_IRQn = 7, /* SPI1 TEI (Transmission complete event) */
            SPI1_ERI_IRQn = 8, /* SPI1 ERI (Error) */
            ICU_IRQ15_IRQn = 9, /* ICU IRQ15 (External pin interrupt 15) */
        } IRQn_Type;
        #endif /* VECTOR_DATA_H */