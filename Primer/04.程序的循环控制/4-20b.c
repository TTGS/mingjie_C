/*
	显示九九乘法表
*/

#include <stdio.h>

int main(void)
{
	int i, j;
//列头
printf("  |  1  2  3  4  5  6  7  8  9 \n");
printf("------------------------------\n");
	for (i = 1; i <= 9; i++) { 
			printf("%2d|", i ); //首列
		for (j = 1; j <= 9; j++)
			printf("%3d", i * j);
		putchar('\n');				/* 换行 */
	}

	return 0;
}
