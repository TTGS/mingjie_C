/*
	显示直角在右下方的等腰直角三角形
*/

#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("生成直角在右上方的等腰直角三角形。");
	printf("短边：");
	scanf("%d", &len);

	for (i = 0; i <= len; i++) {		/* i 行(i = 1, 2, --- , len) */
		for (j = 1; j <=   i; j++)	/* 每行显示len-i 个' ' */
			putchar(' ');
		for (j = 1; j <= len-i; j++)		/* 每行显示i 个'*' */
			putchar('*');
		putchar('\n');					/* 换行 */
	}

	return 0;
}
