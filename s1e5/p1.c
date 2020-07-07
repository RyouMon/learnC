#include <stdio.h>

#define PI 3.1415926
#define S(r) PI*r*r
#define C(r) 2*PI*r

int main(){
	int r = 5;

	printf("半径为%d的圆，面积为%.2f，周长为%.2f\n", r, S(r), C(r));
	
	return 0;
}
