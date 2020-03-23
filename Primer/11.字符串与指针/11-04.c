#include <stdio.h>

/*--- 将字符串s复制到d ---*/
void put_string(const char *s)
{
putchar( *s); 
	while (  *s++)
		putchar(*s); 

	printf("\n" );
}

int main(void)
{
	char str[128] ; 
 
	printf("复制的是：" );
	scanf("%s", str);

	put_string(str);
	return 0;
}
