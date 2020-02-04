#include <stdio.h>

int main(void)
{
int a,b,c;

	puts("请输入三个整数。");
	
printf("整数a：");
scanf("%d",&a);

printf("整数b：");
scanf("%d",&b);

printf("整数c：");
scanf("%d",&c);

if (a==b && b==c)
	puts("三个值都相等");
else  if (a!=b && b!=c && c!=a)
	puts("三个值各不相同");
else
	puts("有两个值相等");

return 0;
}
