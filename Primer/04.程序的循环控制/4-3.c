#include <stdio.h>

int main(void)
{
	int no,n; //额外引入n变量，如果不引入该变量，那么输入-1也会给予一个换行。


	printf("请输入一个正整数：");
	scanf("%d", &no);
        n=no;

	while (no >= 0) {
		printf("%d ", no );
		no--;			/* no的值递减 */

        //本想在这里写一个控制换行的，但这需要判断no次，影响效率就没有这样做。

        }
        if ((no==-1) && (n>=0) )
	        printf("\n");		/* 换行 */

	return 0;
}
