#include <stdio.h>
 
int main (void)
{
	float x;
	double y;
	long double z  ;
	
	printf("请输入float类型数值：");
	scanf("%f",&x);

	printf("请输入double类型数值：");
	scanf("%lf",&y);

	printf("请输入long double类型数值：");
	scanf("%Lf",&z);

	printf("float型：%f\ndouble型：%f\nlong double型：%Lf\n",x, y, z);
	
	return 0; 
 }  
