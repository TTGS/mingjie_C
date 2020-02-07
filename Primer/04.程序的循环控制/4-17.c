#include <stdio.h>

int main(void)
{
	int n,i;

	printf("n的值：");
	scanf("%d", &n);
 	
	while (i<=n) { 
		printf("%d的二次方是%d",i,i*i);
 		n++;
	}
	printf("\n");

	return 0;
}
