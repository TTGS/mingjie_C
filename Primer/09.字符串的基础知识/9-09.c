#include <stdio.h>
//TMD ， 注意，题目要求是s[]的要求是const，不能修改s[] ，所以赋值temp，让temp输出。
void rev_string(const char s[] )
{
int ri=0,i=0  ;

//取得数组长度。
while(s[ri])
{
ri++;
} 
char temp[ri];
	while(i<ri)  
	{
	temp[0]=s[ri-i-1] ;
	printf("%s", temp  );
	i++;
	}  
printf(" \n"  );
}

int main(void)
{
	char a[]="abc";      
	rev_string(a)   ;
	return 0;
}
