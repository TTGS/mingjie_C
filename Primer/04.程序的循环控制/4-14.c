#include <stdio.h>

int main(void)
{
	int no,q,i;

	printf("n的值：");
	scanf("%d", &no);
 	 
	q=1;
	i=1;
	while (i<=no) { 
		printf("%d",q);
        	if (q==9)
			q=0;
		q++;
		i++;
	}
	 printf("\n" );

	return 0;
}
