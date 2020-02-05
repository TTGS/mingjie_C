#include <stdio.h>

int main(void)
{
	int no,n;

	do {
		printf("请输入一个正整数：");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a请不要输入非正整数。");
	} while (no <= 0);
        n=no;
	/* no比0大时 */

	while (no > 0) {
		printf("%d", no % 10);		/* 显示最后一位数 */ 
		no /= 10;			/* 右移一位 */
		i++;
	}
	printf("%d的位数是",n,i);
	puts("。");

	return 0;
}
