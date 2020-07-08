#include <stdio.h>


int main() {
	signed char i;
	unsigned char j;

	i = 255;
	j = 255;

	printf("signed char %hhd\n", i);
	printf("unsigned char %hhu\n", j);

	return 0;
}
