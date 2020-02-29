#include <stdio.h>

int cube (int a  )
{
 return a*a*a;
}

int main(void)
{
	int i  ;  
	printf("输入整数：");	  scanf("%d", &i); 
	printf("整数%d的立方是%d \n", i ,cube(i ) );

	return 0;
}
