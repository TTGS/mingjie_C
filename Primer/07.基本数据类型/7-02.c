 
 
#include <stdio.h>

#define UINT_MAX 65535
//好吧，我承认 limit.h 的 uint_max 没有拦截住
int main(void)
{
	unsigned  int a ; 
	do{
		printf("请输入一个整数："); scanf("%u",&a);
		if ( a>UINT_MAX || a<0 ){ 
			printf("您输入的整型不是无符号，请重新输入。\n");}
	} while (a>UINT_MAX || a<0);

	printf("向左移动5位后：%u ，值乘2的5次方为:%u \n",a << 5, a*2*2*2*2*2); 
	printf("向右移动5位后：%u ，值除2的5次方为:%u \n",a >> 5, a/2/2/2/2/2); 
	
	return 0;
 }  
