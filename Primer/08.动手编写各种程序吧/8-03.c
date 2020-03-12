#include <stdio.h>

#define swap(int,x,y)  int t ; t =x ; x=y ; y=t ;  	

int main(void)
{
	int  tmp,  x,y; 

	printf("请输入x：");
	scanf("%d", &x);
	printf("请输入y：");
	scanf("%d", &y);
swap(int, x,y);
	printf(" x=%d ,y=%d 。\n", x,y );

	return 0;
}
