#include <stdio.h>

int main(void)
{
	int i,j, no;
	printf("生成一个正方形\n");
	printf("正方形有几层：");
	scanf("%d", &no);

for(i=1;i<=no;i++)
{ 
	for(j=1;j<=no;j++)
	{
	printf("*");
	}
printf("\n");
}
	return 0;
}
