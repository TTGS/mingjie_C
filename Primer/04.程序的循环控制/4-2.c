#include <stdio.h>

int main(void)
{
	int a ,b ;
        int sum=0; 
        int temp;
//获得整数a，b
	printf("请输入两个个整数：\n");
	printf("整数 a ：");
	scanf("%d", &a);

	printf("整数 b ：");
	scanf("%d", &b);
        temp=a;

do {
sum=sum+temp;
temp=temp-1;
}while(temp!=b);

	printf("大于等于%d小于等于%d的所有整数的和是:%d \n",a,b,sum);
	return 0;
}
