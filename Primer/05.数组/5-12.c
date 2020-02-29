/*
	求4名学生在两次考试中3门课程的总分并显示
*/

#include <stdio.h>

int main(void)
{
	int i, j,k;
	int tensu1[2][4][3] = 
	{
		{ 
			{97, 67, 82}, 
			{73, 43, 46}, 
			{97, 56, 21}, 
			{85, 46, 35} 
		},
		{ 
			{91, 63, 78}, 
			{67, 72, 46}, 
			{89, 34, 53}, 
			{32, 54, 34} 
		} 
	};
	int sum[4][3]={0};			/* 总分 */

	/* 求两次考试的分数之和 */
for (k = 0; k < 2; k++) 
{
	for (i = 0; i < 4; i++) {	 			/* 4名学生的 */
		for (j = 0; j < 3; j++)	 			/* 3门课程的 */
			sum[i][j] = sum[i][j]+tensu1[k][i][j]  ;	/* 两次的分数相加 */
	}
}
	/* 显示第一次考试的分数 */
for (k = 0; k < 2; k++) 
{
	printf("第%d次考试的分数\n",k+1);
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", tensu1[k][i][j]);
		putchar('\n');
	}
}

 

	/* 显示总分 */
puts("总分");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", sum[i][j]);
		putchar('\n');
	}

	return 0;
}
