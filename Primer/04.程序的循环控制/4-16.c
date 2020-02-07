#include <stdio.h>

int main(void)
{
	int no,i;

	printf("整数值：");
	scanf("%d", &no);
 	
        i=1;
	while (i<=no) { 
		printf("%d",i);
 		i=i+2;
	}

	return 0;
}
