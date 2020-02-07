#include <stdio.h>

int main(void)
{
	int n,i;

	printf("整数值：");
	scanf("%d", &n);
	i=1;

	while (i<=n) { 
		
                if ((n%i)==0)
			printf("%d\n",i);
 		i++;
	} 
	printf("约数有%d个\n" ,i);
	return 0;
}
