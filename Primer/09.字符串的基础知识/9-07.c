/*
	读取并显示字符串数组
*/

#include <stdio.h>

void put_stringn(const char s[] ,int c)
{
int i=0  ;

	for(i=0;i< c;i++)
	{
	printf("%s",s);
	}  
printf("\n" );
}

int main(void)
{
	char a[]="abc";      
	put_stringn(a , 3)   ;
	return 0;
}
