#include <stdio.h>

int main(void)
{
int x,y;
printf("请输入两个整数。\n");

printf("整数A：");
scanf("%d",&x);

printf("整数B：");
scanf("%d",&y);

if (x%y!=0)  
       puts("B不是A的约数。");	
else 
       puts("B是A的约数。");	

return 0;
}
