/*
	读取并显示字符串数组
*/

#include <stdio.h>

int str_char(const char s[] ,int c)
{
int i=0 ;

while(s[i])
{
	if(s[i]==c)
	{
		return i;
	}
	i++;
}
return -1; 
}

int main(void)
{
	char a[]="abbc";  
	char b='b';
	printf("a  = %d  \n",   str_char(a , b)  );
	return 0;
}
