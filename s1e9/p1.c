#include <stdio.h>
#include <math.h>


int main(){
	float principal = 10000;  // 本金
	float futureValue;

	futureValue = principal * (1 + 5 * 2.75 / 100);	
	printf("一次性定期存 5 年：%.2f\n", futureValue);

	futureValue = principal * (1 + 3 * 2.75 / 100);
	futureValue = futureValue * (1 + 2 * 2.25/ 100);
	printf("先存 3 年定期，到期后本息再存 2 年定期：%.2f\n", futureValue);

	futureValue = principal * pow((1 + 1.75 / 100), 5);
	printf("存 1 年定期，到期后本息再存 1 年定期，连续存 5 次：%.2f\n", futureValue);

	return 0;
}
