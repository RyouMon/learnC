#include <stdio.h>

#define INT int
#define IF if (
#define THEN ) {
#define ELSE } else {
#define BEGIN {
#define END }


INT main()
BEGIN
	INT i;

	printf("请输入你的你年龄：");
	scanf("%d", &i);

	IF i < 18 THEN
		printf("您未满18周岁，不能使用这个程序！\n");
	ELSE
		printf("您已满18周岁，欢迎使用本程序，嘿嘿嘿...\n");
	END
END
