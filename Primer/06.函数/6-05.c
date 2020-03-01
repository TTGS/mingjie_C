#include <stdio.h>

int sumup(int n)
{
int i ,tmp=0;
for (i=1 ; i<=n ; i++)
{
tmp=tmp+i;
}
	return  tmp ;
}


int main(void)
{
	int x ;

	puts("请输入1个整数。");
	printf("整数：");   scanf("%d", &x); 

	printf("x的整数和是%d 。\n", sumup(x));

	return 0;
}


