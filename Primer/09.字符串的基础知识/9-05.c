/*
	读取并显示字符串数组
*/

#include <stdio.h>

void str_char(const char s[] ,int c)
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
	char c="b";

	printf("a  = %d  \n",   str_char(a[],c)  );
	return 0;
}
