#include <stdio.h>

int main(void)
{
	int i, no,p;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	i = 2;
	p=1;
	while (i <= no){
	i=i^p;
	printf("%d ", i);		/* i的值在显示之后递增 */
	p++;	

	}
        printf("\n");
	return 0;
}
