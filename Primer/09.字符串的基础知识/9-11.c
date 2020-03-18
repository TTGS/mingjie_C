/*
	显示字符串数组（函数版）
*/

#include <stdio.h>
#include <string.h>
#define NUM1 3 
#define NUM2 128
/*--- 显示字符串数组 ---*/

void put_strary(const char s[][6], int n)
{
	int i;
	for (i = 0; i < n; i++){
		if (strcmp(s[i], "$$$$$") == 0) 
			break;
		printf("s[%d] = \"%s\"\n", i, s[i]);
}
}

int main(void)
{
	int i ;
	char cs[][6] = {"Turbo", "NA", "DOHC"};
 	puts("请输入五个字符串。");
 	for(i = 0; i < NUM1; i++){
 		printf("第%d个:",i+1);
		scanf("%s",cs[i]);
 		if (strcmp(cs[i], "$$$$$") == 0) 
			break;
	 } 

	put_strary(cs, NUM1);

	return 0;
}
