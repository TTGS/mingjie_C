#include <stdio.h>
 
unsigned set(unsigned x, int pos){
 
	
	return x | (1 << pos);
}
unsigned reset(unsigned x, int pos){
 
	return   x & (1<<(sizeof(x)-pos-1) ) ;
}
unsigned inverse(unsigned x, int pos){
 
	
	return x ^ (1<<(sizeof(x)-pos-1) );
}
int main(void)
{
	unsigned i, pos;
/*
        5 0101  
set     7 0111
reset   4 0100
inverse 6 0110

好吧，我承认，题目我没看懂，按照我想想的做的。
而且第三个inverse ，我也没有作出来。
*/
	printf("请输入整型数："); 
	scanf("%u",&i );
	printf("请输入操作的位数："); 
	scanf("%u",&pos);
//printf("%ld \n"   , sizeof(i)  );
	printf("%d将第%d位后设为1的值%d\n",i,pos,set(i, pos));
	printf("%d将第%d位后设为0的值%d\n",i,pos,reset(i, pos));
	printf("%d将第%d位后 取反的值%d\n"   ,i,  pos,inverse(i, pos));  
	return 0;
 }  
