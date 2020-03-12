#include <stdio.h>

#define diff(x,y)  ((x) - (y))	

int main(void)
{
	int    n;
	double x,y;

	printf("请输入一个实数：");
	scanf("%lf", &x);

	printf("请输入一个实数：");
	scanf("%lf", &y);
	printf("该数的差是%lf。\n", diff(x,y));

	return 0;
}
