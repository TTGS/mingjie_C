/*
	显示所输入的月份所处的季节
*/

#include <stdio.h>

int main(void)
{
	int month;					/* 月 */

	printf("请输入月份");
	scanf("%d", &month);

	switch  (month) 
	      {	
case 3  : printf("%d月是春季。\n", month); break;
case 4  : printf("%d月是春季。\n", month); break;
case 5  : printf("%d月是春季。\n", month); break;
case 6  : printf("%d月是夏季。\n", month); break;
case 7  : printf("%d月是夏季。\n", month); break;
case 8  : printf("%d月是夏季。\n", month); break;
case 9  : printf("%d月是秋季。\n", month); break;
case 10 : printf("%d月是秋季。\n", month); break;
case 11 : printf("%d月是秋季。\n", month); break;
case 12 : printf("%d月是冬季。\n", month); break;
case 1  : printf("%d月是冬季。\n", month); break;
case 2  : printf("%d月是冬季。\n", month); break;
default : printf("%d月不存在!!\a\n", month);
	      }
	return 0;
}
