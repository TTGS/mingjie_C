#include <stdio.h>

int main(void)
{
	int i,j, c,k;
	printf("让我们来画一个长方形\n");
	printf("一边：");
	scanf("%d", &c);

	printf("另一边：");
	scanf("%d", &k);

for(i=1;i<=k;i++)
{ 
	for(j=1;j<=c;j++)
	{
	printf("*");
	}
printf("\n");
}
	return 0;
}
