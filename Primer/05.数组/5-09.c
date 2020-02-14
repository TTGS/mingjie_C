/*
	输入学生的分数并显示出分布情况
*/

#include <stdio.h>

#define NUMBER	80		/* 人数上限 */

int main(void)
{
	int i, j ;
	int num;				/* 实际的人数 */
	int tensu[NUMBER];		/* 学生的分数 */
	int bunpu[11] = {0};	/* 分布图 */
	int max ;
	printf("请输入学生人数：");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("\a 请输入1~%d 的数：", NUMBER);
	} while (num < 1 || num > NUMBER);

	printf("请输入%d 人的分数。\n", num);

	for (i = 0; i < num; i++) {
		printf("%2d号：", i + 1);
		do {
			scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
				printf("\a请输入1~100 的数：");
		} while (tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
	}

	//比大小
	max=bunpu[0];
	for (i =0; i <= 9; i++) {
		
		if (bunpu[i]>=max)
			max=bunpu[i];
	}

	//行
	for (j=max;j>=1;j--)
	{       //列
		for (i=0;i<num;i++)
		{       //数组里写3,那么就出3个星花，如果是0,那就不出。
			if (bunpu[i]>=j)
				printf("  * ");
			else
				printf("    ");	
		}
	printf("\n");
	}
	//底下的横线和成绩刻度，如果放在上面的for里，那么会少。
	//最高30分，那么后面的都没有了，因为后面的就没有显示空格或者星花。
	printf("---------------------------------------------\n");
	for (i=0;i<11;i++){
	printf("  %d",i*10);
	}
	printf("\n");

	return 0;
}
