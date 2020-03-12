#include <stdio.h>

#define max(x,y)   (((x)>(y)) ? (x):(y))	

int main(void)
{
	int    a,b,c,d; 

	printf("请输入第1个实数：");
	scanf("%d", &a);
	printf("请输入第2个实数：");
	scanf("%d", &b);
	printf("请输入第3个实数：");
	scanf("%d", &c);
	printf("请输入第4个实数：");
	scanf("%d", &d);

	printf(" max(max(a,b),max(c,d))最大的是%d 。\n",
                 max(max(a,b),max(c,d))  );
	printf(" max(max(max(a,b),c),d)最大的是%d 。\n",
                 max(max(max(a,b),c),d)  );
	return 0;
}
