#include <stdio.h>

int min2 (int a , int b )
{
 return (a>b)?b:a ; 
}

int main(void)
{
	int i ,j ; 
	puts("请输入二个整数。");
	printf("输入第1个整数：");	  scanf("%d", &i);
	printf("输入第2个整数：");	  scanf("%d", &j);
 
	printf("%d和%d当中，%d 更小 \n", i,j,min2(i,j) );

	return 0;
}
