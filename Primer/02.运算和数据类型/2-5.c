#include <stdio.h>

int main(void)
{
	int x,y;
	printf("请输入两个整数：\n");
	printf("整数 1 ：");
	scanf("%d",&x);
	printf("整数 2 ：");
	scanf("%d",&y);
	double xx , yy;
	xx=(double)x;
	yy=(double)y;
	printf("x的值是y的 %lf%% 。\n",xx/yy*100 );
return 0;
}
