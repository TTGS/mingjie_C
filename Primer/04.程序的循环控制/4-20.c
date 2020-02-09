/*
	œ‘ ææ≈æ≈≥À∑®±Ì
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	for (i = 0; i <= 10; i++) {
		if (i==0) { 
 			printf("   |" );
			}
		else if ((i-1)==0)
			printf("---|" );
		else 	
			printf("%2d |" ,i-1);
        	for (j = 1; j <= 9; j++){
                       if (i==0) { 
				printf("%3d", i + j);	
				}
			else if (((i-1) * j)==0)
				printf("---"  );
			else
				printf("%3d",  (i-1) * j);
		}
		putchar('\n');		 
	}

	return 0;
}
