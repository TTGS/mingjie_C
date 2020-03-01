#include <stdio.h>

void alert(int n)
{
int i ;
	for (i=1 ; i<=n ; i++)
	{
		printf("\a");
	}
}


int main(void)
{
	int x ;

	puts("请输入1个整数。");
	printf("整数：");   scanf("%d", &x); 
 	alert(x) ;

	return 0;
}


