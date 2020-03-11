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

	printf("float型：%ld\ndouble型：%ld\nlong double型：%ld\n",
                sizeof(x),       sizeof(y),            sizeof(z));
	
	return 0; 
 }  
