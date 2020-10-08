

#define STACK_START  0x20018000

void Reset_Handler(void);
void Default_Handler(void);

void NMI_Handler(void);
void HardFault_Handler(void);
void MemManage_Handler(void);
void BusFault_Handler(void);
void UsageFault_Handler(void);
void SVCall_Handler(void);
void DebugMonitor_Handler(void);
void PendSV_Handler(void);
void SysTick_Handler(void);
void WWDG_Handler(void);
void PVD_Handler(void);

void TAMP_STAMP_Handler(void)		__attribute((weak, alias("Default_Handler")));
void RTC_WKUP_Handler(void)		__attribute((weak, alias("Default_Handler")));
void FLASH_Handler(void)		__attribute((weak, alias("Default_Handler")));
void RCC_Handler(void)			__attribute((weak, alias("Default_Handler")));
void EXTI0_Handler(void)		__attribute((weak, alias("Default_Handler")));
void EXTI1_Handler(void)		__attribute((weak, alias("Default_Handler")));
void EXTI2_Handler(void)		__attribute((weak, alias("Default_Handler")));
void EXTI3_Handler(void)		__attribute((weak, alias("Default_Handler")));
void EXTI4_Handler(void)		__attribute((weak, alias("Default_Handler")));
void DMA1_STREAM0_Handler(void)		__attribute((weak, alias("Default_Handler")));
void DMA1_STREAM1_Handler(void)		__attribute((weak, alias("Default_Handler")));
void DMA1_STREAM2_Handler(void)		__attribute((weak, alias("Default_Handler")));
void DMA1_STREAM3_Handler(void)		__attribute((weak, alias("Default_Handler")));
void DMA1_STREAM4_Handler(void)		__attribute((weak, alias("Default_Handler")));
void DMA1_STREAM5_Handler(void)		__attribute((weak, alias("Default_Handler")));
void DMA1_STREAM6_Handler(void)		__attribute((weak, alias("Default_Handler")));
void ADC_Handler(void)			__attribute((weak, alias("Default_Handler")));
void CAN1_TX_Handler(void)		__attribute((weak, alias("Default_Handler")));
void CAN1_RX0_Handler(void)		__attribute((weak, alias("Default_Handler")));
void CAN1_RX1_Handler(void)		__attribute((weak, alias("Default_Handler")));
void CAN1_SCE_Handler(void)		__attribute((weak, alias("Default_Handler")));
void EXTI9_5_Handler(void)		__attribute((weak, alias("Default_Handler")));
void TIM1_BRK_TIM9_Handler(void)	__attribute((weak, alias("Default_Handler")));
void TIM1_UP_TIM10_Handler(void)	__attribute((weak, alias("Default_Handler")));
void TIM1_TRG_COM_TIM11_Handler(void)	__attribute((weak, alias("Default_Handler")));
void TIM1_CC_Handler(void)		__attribute((weak, alias("Default_Handler")));
void TIM2_Handler(void)			__attribute((weak, alias("Default_Handler")));
void TIM3_Handler(void)			__attribute((weak, alias("Default_Handler")));
void TIM4_Handler(void)			__attribute((weak, alias("Default_Handler")));
void I2C1_EV_Handler(void)		__attribute((weak, alias("Default_Handler")));
void I2C1_ER_Handler(void)		__attribute((weak, alias("Default_Handler")));
void I2C2_EV_Handler(void)		__attribute((weak, alias("Default_Handler")));
void I2C2_ER_Handler(void)		__attribute((weak, alias("Default_Handler")));
void SPI1_Handler(void)			__attribute((weak, alias("Default_Handler")));
void SPI2_Handler(void)			__attribute((weak, alias("Default_Handler")));
void USART1_Handler(void)		__attribute((weak, alias("Default_Handler")));
void USART2_Handler(void)		__attribute((weak, alias("Default_Handler")));
void USART3_Handler(void)		__attribute((weak, alias("Default_Handler")));
void EXTI15_10_Handler(void)		__attribute((weak, alias("Default_Handler")));
void RTC_Alarm_Handler(void)		__attribute((weak, alias("Default_Handler")));
void OTG_FS_WKUP_Handler(void)		__attribute((weak, alias("Default_Handler")));
void TIM8_BRK_TIM12_Handler(void)	__attribute((weak, alias("Default_Handler")));
void TIM8_UP_TIM13_Handler(void)	__attribute((weak, alias("Default_Handler")));
void TIM8_TRG_COM_TIM14_Handler(void)	__attribute((weak, alias("Default_Handler")));
void TIM8_CC_Handler(void)		__attribute((weak, alias("Default_Handler")));
void DMA1_Stream7_Handler(void)		__attribute((weak, alias("Default_Handler")));
void FSMC_Handler(void)			__attribute((weak, alias("Default_Handler")));
void SDIO_Handler(void)			__attribute((weak, alias("Default_Handler")));
void TIM5_Handler(void)			__attribute((weak, alias("Default_Handler")));
void SPI3_Handler(void)			__attribute((weak, alias("Default_Handler")));
void UART4_Handler(void)		__attribute((weak, alias("Default_Handler")));
void UART5_Handler(void)		__attribute((weak, alias("Default_Handler")));
void TIM6_DAC_Handler(void)		__attribute((weak, alias("Default_Handler")));
void TIM7_Handler(void)			__attribute((weak, alias("Default_Handler")));
void DMA2_STREAM0_Handler(void)		__attribute((weak, alias("Default_Handler")));
void DMA2_STREAM1_Handler(void)		__attribute((weak, alias("Default_Handler")));
void DMA2_STREAM2_Handler(void)		__attribute((weak, alias("Default_Handler")));
void DMA2_STREAM3_Handler(void)		__attribute((weak, alias("Default_Handler")));
void DMA2_STREAM4_Handler(void)		__attribute((weak, alias("Default_Handler")));
void ETH_Handler(void)			__attribute((weak, alias("Default_Handler")));
void ETH_WKUP_Handler(void)		__attribute((weak, alias("Default_Handler")));
void CAN2_TX_Handler(void)		__attribute((weak, alias("Default_Handler")));
void CAN2_RX0_Handler(void)		__attribute((weak, alias("Default_Handler")));
void CAN2_RX1_Handler(void)		__attribute((weak, alias("Default_Handler")));
void CAN2_SCE_Handler(void)		__attribute((weak, alias("Default_Handler")));
void OTG_FS_Handler(void)		__attribute((weak, alias("Default_Handler")));
void DMA2_Stream5_Handler(void)		__attribute((weak, alias("Default_Handler")));
void DMA2_Stream6_Handler(void)		__attribute((weak, alias("Default_Handler")));
void DMA2_Stream7_Handler(void)		__attribute((weak, alias("Default_Handler")));
void USART6_Handler(void)		__attribute((weak, alias("Default_Handler")));
void I2C3_EV_Handler(void)		__attribute((weak, alias("Default_Handler")));
void I2C3_ER_Handler(void)		__attribute((weak, alias("Default_Handler")));
void OTG_HS_EP1_OUT_Handler(void)	__attribute((weak, alias("Default_Handler")));
void OTG_HS_EP1_IN_Handler(void)	__attribute((weak, alias("Default_Handler")));
void OTG_HS_WKUP_Handler(void)		__attribute((weak, alias("Default_Handler")));
void OTG_HS_Handler(void)		__attribute((weak, alias("Default_Handler")));
void DCMI_Handler(void)			__attribute((weak, alias("Default_Handler")));
void CRYP_Handler(void)			__attribute((weak, alias("Default_Handler")));
void HASH_RNG_Handler(void)		__attribute((weak, alias("Default_Handler")));
void FPU_Handler(void)			__attribute((weak, alias("Default_Handler")));


