 
#include <stdio.h>

/*--- 返回阶乘的值 ---*/
int factorial(int n)
{
int i,k=1; 
	for(i=1;i<=n;i++)
	{
		k=k*i;
	}
return k;
}

int main(void)
{
	int num;

	printf("请输入一个整数：");
	scanf("%d", &num);

	printf("%d的阶乘为%d。\n", num, factorial(num));

	return 0;
}
