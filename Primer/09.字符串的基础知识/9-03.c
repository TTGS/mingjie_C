/*
	读取并显示字符串数组
*/

#include <stdio.h>
#include <string.h>
#define NUM 3

int main(void)
{
	int  i;
	char s[NUM][128];

	for (i = 0; i < NUM; i++) {
		printf("s[%d] : ", i);
		scanf("%s", s[i]);
                if (strcmp(s[i],"$$$$$") ==0)
		{
		break;
		}
	}

	for (i = 0; i < 3; i++)
	{
                if (strcmp(s[i],"$$$$$") ==0)
		{
		break;
		}
		printf("s[%d] = \"%s\"\n", i, s[i]);
	}
	return 0;
}
