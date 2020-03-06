/*
	确认拥有静态存储期的对象的默认的初始化
*/

#include <stdio.h>
 

int main(void)
{
	int i; 
	static double sd;		/* 用0.0初始化 */ 
 
	printf("sd = %1.1f\n", sd);
 

	return 0;
}
