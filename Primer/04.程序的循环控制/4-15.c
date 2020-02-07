#include <stdio.h>
/*
日本京都大学桂教授在布洛卡公式的基础上，提出了下列计算公式：

标准体重（kg）=[身高（cm）-100]×0.9

注意：这一公式的计算结果适合于亚洲人的具体情况。
*/
int main(void)
{
	int b,e,i;

	printf("开始数值(cm)：");
	scanf("%d", &b);

	printf("结束数值(cm)：");
	scanf("%d", &e);

	printf("间隔数值(cm)：");
	scanf("%d", &i);
 	 
	while (b<=e) { 
		printf("%dcm	%.2fkg \n",b,(b-100)*0.9);
 		b=b+i;
	}
	 printf("\n" );

	return 0;
}
