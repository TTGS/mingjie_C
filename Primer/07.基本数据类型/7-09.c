#include <math.h>
#include <stdio.h>
  
int main (void)
{
	double x;
	
	printf("请输入正方形面积大小：");
	scanf("%lf",&x);

	printf("该正方形的 边长为：%.2f\n",
                sqrt(x));
	return 0; 
 }  
