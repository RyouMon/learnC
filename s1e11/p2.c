#include <stdio.h>


int main() {
	char x, y;

	printf("请输入一个字母：");

	scanf("%c", &x);

	if (64 < x && x < 91) {
		y = x + 32;
	} else if (96 < x && x < 123) {
		y = x - 32;
	} else {
		y = x;
	}

	printf("转换后的为：%c\n", y);

	return 0;
}
