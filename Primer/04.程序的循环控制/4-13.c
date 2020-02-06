#include <stdio.h>

int main(void)
{
	int no,sum,i;

	printf("n的值：");
	scanf("%d", &no);
 	i=no;
	sum=0;
	while (i>=0) { 
		 sum=sum+i;
		i--;
	}
	printf("1到%d的和为%d 。\n",no,sum); 

	return 0;
}
