/*
	显示九九乘法表
*/

#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++)
			{
if (i==1) 
printf("%2d|", i * j);
else 
printf("%3d", i * j);
}
		putchar('\n');				/* 换行 */
	}

	return 0;
}
