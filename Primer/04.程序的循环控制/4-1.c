/*
	判断输入的整数的符号
*/

#include <stdio.h>

int main(void)
{
	int no;
	int i=1;
	int retry;
do {
	printf("第%d次,请输入一个整数：",i);
	scanf("%d", &no);

	if (no == 0)
		puts("该整数为0。");
	else if (no > 0)
		puts("该整数为正数。");
	else
		puts("该整数为负数。");
i++;
		printf("要重复一次吗？【Yes…0 / No…9】:");
		scanf("%d", &retry);
}while(retry==0)
	return 0;
}
