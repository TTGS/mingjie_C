#include <stdio.h>

int main(void)
{
	int x,y;
	printf("请输入两个整数：\n");
	printf("整数 1 ：");
	scanf("%d",&x);
	printf("整数 2 ：");
	scanf("%d",&y);
	x*=100;
	printf("x的值是y的 %d%% 。\n",x/y );
return 0;
}
