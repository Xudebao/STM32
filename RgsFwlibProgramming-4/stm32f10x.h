//用来存放寄存器映射的代码

#ifndef _STM32F10X_H
#define _STM32F10X_H


/*外设基地址*/
#define	PERIPH_BASE	((unsigned int) 0x40000000) // 0x40000000 不能分开写成 0x4000 0000

/*总线基地址*/
#define APB2PERIPH_BASE (PERIPH_BASE+0x00010000)
#define AHBPERIPH_BASE  (PERIPH_BASE+0x00020000)

/*GPIO外设基地址*/
#define GPIOB_BASE (APB2PERIPH_BASE+0x0C00)

/*RCC外设基地址*/
#define RCC_BASE (AHBPERIPH_BASE+0x1000)
	
typedef unsigned int uint32_t;
typedef unsigned short uint16_t;

typedef struct {  //创建一个GPIO_TypeDef类型的结构体
	uint32_t CRL;
	uint32_t CRH;
	uint32_t IDR;
	uint32_t ODR;
	uint32_t BSRR;
	uint32_t BRR;
	uint32_t LCKR;
}GPIO_TypeDef;

typedef struct {
	uint32_t RCC_CR;
	uint32_t RCC_CFGR;
	uint32_t RCC_CIR;
	uint32_t RCC_APB2RSTR;
	uint32_t RCC_APB1RSTR;
	uint32_t RCC_AHBENR;
	uint32_t RCC_APB2ENR;
	uint32_t RCC_APB1ENR;
	uint32_t RCC_BDCR;
	uint32_t RCC_CSR;
}RCC_TypeDef;

#define GPIOB ((GPIO_TypeDef *)GPIOB_BASE)// 定义一个GPIO_TypeDef结构体类型的指针，并让该指针指向GPIOB的基地址
#define RCC ((RCC_TypeDef *)RCC_BASE)

#endif /* _STM32F10X_H */


