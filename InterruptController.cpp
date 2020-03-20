#include "InterruptController.hpp"

void InterruptAttach(void (**handler)(), void (*CallBack)())
{
	*handler=CallBack;
}
void InterruptDetach(void (**handler)(), void (*CallBack)())
{
	*handler=nullptr;
}


/* === feel free to edit below lines to add the interrupts you want to use  ===  */

///// callback pointers /////
void (*SysTick_Handler_CallBack)()=nullptr;
//void (*WWDG_IRQHandler_CallBack)()=nullptr;
//void (*PVD_IRQHandler_CallBack)()=nullptr;                                      
//void (*TAMP_STAMP_IRQHandler_CallBack)()=nullptr;                  
//void (*RTC_WKUP_IRQHandler_CallBack)()=nullptr;                                
//void (*FLASH_IRQHandler_CallBack)()=nullptr;                                                       
//void (*RCC_IRQHandler_CallBack)()=nullptr;                                                            
//void (*EXTI0_IRQHandler_CallBack)()=nullptr;                                                          
//void (*EXTI1_IRQHandler_CallBack)()=nullptr;                                                           
//void (*EXTI2_IRQHandler_CallBack)()=nullptr;                                                          
//void (*EXTI3_IRQHandler_CallBack)()=nullptr;                                                         
//void (*EXTI4_IRQHandler_CallBack)()=nullptr;                                                          
//void (*DMA1_Stream0_IRQHandler_CallBack)()=nullptr;                                       
//void (*DMA1_Stream1_IRQHandler_CallBack)()=nullptr;                                          
//void (*DMA1_Stream2_IRQHandler_CallBack)()=nullptr;                                          
//void (*DMA1_Stream3_IRQHandler_CallBack)()=nullptr;                                          
//void (*DMA1_Stream4_IRQHandler_CallBack)()=nullptr;                                          
//void (*DMA1_Stream5_IRQHandler_CallBack)()=nullptr;                                          
//void (*DMA1_Stream6_IRQHandler_CallBack)()=nullptr;                                          
//void (*ADC_IRQHandler_CallBack)()=nullptr;                                         
//void (*CAN1_TX_IRQHandler_CallBack)()=nullptr;                                                            
//void (*CAN1_RX0_IRQHandler_CallBack)()=nullptr;                                                          
//void (*CAN1_RX1_IRQHandler_CallBack)()=nullptr;                                                           
//void (*CAN1_SCE_IRQHandler_CallBack)()=nullptr;                                                           
//void (*EXTI9_5_IRQHandler_CallBack)()=nullptr;                                                
//void (*TIM1_BRK_TIM9_IRQHandler_CallBack)()=nullptr;                        
//void (*TIM1_UP_TIM10_IRQHandler_CallBack)()=nullptr;                      
//void (*TIM1_TRG_COM_TIM11_IRQHandler_CallBack)()=nullptr;  
//void (*TIM1_CC_IRQHandler_CallBack)()=nullptr;                                               
//void (*TIM2_IRQHandler_CallBack)()=nullptr;                                                           
//void (*TIM3_IRQHandler_CallBack)()=nullptr;                                                           
//void (*TIM4_IRQHandler_CallBack)()=nullptr;                                                           
//void (*I2C1_EV_IRQHandler_CallBack)()=nullptr;                                                         
//void (*I2C1_ER_IRQHandler_CallBack)()=nullptr;                                                         
//void (*I2C2_EV_IRQHandler_CallBack)()=nullptr;                                                        
//void (*I2C2_ER_IRQHandler_CallBack)()=nullptr;                                                           
//void (*SPI1_IRQHandler_CallBack)()=nullptr;                                                          
//void (*SPI2_IRQHandler_CallBack)()=nullptr;                                                           
//void (*USART1_IRQHandler_CallBack)()=nullptr;                                                       
//void (*USART2_IRQHandler_CallBack)()=nullptr;                                                       
//void (*USART3_IRQHandler_CallBack)()=nullptr;                                                      
//void (*EXTI15_10_IRQHandler_CallBack)()=nullptr;                                            
//void (*RTC_Alarm_IRQHandler_CallBack)()=nullptr;                            
//void (*OTG_FS_WKUP_IRQHandler_CallBack)()=nullptr;                                
//void (*TIM8_BRK_TIM12_IRQHandler_CallBack)()=nullptr;                      
//void (*TIM8_UP_TIM13_IRQHandler_CallBack)()=nullptr;                       
//void (*TIM8_TRG_COM_TIM14_IRQHandler_CallBack)()=nullptr;  
//void (*TIM8_CC_IRQHandler_CallBack)()=nullptr;                                               
//void (*DMA1_Stream7_IRQHandler_CallBack)()=nullptr;                                                 
//void (*FMC_IRQHandler_CallBack)()=nullptr;                                                            
//void (*SDIO_IRQHandler_CallBack)()=nullptr;                                                            
//void (*TIM5_IRQHandler_CallBack)()=nullptr;                                                            
//void (*SPI3_IRQHandler_CallBack)()=nullptr;                                                            
//void (*UART4_IRQHandler_CallBack)()=nullptr;                                                          
//void (*UART5_IRQHandler_CallBack)()=nullptr;                                                          
//void (*TIM6_DAC_IRQHandler_CallBack)()=nullptr;                            
//void (*TIM7_IRQHandler_CallBack)()=nullptr;                              
//void (*DMA2_Stream0_IRQHandler_CallBack)()=nullptr;                                         
//void (*DMA2_Stream1_IRQHandler_CallBack)()=nullptr;                                          
//void (*DMA2_Stream2_IRQHandler_CallBack)()=nullptr;                                           
//void (*DMA2_Stream3_IRQHandler_CallBack)()=nullptr;                                           
//void (*DMA2_Stream4_IRQHandler_CallBack)()=nullptr;                                        
//void (*ETH_IRQHandler_CallBack)()=nullptr;                                                         
//void (*ETH_WKUP_IRQHandler_CallBack)()=nullptr;                                
//void (*CAN2_TX_IRQHandler_CallBack)()=nullptr;                                                           
//void (*CAN2_RX0_IRQHandler_CallBack)()=nullptr;                                                          
//void (*CAN2_RX1_IRQHandler_CallBack)()=nullptr;                                                          
//void (*CAN2_SCE_IRQHandler_CallBack)()=nullptr;                                                          
//void (*OTG_FS_IRQHandler_CallBack)()=nullptr;                                                    
//void (*DMA2_Stream5_IRQHandler_CallBack)()=nullptr;                                          
//void (*DMA2_Stream6_IRQHandler_CallBack)()=nullptr;                                          
//void (*DMA2_Stream7_IRQHandler_CallBack)()=nullptr;                                          
//void (*USART6_IRQHandler_CallBack)()=nullptr;                                                        
//void (*I2C3_EV_IRQHandler_CallBack)()=nullptr;                                                          
//void (*I2C3_ER_IRQHandler_CallBack)()=nullptr;                                                          
//void (*OTG_HS_EP1_OUT_IRQHandler_CallBack)()=nullptr;                           
//void (*OTG_HS_EP1_IN_IRQHandler_CallBack)()=nullptr;                            
//void (*OTG_HS_WKUP_IRQHandler_CallBack)()=nullptr;                                
//void (*OTG_HS_IRQHandler_CallBack)()=nullptr;                                                   
//void (*DCMI_IRQHandler_CallBack)()=nullptr;                                                                                                             
//void (*HASH_RNG_IRQHandler_CallBack)()=nullptr;
//void (*FPU_IRQHandler_CallBack)()=nullptr;      


