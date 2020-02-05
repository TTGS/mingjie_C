#include <stdio.h>

int main(void)
{
	int no,n;

	printf("正整数");
	scanf("%d", &no);
	n=no;
	while (no-- > 0)
		putchar('*');
 if (n>1)
	putchar('\n');

	return 0;
}
