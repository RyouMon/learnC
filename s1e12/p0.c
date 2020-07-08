#include <stdio.h>
#include <stdbool.h>


int main() {
	float left, right, result;
	char operator;
	bool invalid = false;

	printf("请输入算数式：");
	scanf("%f %c %f", &left, &operator, &right);
	
	switch (operator) {
		case '-': right = -right;  // no break
		case '+': result = left + right; break;
		case '*': result = left * right; break;
		case '/': if (right != 0) {
			  	result = left / right;
				break;
			  } else {
			  	invalid = true;
				break;
			  }
	}

	if (invalid) {
		printf("除数不能为零！\n");
	} else {
		printf("结果为: %.2f\n", result);
	}


	return 0;
}

