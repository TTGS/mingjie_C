#include <stdio.h>

int min_of(const int v[] , int n)
{
int i ;
int min=v[0];
	for(i=1;i<=n;i++)
	{
		if (v[i]<min)
			min=v[i];
	}
return min;
}


int main(void)
{
	int k[5]={14,251,322,414,5};
	printf("数组中最小的为：%d \n",min_of(k,5));
	return 0;
}

