#include <stdio.h>

// 找出运算结果错误的原因，正确结果应为89.6
int main()
{
	float fah, cel;

	printf("请输入摄氏度：");
	
	scanf("%f", &cel);

	fah = 9 / 5 * cel + 32;
	
	printf("转换为华摄度是：%.2f\n", fah);

	return 0;
}
