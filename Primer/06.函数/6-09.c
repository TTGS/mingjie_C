#include <stdio.h>

int rev_intary(int v[] , int n)
{
int i ;
	for(i=1;i<=n;i++)
	{
		printf("%d",v[n-i]);
		if ((n-i)!=0)
			printf(",");
	} ;
}


int main(void)
{
	int k[5]={14,251,322,414,5};
	printf("数组倒序为：\n");
 	rev_intary(k,5);
	printf("\n");
	return 0;
}

