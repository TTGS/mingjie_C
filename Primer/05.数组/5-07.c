/*
	�������ȫ��Ԫ�ؽ��е�������
*/

#include <stdio.h>

int main(void)
{
	int i,k;

	printf("���ݸ��� : ");
	scanf("%d", &k);
	int x[k]; 

	for (i = 0; i < k; i++) {	/* ����Ԫ�ص�ֵ */
		printf("%d�� : ", i+1);
		scanf("%d", &x[i]);
	}
printf("{");
	for (i = 0; i < k; i++)	{
		printf("%d", x[i]);
		printf(",");	
	}
printf("}");
	return 0;
}
