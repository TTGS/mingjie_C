#include <stdio.h>
 
void set_idx (int *v, int n) {
	int i ;
	for(i  = 0; i  < n; i ++) {
		v[i ] = i+1 ;
	} 
}
 
int main(void)
{
	int n, i;
	
	printf("请输入数组大小：");
	scanf("%d",&n);
	
	int v[n];
	set_idx(v,n); 
	for(i = 0; i < n; i++)
		printf("v[%d]:%d \n",i,v[i]);

	return 0;
}  
