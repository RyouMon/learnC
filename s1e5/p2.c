#include <stdio.h>

#define TOMATO(kg) 3.7*kg
#define KALE(kg) 7*kg
#define CELERY(kg) 1.3*kg
#define WATER_SPINACH(kg) 8*kg
#define ONION(kg) 2.4*kg
#define RAPE(kg) 9*kg
#define CUCUMBER(kg) 6.3*kg
#define WHITE_RADISH(kg) 0.5*kg

int main(){
	printf("小明需要支付%.2f元\n", 0.5*(TOMATO(2)+WATER_SPINACH(1)+RAPE(1)));	
	printf("小红需要支付%.2f元\n", 0.5*(CELERY(3)+ONION(0.5)+CUCUMBER(5)));	
	printf("小甲鱼需要支付%.2f元\n", 0.5*(CUCUMBER(10)+WHITE_RADISH(20)));	
	
	return 0;
}
