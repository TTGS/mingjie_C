/*
	显示直角在左下方的等腰直角三角形
*/

#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("让我们来画一个金字塔。");
	printf("金字塔有几层：");
	scanf("%d", &len);
 
    for(i=0;i<len;i++)
    {
        for(j=0;j<=len-i;j++)
            putchar(' ');
        for(j=0;j<=2*i;j++)
            putchar('*');
        putchar('\n');
    }
 

	return 0;
}
