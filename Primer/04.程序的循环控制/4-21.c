#include <stdio.h>

int main(void)
{
	int i,j, no;

	printf("请输入一个正整数：");
	scanf("%d", &no);

for(i=1;i<=no;i++)
{ 
	for(j=1;j<=no;j++)
	{
	printf("*");
	}
printf("\n");
}


        printf("\n");
	return 0;
}
