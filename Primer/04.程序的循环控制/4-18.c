#include <stdio.h>

int main(void)
{
	int n,i;

	printf("显示多少个*：");
	scanf("%d", &n);
	i=1;

	while (i<=n) { 
		printf("*");
                if ((i%5)==0)
			printf("\n");
 		i++;
	} 

	return 0;
}
