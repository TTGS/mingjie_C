/*
	求4名学生在两次考试中3门课程的总分并显示
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int tensu1[6][2] = { {91, 63}, {67, 72}, {89, 34}, {32, 54} , {59, 84}, {22, 14}};
	int sum[6][2]={0};			/* 总分 */
        int gsum[6][2]={0};

	/* 显示考试的分数 */
	puts("考试的分数");
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 2; j++){
			printf("%4d", tensu1[i][j]);
		}
		putchar('\n');
	}

	/* 求各科的分数之和 */
	for (i = 0; i < 6; i++) {	
		for (j = 0; j < 2; j++)		
			gsum[i][j] = gsum[i][j]+tensu1[i][j] ;	/* 两次的分数相加 */
	}

	/* 显示各科总分 */
	puts("各科总分");
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 2; j++)
			printf("%4d", gsum[i][j]);
		putchar('\n');
	}


	/* 显示各科平均成绩 */
	puts("各科平均成绩");
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 2; j++)
			printf(" %.1lf ", gsum[i][j]/2.0);
		putchar('\n');
	}

	/* 求两次考试的分数之和 */
	for (i = 0; i < 6; i++) {	
		for (j = 0; j < 2; j++)		
			sum[i][j] = sum[i][j]+tensu1[i][j] ;	/* 两次的分数相加 */
	}


	/* 显示每个学生总分 */
	puts("每个学生总分");
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 2; j++)
			printf("%4d", sum[i][j]);
		putchar('\n');
	}


	/* 显示每个学生平均成绩 */
	puts("每个学生平均成绩");
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 2; j++)
			printf(" %.1lf ", sum[i][j]/2.0);
		putchar('\n');
	}

	return 0;
}
