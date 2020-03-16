#include <stdio.h>
 
int main(void)
{
	int  i = 0;
 

	do
	{
		puts("请输入：");
		i++;
	}while(getchar()!=EOF);
	printf("\n%d\n",i); 
	return 0;
} 
