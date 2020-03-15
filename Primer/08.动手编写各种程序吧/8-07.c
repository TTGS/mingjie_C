 
#include <stdio.h>

/*--- 返回组合的值 ---*/
int combination(int n,int r)
{
int i,c=1,m=1; 
if ( (n==r) || (r==0))
return 1;

if ( (r==1))
return n;

	for(i=1;i<=r;i++)
	{
		m=m*i;
	}

	for(i=r;i<=n;i++)
	{
		c=c*i;
	}

return c/m;
}

int main(void)
{
	int n,r;

	printf("请输入n个整数中取出r个整数的组合数：\n");
printf("请输入n：");
scanf("%d", &n);
printf("请输入r：");
scanf("%d", &r);

	printf("%d个整数中取出%d个整数的组合数:%d \n", n ,r, combination(n,r));

	return 0;
}
