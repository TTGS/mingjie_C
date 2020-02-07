#include <stdio.h>

int main(void)
{
	int n,i,y;

	printf("整数值：");
	scanf("%d", &n);
	i=1;
        y=0;
	while (i<=n) { 
		
                if ((n%i)==0){
			printf("%d\n",i);
                        y=y+1;}
 		i++;
	} 
	printf("约数有%d个\n" ,i);
	return 0;
}
