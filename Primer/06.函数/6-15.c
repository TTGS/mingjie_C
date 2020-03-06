/*
	确认拥有静态存储期的对象的默认的初始化
*/

#include <stdio.h>
void put_count()
{ 
	static int i=1 ;
	printf("put_count:第%2d次 \n", i);
	i++; 
}

int main(void)
{
 
put_count();
put_count();
put_count();
	return 0;
}
