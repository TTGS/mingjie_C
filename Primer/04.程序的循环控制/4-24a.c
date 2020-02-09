#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("让我们来画一个金字塔。");
	printf("金字塔有几层：");
	scanf("%d", &len);
 		//i是层数
		for (i = 1; i <= len; i++)
		{
			//每行的个数，
			//以3行为例，
			//	第一行是3,第二行是4,第三行5...
			// 这个规则符合： 输入值-行-1 			
			for(j=1;j<= len+i-1 ;j++){
				if( j<=len-i   )
					putchar(' ');
				else 
					putchar('*'); 
			}
		putchar('\n');	 
		}
	return 0;
}
