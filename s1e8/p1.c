#include <stdio.h>


int main() {
	char name[256];
	float height, weight;

	printf("请输入您的姓名：");
	
	scanf("%s", &name);

	printf("请输入您的身高（cm）：");
	
	scanf("%f", &height);

	printf("请输入您的体重（kg）：");
	
	scanf("%f", &weight);

	printf("========== 正在为您转换 ==========\n");

	printf("%s的身高是%.2f(in), 体重是%.2f(lb)。\n", name, height / 2.54, weight * 2.20462262);

	return 0;
}

