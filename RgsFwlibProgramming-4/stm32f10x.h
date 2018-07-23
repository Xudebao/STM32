//������żĴ���ӳ��Ĵ���

#ifndef _STM32F10X_H
#define _STM32F10X_H


/*�������ַ*/
#define	PERIPH_BASE	((unsigned int) 0x40000000) // 0x40000000 ���ֿܷ�д�� 0x4000 0000

/*���߻���ַ*/
#define APB2PERIPH_BASE (PERIPH_BASE+0x00010000)
#define AHBPERIPH_BASE  (PERIPH_BASE+0x00020000)

/*GPIO�������ַ*/
#define GPIOB_BASE (APB2PERIPH_BASE+0x0C00)

/*RCC�������ַ*/
#define RCC_BASE (AHBPERIPH_BASE+0x1000)
	
typedef unsigned int uint32_t;
typedef unsigned short uint16_t;

typedef struct {  //����һ��GPIO_TypeDef���͵Ľṹ��
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

#define GPIOB ((GPIO_TypeDef *)GPIOB_BASE)// ����һ��GPIO_TypeDef�ṹ�����͵�ָ�룬���ø�ָ��ָ��GPIOB�Ļ���ַ
#define RCC ((RCC_TypeDef *)RCC_BASE)

#endif /* _STM32F10X_H */


