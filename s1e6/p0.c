#include <stdio.h>
#include <math.h>


int main(){
	int result;

	result = pow(1, 2) + pow(2, 3) + pow(3, 4) + pow(4, 5) + pow(5, 6);
	printf("calculate \"1^2 + 2^3 + 3^4 + 4^5 + 5^6\", result is %d.", result);

	return 0;
}