int vector_table[] __attribute((section(".isr_vectors"))) = {

	(int) STACK_START,
	(int) &Reset_Handler,
	(int) &NMI_Handler,
	(int) &HardFault_Handler,
	(int) &MemManage_Handler,
	(int) &NMI_Handler,
	(int) &HardFault_Handler,
	(int) &MemManage_Handler,
	(int) &BusFault_Handler,
	(int) &UsageFault_Handler,
	0,
	0,
	0,
	0,
	(int) &SVCall_Handler,
	(int) &DebugMonitor_Handler,
	0,
	(int) &PendSV_Handler,
	(int) &SysTick_Handler,
	(int) &WWDG_Handler,
	(int) &PVD_Handler,
	(int) &TAMP_STAMP_Handler,
	(int) &RTC_WKUP_Handler,
	(int) &FLASH_Handler,
	(int) &RCC_Handler,
	(int) &EXTI0_Handler,
	(int) &EXTI1_Handler,
	(int) &EXTI2_Handler,
	(int) &EXTI3_Handler,
	(int) &EXTI4_Handler,
	(int) &DMA1_STREAM0_Handler,
	(int) &DMA1_STREAM1_Handler,
	(int) &DMA1_STREAM2_Handler,
	(int) &DMA1_STREAM3_Handler,
	(int) &DMA1_STREAM4_Handler,
	(int) &DMA1_STREAM5_Handler,
	(int) &DMA1_STREAM6_Handler,
	(int) &ADC_Handler,
	(int) &CAN1_TX_Handler,
	(int) &CAN1_RX0_Handler,
	(int) &CAN1_RX1_Handler,
	(int) &CAN1_SCE_Handler,
	(int) &EXTI9_5_Handler,
	(int) &TIM1_BRK_TIM9_Handler,
	(int) &TIM1_UP_TIM10_Handler,
	(int) &TIM1_TRG_COM_TIM11_Handler,
	(int) &TIM1_CC_Handler,
	(int) &TIM2_Handler,
	(int) &TIM3_Handler,
	(int) &TIM4_Handler,
	(int) &I2C1_EV_Handler,
	(int) &I2C1_ER_Handler,
	(int) &I2C2_EV_Handler,
	(int) &I2C2_ER_Handler,
	(int) &SPI1_Handler,
	(int) &SPI2_Handler,
	(int) &USART1_Handler,
	(int) &USART2_Handler,
	(int) &USART3_Handler,
	(int) &EXTI15_10_Handler,
	(int) &RTC_Alarm_Handler,
	(int) &OTG_FS_WKUP_Handler,
	(int) &TIM8_BRK_TIM12_Handler,
	(int) &TIM8_UP_TIM13_Handler,
	(int) &TIM8_TRG_COM_TIM14_Handler,
	(int) &TIM8_CC_Handler,
	(int) &DMA1_Stream7_Handler,
	(int) &FSMC_Handler,
	(int) &SDIO_Handler,
	(int) &TIM5_Handler,
	(int) &SPI3_Handler,
	(int) &UART4_Handler,
	(int) &UART5_Handler,
	(int) &TIM6_DAC_Handler,
	(int) &TIM7_Handler,
	(int) &DMA2_STREAM0_Handler,
	(int) &DMA2_STREAM1_Handler,
	(int) &DMA2_STREAM2_Handler,
	(int) &DMA2_STREAM3_Handler,
	(int) &DMA2_STREAM4_Handler,
	(int) &ETH_Handler,
	(int) &ETH_WKUP_Handler,
	(int) &CAN2_TX_Handler,
	(int) &CAN2_RX0_Handler,
	(int) &CAN2_RX1_Handler,
	(int) &CAN2_SCE_Handler,
	(int) &OTG_FS_Handler,
	(int) &DMA2_Stream5_Handler,
	(int) &DMA2_Stream6_Handler,
	(int) &DMA2_Stream7_Handler,
	(int) &USART6_Handler,
	(int) &I2C3_EV_Handler,
	(int) &I2C3_ER_Handler,
	(int) &OTG_HS_EP1_OUT_Handler,
	(int) &OTG_HS_EP1_IN_Handler,
	(int) &OTG_HS_WKUP_Handler,
	(int) &OTG_HS_Handler,
	(int) &DCMI_Handler,
	(int) &CRYP_Handler,
	(int) &HASH_RNG_Handler,
	(int) &FPU_Handler

};


void NMI_Handler(void)
{
	while (1);
}
void HardFault_Handler(void)
{
	while (1);
}

void MemManage_Handler(void)
{
	while (1);
}

void BusFault_Handler(void)
{
	while (1);
}

void UsageFault_Handler(void)
{
	while (1);
}

void SVCall_Handler(void)
{
	while (1);
}

void DebugMonitor_Handler(void)
{
	while (1);
}

void PendSV_Handler(void)
{
	while (1);
}

void SysTick_Handler(void)
{
	while (1);
}

void WWDG_Handler(void)
{
	while (1);
}

void PVD_Handler(void)
{
	while (1);
}
