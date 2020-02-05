#include <stdio.h>

int main(void)
{
	int i, no;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	i = 2;
	while (i <= no){
	i=i*2;
	printf("%d ", i);		/* i的值在显示之后递增 */
	}
        printf("\n");
	return 0;
}
