#include <stdio.h>

void sort3(int *n1 , int *n2 , int *n3)
{
int temp; 
if (*n2<*n1)
{
	temp=*n2;
	*n2=*n1;
	*n1=temp;
} 
if (*n3<*n2 )
{
	temp=*n3;
	*n3=*n2;
	*n2=temp;
}
if (*n3<*n1)
{
	temp=*n3;
	*n3=*n1;
	*n1=temp;
} 
 

}

int main(void)
{
	int a,b,c ; 
	int ya,yb,yc;
	printf("请输入3个整数。\n");
	printf("整数1 ：");   scanf("%d", &a); 
	printf("整数2 ：");   scanf("%d", &b); 
	printf("整数3 ：");   scanf("%d", &c); 

//没有这个循环，当数字是3,2,1时候，出来结果是2,1,3 明显没有升序成功
//函数还要求void，那么只能只用在外侧对比的方法，如果进函数和之前结果一样，跳出循环。
	do{
		ya=a;
		yb=b;
		yc=c;
		sort3(&a,&b,&c);
	}while(ya!=a && yb!=b && yc!=c );
	printf("调整完是: %d,%d,%d \n" ,a,b,c);

}
