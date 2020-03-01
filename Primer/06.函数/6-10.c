 #include <stdio.h>

int intary_rcpy(int v1[] , const int v2[] , int n)
{
int i ;
	for(i=0;i<n;i++)
	{
		 v1[i]=v2[n-i-1];
	} ;
}


int main(void)
{
	int j;
	int k[5]={1,2,3,4,5};
	int q[5]={0};
	printf("数组倒序为：\n");
 	intary_rcpy(q,k,5);
	for(j=0;j<5;j++)
	{
	printf(" %d  " , q[j]);
	}
	printf("\n");
	return 0;
} 
