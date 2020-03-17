/*
	读取并显示字符串数组
*/

#include <stdio.h>

int str_chnum(const char s[] ,int c)
{
int i=0 ,j=0;

while(s[i])
{
	if(s[i]==c)
	{
		j++;
	}
	i++;
}
return j; 
}

int main(void)
{
	char a[]="abbc";  
	char b='b';
	printf("a  = %d  \n",   str_chnum(a , b)  );
	return 0;
}
