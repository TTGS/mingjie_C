#include <stdio.h>

int main(void)
{
	int no,n,i;

	do {
		printf("请输入一个正整数：");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a请不要输入非正整数。");
	} while (no <= 0);
        n=no;
	i=0;
	/* no比0大时 */

	while (no > 0) { 
		no /= 10;			/* 右移一位 */
		i++;
	}
	printf("%d的位数是%d 。\n",n,i); 

	return 0;
}