//////////////   declaring callbacks ////////////////
extern "C" void SysTick_Handler()
{
	if(SysTick_Handler_CallBack==nullptr)
		while(1);
	else
		SysTick_Handler_CallBack();
}
//extern "C" void WWDG_IRQHandler()
//{
//	if(WWDG_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		WWDG_IRQHandler_CallBack();
//}
//extern "C" void PVD_IRQHandler()    
//{
//	if(PVD_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		PVD_IRQHandler_CallBack();
//}	
//extern "C" void TAMP_STAMP_IRQHandler()  
//{
//	if(TAMP_STAMP_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		TAMP_STAMP_IRQHandler_CallBack();
//}	
//extern "C" void RTC_WKUP_IRQHandler()     
//{
//	if(RTC_WKUP_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		RTC_WKUP_IRQHandler_CallBack();
//}	
//extern "C" void FLASH_IRQHandler()       
//{
//	if(FLASH_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		FLASH_IRQHandler_CallBack();
//}	
//extern "C" void RCC_IRQHandler()         
//{
//	if(RCC_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		RCC_IRQHandler_CallBack();
//}	
//extern "C" void EXTI0_IRQHandler()      
//{
//	if(EXTI0_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		EXTI0_IRQHandler_CallBack();
//}	
//extern "C" void EXTI1_IRQHandler()      
//{
//	if(EXTI1_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		EXTI1_IRQHandler_CallBack();
//}	
//extern "C" void EXTI2_IRQHandler()      
//{
//	if(EXTI2_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		EXTI2_IRQHandler_CallBack();
//}	
//extern "C" void EXTI3_IRQHandler()      
//{
//	if(EXTI3_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		EXTI3_IRQHandler_CallBack();
//}	
//extern "C" void EXTI4_IRQHandler()      
//{
//	if(EXTI4_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		EXTI4_IRQHandler_CallBack();
//}	
//extern "C" void DMA1_Stream0_IRQHandler()   
//{
//	if(DMA1_Stream0_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		DMA1_Stream0_IRQHandler_CallBack();
//}	
//extern "C" void DMA1_Stream1_IRQHandler()  
//{
//	if(DMA1_Stream1_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		DMA1_Stream1_IRQHandler_CallBack();
//}	
//extern "C" void DMA1_Stream2_IRQHandler()      
//{
//	if(DMA1_Stream2_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		DMA1_Stream2_IRQHandler_CallBack();
//}	
//extern "C" void DMA1_Stream3_IRQHandler()     
//{
//	if(DMA1_Stream3_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		DMA1_Stream3_IRQHandler_CallBack();
//}	
//extern "C" void DMA1_Stream4_IRQHandler()     
//{
//	if(DMA1_Stream4_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		DMA1_Stream4_IRQHandler_CallBack();
//}	
//extern "C" void DMA1_Stream5_IRQHandler()     
//{
//	if(DMA1_Stream5_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		DMA1_Stream5_IRQHandler_CallBack();
//}	
//extern "C" void DMA1_Stream6_IRQHandler()    
//{
//	if(DMA1_Stream6_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		DMA1_Stream6_IRQHandler_CallBack();
//}	
//extern "C" void ADC_IRQHandler()           
//{
//	if(ADC_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		ADC_IRQHandler_CallBack();
//}	
//extern "C" void CAN1_TX_IRQHandler()        
//{
//	if(CAN1_TX_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		CAN1_TX_IRQHandler_CallBack();
//}	
//extern "C" void CAN1_RX0_IRQHandler()        
//{
//	if(CAN1_RX0_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		CAN1_RX0_IRQHandler_CallBack();
//}	
//extern "C" void CAN1_RX1_IRQHandler()        
//{
//	if(CAN1_RX1_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		CAN1_RX1_IRQHandler_CallBack();
//}	
//extern "C" void CAN1_SCE_IRQHandler()       
//{
//	if(CAN1_SCE_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		CAN1_SCE_IRQHandler_CallBack();
//}	
//extern "C" void EXTI9_5_IRQHandler()       
//{
//	if(EXTI9_5_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		EXTI9_5_IRQHandler_CallBack();
//}	
//extern "C" void TIM1_BRK_TIM9_IRQHandler()     
//{
//	if(TIM1_BRK_TIM9_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		TIM1_BRK_TIM9_IRQHandler_CallBack();
//}	
//extern "C" void TIM1_UP_TIM10_IRQHandler()    
//{
//	if(TIM1_UP_TIM10_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		TIM1_UP_TIM10_IRQHandler_CallBack();
//}	
//extern "C" void TIM1_TRG_COM_TIM11_IRQHandler()  
//{
//	if(TIM1_TRG_COM_TIM11_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		TIM1_TRG_COM_TIM11_IRQHandler_CallBack();
//}
//extern "C" void TIM1_CC_IRQHandler()      
//{
//	if(TIM1_CC_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		TIM1_CC_IRQHandler_CallBack();
//}	
//extern "C" void TIM2_IRQHandler()          
//{
//	if(TIM2_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		TIM2_IRQHandler_CallBack();
//}	
//extern "C" void TIM3_IRQHandler()            
//{
//	if(TIM3_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		TIM3_IRQHandler_CallBack();
//}	
//extern "C" void TIM4_IRQHandler()           
//{
//	if(TIM4_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		TIM4_IRQHandler_CallBack();
//}	
//extern "C" void I2C1_EV_IRQHandler()        
//{
//	if(I2C1_EV_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		I2C1_EV_IRQHandler_CallBack();
//}	
//extern "C" void I2C1_ER_IRQHandler()         
//{
//	if(I2C1_ER_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		I2C1_ER_IRQHandler_CallBack();
//}	
//extern "C" void I2C2_EV_IRQHandler()         
//{
//	if(I2C2_EV_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		I2C2_EV_IRQHandler_CallBack();
//}	
//extern "C" void I2C2_ER_IRQHandler()          
//{
//	if(I2C2_ER_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		I2C2_ER_IRQHandler_CallBack();
//}	
//extern "C" void SPI1_IRQHandler()            
//{
//	if(SPI1_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		SPI1_IRQHandler_CallBack();
//}	
//extern "C" void SPI2_IRQHandler()           
//{
//	if(SPI2_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		SPI2_IRQHandler_CallBack();
//}	
//extern "C" void USART1_IRQHandler()           
//{
//	if(USART1_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		USART1_IRQHandler_CallBack();
//}	
//extern "C" void USART2_IRQHandler()           
//{
//	if(USART2_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		USART2_IRQHandler_CallBack();
//}	
//extern "C" void USART3_IRQHandler()          
//{
//	if(USART3_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		USART3_IRQHandler_CallBack();
//}	
//extern "C" void EXTI15_10_IRQHandler()       
//{
//	if(EXTI15_10_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		EXTI15_10_IRQHandler_CallBack();
//}	
//extern "C" void RTC_Alarm_IRQHandler()       
//{
//	if(RTC_Alarm_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		RTC_Alarm_IRQHandler_CallBack();
//}	
//extern "C" void OTG_FS_WKUP_IRQHandler()     
//{
//	if(OTG_FS_WKUP_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		OTG_FS_WKUP_IRQHandler_CallBack();
//}	
//extern "C" void TIM8_BRK_TIM12_IRQHandler()     
//{
//	if(TIM8_BRK_TIM12_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		TIM8_BRK_TIM12_IRQHandler_CallBack();
//}	
//extern "C" void TIM8_UP_TIM13_IRQHandler()       
//{
//	if(TIM8_UP_TIM13_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		TIM8_UP_TIM13_IRQHandler_CallBack();
//}	
//extern "C" void TIM8_TRG_COM_TIM14_IRQHandler() 
//{
//	if(TIM8_TRG_COM_TIM14_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		TIM8_TRG_COM_TIM14_IRQHandler_CallBack();
//}	
//extern "C" void TIM8_CC_IRQHandler()        
//{
//	if(TIM8_CC_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		TIM8_CC_IRQHandler_CallBack();
//}
//extern "C" void DMA1_Stream7_IRQHandler()  
//{
//	if(DMA1_Stream7_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		DMA1_Stream7_IRQHandler_CallBack();
//}	
//extern "C" void FMC_IRQHandler()          
//{
//	if(FMC_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		FMC_IRQHandler_CallBack();
//}	
//extern "C" void SDIO_IRQHandler()         
//{
//	if(SDIO_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		SDIO_IRQHandler_CallBack();
//}	
//extern "C" void TIM5_IRQHandler()        
//{
//	if(TIM5_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		TIM5_IRQHandler_CallBack();
//}	
//extern "C" void SPI3_IRQHandler()       
//{
//	if(SPI3_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		SPI3_IRQHandler_CallBack();
//}	
//extern "C" void UART4_IRQHandler()         
//{
//	if(UART4_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		UART4_IRQHandler_CallBack();
//}	
//extern "C" void UART5_IRQHandler()         
//{
//	if(UART5_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		UART5_IRQHandler_CallBack();
//}	
//extern "C" void TIM6_DAC_IRQHandler()      
//{
//	if(TIM6_DAC_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		TIM6_DAC_IRQHandler_CallBack();
//}	
//extern "C" void TIM7_IRQHandler()         
//{
//	if(TIM7_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		TIM7_IRQHandler_CallBack();
//}	
//extern "C" void DMA2_Stream0_IRQHandler()    
//{
//	if(DMA2_Stream0_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		DMA2_Stream0_IRQHandler_CallBack();
//}	
//extern "C" void DMA2_Stream1_IRQHandler()   
//{
//	if(DMA2_Stream1_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		DMA2_Stream1_IRQHandler_CallBack();
//}	
//extern "C" void DMA2_Stream2_IRQHandler()   
//{
//	if(DMA2_Stream2_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		DMA2_Stream2_IRQHandler_CallBack();
//}	
//extern "C" void DMA2_Stream3_IRQHandler()   
//{
//	if(DMA2_Stream3_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		DMA2_Stream3_IRQHandler_CallBack();
//}	
//extern "C" void DMA2_Stream4_IRQHandler()  
//{
//	if(DMA2_Stream4_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		DMA2_Stream4_IRQHandler_CallBack();
//}	
//extern "C" void ETH_IRQHandler()         
//{
//	if(ETH_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		ETH_IRQHandler_CallBack();
//}	
//extern "C" void ETH_WKUP_IRQHandler()  
//{
//	if(ETH_WKUP_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		ETH_WKUP_IRQHandler_CallBack();
//}	
//extern "C" void CAN2_TX_IRQHandler()    
//{
//	if(CAN2_TX_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		CAN2_TX_IRQHandler_CallBack();
//}	
//extern "C" void CAN2_RX0_IRQHandler()    
//{
//	if(CAN2_RX0_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		CAN2_RX0_IRQHandler_CallBack();
//}	
//extern "C" void CAN2_RX1_IRQHandler()    
//{
//	if(CAN2_RX1_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		CAN2_RX1_IRQHandler_CallBack();
//}	
//extern "C" void CAN2_SCE_IRQHandler()   
//{
//	if(CAN2_SCE_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		CAN2_SCE_IRQHandler_CallBack();
//}	
//extern "C" void OTG_FS_IRQHandler()     
//{
//	if(OTG_FS_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		OTG_FS_IRQHandler_CallBack();
//}	
//extern "C" void DMA2_Stream5_IRQHandler()  
//{
//	if(DMA2_Stream5_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		DMA2_Stream5_IRQHandler_CallBack();
//}	
//extern "C" void DMA2_Stream6_IRQHandler()  
//{
//	if(DMA2_Stream6_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		DMA2_Stream6_IRQHandler_CallBack();
//}
//extern "C" void DMA2_Stream7_IRQHandler()    
//{
//	if(DMA2_Stream7_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		DMA2_Stream7_IRQHandler_CallBack();
//}	
//extern "C" void USART6_IRQHandler()          
//{
//	if(USART6_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		USART6_IRQHandler_CallBack();
//}	
//extern "C" void I2C3_EV_IRQHandler()         
//{
//	if(I2C3_EV_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		I2C3_EV_IRQHandler_CallBack();
//}	
//extern "C" void I2C3_ER_IRQHandler()        
//{
//	if(I2C3_ER_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		I2C3_ER_IRQHandler_CallBack();
//}	
//extern "C" void OTG_HS_EP1_OUT_IRQHandler() 
//{
//	if(OTG_HS_EP1_OUT_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		OTG_HS_EP1_OUT_IRQHandler_CallBack();
//}	
//extern "C" void OTG_HS_EP1_IN_IRQHandler() 
//{
//	if(OTG_HS_EP1_IN_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		OTG_HS_EP1_IN_IRQHandler_CallBack();
//}	
//extern "C" void OTG_HS_WKUP_IRQHandler()  
//{
//	if(OTG_HS_WKUP_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		OTG_HS_WKUP_IRQHandler_CallBack();
//}	
//extern "C" void OTG_HS_IRQHandler() 
//{
//	if(OTG_HS_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		OTG_HS_IRQHandler_CallBack();
//}	
//extern "C" void DCMI_IRQHandler()      
//{
//	if(DCMI_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		DCMI_IRQHandler_CallBack();
//}	
//extern "C" void HASH_RNG_IRQHandler()
//{
//	if(HASH_RNG_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		HASH_RNG_IRQHandler_CallBack();
//}
//extern "C" void FPU_IRQHandler()   
//{
//	if(FPU_IRQHandler_CallBack==nullptr)
//		while(1);
//	else
//		FPU_IRQHandler_CallBack();
//}	