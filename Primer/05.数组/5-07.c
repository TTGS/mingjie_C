/*
	对数组的全部元素进行倒序排列
*/

#include <stdio.h>

int main(void)
{
	int i,k;

	printf("数据个数 : ");
	scanf("%d", &k);
	int x[k]; 

	for (i = 0; i < k; i++) {	/* 输入元素的值 */
		printf("%d号 : ", i+1);
		scanf("%d", &x[i]);
	}
printf("{");
	for (i = 0; i < k; i++)	{
		printf("%d", x[i]);
		if (i+1!=k)
		printf(",");	
	}
printf("}");
	return 0;
}
