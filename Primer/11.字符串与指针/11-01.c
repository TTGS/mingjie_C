#include <stdio.h>

void adjust_point(int *n)
{
if (*n<0)
	*n=0;
else if (*n>100)
	*n=100;
else 
	*n=*n;
}

int main(void)
{
	int na ; 

	printf("请输入两个整数。\n");
	printf("整数 ：");   scanf("%d", &na); 
	adjust_point(&na);
	printf("调整完是 ：%d\n" ,na);

}
