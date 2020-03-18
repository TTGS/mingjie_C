/*
	读取并显示字符串数组
*/

#include <stdio.h>

void put_stringr(const char s[] )
{
int ri=0,i=0  ;
//取得数组长度。
while(s[ri])
{
ri++;
}

	while(i<ri)  //不能等于，等于会出现 \0 
	{
	putchar( s[ri-i-1]);
	i++;
	}  
printf("\n" );
}

int main(void)
{
	char a[]="abc";      
	put_stringr(a)   ;
	return 0;
}
