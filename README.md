
# Embedded C project

Embedded C learning projects repository


## Examples

```c
/**
 ******************************************************************************
 * @file           : main.c
 * @author         : KucharskiR
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#define GPIOD_BASE_ADDRESS	0x40020C00
#define RCC_BASE_ADDRESS	0x40023800

#define GPIOD_MODER_OFFSET	0x00
#define GPIOD_OUTPUT_DATA_OFFSET	0x14
#define RCC_AHB1ENR_OFFSET   0x30

//// Function to delay for a certain number of milliseconds
//void delay_ms(uint32_t milliseconds) {
//    // Use SysTick timer for delay
//    SysTick->LOAD = (SystemCoreClock / 1000) * milliseconds;
//    SysTick->VAL = 0;
//    SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk;
//
//    // Wait until the count flag is set
//    while (!(SysTick->CTRL & SysTick_CTRL_COUNTFLAG_Msk));
//
//    SysTick->CTRL = 0;
//}


int main(void)
{

	*(volatile uint32_t *)(RCC_BASE_ADDRESS + RCC_AHB1ENR_OFFSET) |= (1 << 3);  // Enable GPIOD clock

	// Set GPIO Pin 12 to general purpose output mode
	*(volatile uint32_t*)(GPIOD_BASE_ADDRESS + GPIOD_MODER_OFFSET) |= (85 << (2 * 12));

//	// Set Timer 2 prescaler
//	*(volatile uint32_t*) (TIM2_BASE + 0x28) = 999;

    /* Loop forever */
	for(;;){
			int j = 0;
			for(j=0; j<4; j++){

		  // Toggle the LED state
		        *(volatile uint32_t *)(GPIOD_BASE_ADDRESS + GPIOD_OUTPUT_DATA_OFFSET) ^= (1 << (12+j));

		        int max = 150000;
		        	for(int var = 0; var < max; var++){

		        		}
//		        delay_ms(1000);
			}

	}
}


```


## 🚀 About Me
I'm a Java and Embedded C Junior developer.


## Authors

- [@KucharskiR](https://www.github.com/KucharskiR)

