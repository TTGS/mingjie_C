/*
	�������ȫ��Ԫ�ؽ��е�������
*/

#include <stdio.h>
#define d 7

int main(void)
{
	int i;
	int x[d];					/* int[7] ���� */

	for (i = 0; i < d; i++) {	/* ����Ԫ�ص�ֵ */
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 3; i++) {	/* ������Ԫ�ؽ��е������� */
		int temp = x[i];
		x[i]     = x[d-1 - i];
		x[d-1 - i] = temp;
	}

	puts("���������ˡ�");
	for (i = 0; i < d; i++)		/* ��ʾԪ�ص�ֵ */
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
