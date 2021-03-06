/*
	显示九九乘法表
*/

#include <stdio.h>

int main(void)
{
	//i是行，j是列
	int i, j;
        //i扩展到0 - 10 ，多辆行好控制横线输出
	//i=0，列头
	//i=1，横线
	for (i = 0; i <= 10; i++) {
                //当i=0时，相当于左上角没东西，所以手动为空
		if (i==0) { 
 			printf("  |" );
			}
                //当i=1时，输出横线，
		else if ((i-1)==0)
			printf("----" );
		//i=其他，正常输出即可		
		else 	//这里是2d，因为“|”还有一个位置
			printf("%2d|" ,i-1);
        	for (j = 1; j <= 9; j++){
			//i=0，控制第一列输出，
			//但是i是0,只能靠加显示内容
			if (i==0) 
				printf("%3d", i + j);
			//因为第二行是横线，前面控制的是第一列的横线
			//这里控制的是第二列之后的横线内容。
			else if (((i-1) * j)==0)
				printf("---"  );
			//正常输出
			else
				printf("%3d",  (i-1) * j);
		}
		putchar('\n');		 
	}

	return 0;
}
