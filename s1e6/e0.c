#include <stdio.h>

int main(){
	int i;
	char j;
	float k;
	_Bool b;
	
	printf("size of char is %db.\n", sizeof(char));
	printf("size of short int is %db.\n", sizeof(short int));
	printf("size of int is %db.\n", sizeof(int));
	printf("size of long int is %db.\n", sizeof(long int));
	printf("size of long long int is %db.\n", sizeof(long long int));
	printf("size of float is %db.\n", sizeof(float));
	printf("size of _Bool is %db.\n", sizeof(_Bool));
	
	return 0;

}
