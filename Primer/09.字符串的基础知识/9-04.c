/*
	读取并显示字符串数组
*/

#include <stdio.h>

void null_string(char s[])
{
s[0]='\0';
printf("a  = \"%s\" \n",  s  ); ;
}

int main(void)
{
	char a[]="abc";

	printf("a  = \"%s\"  \n",  a   ); ;
 	null_string(a);
	return 0;
}
