#include <stdio.h>

int main(void)
{
	int i, no;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	i = 1;
	while (i <= no)
		printf("%d ", i++);		/* i的值在显示之后递增 */
	if (no>=0)
                printf("\n");				/* 换行 */

	return 0;
}
