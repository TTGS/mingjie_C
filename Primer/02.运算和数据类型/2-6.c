#include <stdio.h>

int main(void)
{
	int s;
	printf("请输入您的身高：");
	scanf("%d",&s);
	printf("您的标准体重是%.1lf公斤。\n",(s-100)*0.9 );
return 0;
}
