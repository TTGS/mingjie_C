#include <stdio.h>
/*
好吧，我承认，题目我没看懂 。 
*/
unsigned set_n(unsigned x,int pos, int n){
 
	
	return x | (1 << pos);
}
unsigned reset_n(unsigned x, int pos , int n ){
 
	return   x & (1<<(sizeof(x)-pos-1) ) ;
}
unsigned inverse_n(unsigned x, int pos,int n){
 
	
	return x ^ (1<<(sizeof(x)-pos-1) );
}
int main(void)
{
	unsigned i, pos,n;
/*
好吧，我承认，题目我没看懂 。 
*/
	printf("请输入整型数："); 
	scanf("%u",&i );
	printf("请输入操作的位数："); 
	scanf("%u",&pos);
	printf("请输入操作的到位数："); 
	scanf("%u",&n);
//printf("%ld \n"   , sizeof(i)  );
	printf("%d将第%d位后设为1的值%d\n",i,pos,set(i, pos,n));
	printf("%d将第%d位后设为0的值%d\n",i,pos,reset(i, pos,n));
	printf("%d将第%d位后 取反的值%d\n"   ,i,  pos,inverse(i, pos,n));  
	return 0;
 }  
