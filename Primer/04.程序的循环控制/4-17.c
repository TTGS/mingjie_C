#include <stdio.h>

int main(void)
{
	int n,i;

	printf("n的值：");
	scanf("%d", &n);
 	i=1;

	while (i<=n) { 
		printf("%d的二次方是%d\n",i,i*i);
 		i++;
	} 

	return 0;
}
