#include <stdio.h>

int main(void)
{
int w,x,y,z;
int max;

printf("整数w：");
scanf("%d",&w);

printf("整数x：");
scanf("%d",&x);

printf("整数y：");
scanf("%d",&y);

printf("整数z：");
scanf("%d",&z);

max=w;

if (max<x)  
	max=x;
if (max<y)  
	max=y;
if (max<z)  
	max=z;

printf("max=%d \n",max);	

return 0;
}
