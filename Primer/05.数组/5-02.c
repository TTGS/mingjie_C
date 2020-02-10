 
#include <stdio.h>

int main(void)
{
	int i;
	int v[5];	/* int[5]数组 */

	for (i = 0; i < 5; i++)		/* 为数组元素赋值 */
		v[i] = 5-i  ;

	for (i = 0; i < 5; i++)		/* 显示元素的值 */
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}
