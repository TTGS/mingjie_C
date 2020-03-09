#include <stdio.h>

unsigned rrotate(unsigned x , int n )
{
	int i ; 
	for(i=1;i<=n;i++)
	{
		x=x/2;
	}
	return x;
}

unsigned lrotate(unsigned x , int n )
{
	int i ; 
	for(i=1;i<=n;i++)
	{
		x=x*2;
	}
	return x;
}

int main() {

    unsigned int x,n; 
    printf("请输入一个整数："); scanf("%u",&x);
    printf("移动多少位："); scanf("%u",&n);
    printf("%d左移%d为%d \n",x,n,lrotate(x,n) );
    printf("%d右移%d为%d \n",x,n,rrotate(x,n) ); 

}
