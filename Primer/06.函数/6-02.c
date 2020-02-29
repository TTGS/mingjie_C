#include <stdio.h>

int min3 (int a , int b ,int c)
{
int max=a;
if (b<max)  max=b;
if (c<max)  max=c;
 return max;
}

int main(void)
{
	int i ,j,k ; 
	puts("请输入二个整数。");
	printf("输入第1个整数：");	  scanf("%d", &i);
	printf("输入第2个整数：");	  scanf("%d", &j);
 	printf("输入第3个整数：");	  scanf("%d", &k);

	printf("%d,%d和%d当中，%d 更小 \n", i,j,k,min3(i,j,k) );

	return 0;
}
