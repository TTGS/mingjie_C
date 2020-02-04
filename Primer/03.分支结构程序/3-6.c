#include <stdio.h>

int main(void)
{
int x,y,z;
int min;

printf("整数x：");
scanf("%d",&x);

printf("整数y：");
scanf("%d",&y);

printf("整数z：");
scanf("%d",&z);

min=x;

if (y<min)  
	min=y;
else  if (z<min)  
	min=z;

printf("min=%d \n",min);	

return 0;
}
