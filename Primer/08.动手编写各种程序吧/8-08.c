#include <stdio.h>
 
int gcd(int x, int y) {
	int temp;
	if (x < y){
		temp = y;
		y = x; 
		x = temp;
	}
	while (x%y){
		y = x%y;
	} 
	return y;
}
 
int main (void)
{
	int a, b;
	printf("请输入两个数\n");
	printf("第1个数：");
	scanf("%d", &a);
	printf("第2个数：");
	scanf("%d",  &b);

	printf("最大公约数为%d\n",gcd(a, b));
	
	return 0;
} 
