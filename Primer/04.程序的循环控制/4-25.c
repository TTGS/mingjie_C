

#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("让我们来画一个向下的金字塔。");
	printf("金字塔有几层：");
	scanf("%d", &len);
 
		for (i = 1; i <= len; i++)
		{
			for(j=1;j<= 2*len-i ;j++){
				if( j<=i-1   )
					putchar(' ');
				else 
					printf("%d",i); 
			}
		putchar('\n');	 
		}
	return 0;
}
