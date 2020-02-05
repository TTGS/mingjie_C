/*
	从输入的整数开始倒数到0（其2）
*/

#include <stdio.h>

int main(void)
{
	int no,n;

	printf("请输入一个正整数：");
	scanf("%d", &no);
        no=n;
	while (no > 0)
		printf("%d ", no--);	/* no的值在显示之后递减 */
        if ((no<=0) && (n>=0))
		printf("\n");				/* 换行 */

	return 0;
}
