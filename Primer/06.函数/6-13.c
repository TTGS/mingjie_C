/*
	求4名学生在两次考试中3课程的总分并显示（函数版）
*/

#include <stdio.h>

/*--- 将4行3列矩阵a和b的和存储在c中 ---*/
void mat_add(const int a[2][4][3], int c[1][4][3])
{
	int i, j,k=0;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			c[0][i][j] = a[k][i][j] + a[k+1][i][j];
}

/*--- 显示4行3列矩阵m ---*/
void mat_print(const int m[2][4][3],int h)
{
	int i, j ;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", m[h-1][i][j]);
		putchar('\n');
	}
}

int main(void)
{
	int tensu[2][4][3] = { 
	{ {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} },
	{ {97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} }
			};
	int sum[1][4][3]={0};			/* 总分 */

	mat_add(tensu, sum);				/* 求两次考试中成绩的总和 */

	puts("第一次考试的分数");  mat_print(tensu,1);	/* 显示第一次考试的分数 */
	puts("第二次考试的分数");  mat_print(tensu,2);	/* 显示第二次考试的分数 */
	puts("总分");        mat_print(sum,1);		/* 显示总分 */

	return 0;
}
