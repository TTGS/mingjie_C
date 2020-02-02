#include <stdio.h>

int main(void)
{
	int i1,i2,i3,i4;
	double d1,d2,d3,d4;
	i1=11/2;
	i2=11.0/2;
	i3=11.0/2.0;
	i4=11/2.0;

	d1=11/2;
	d2=11.0/2;
	d3=11.0/2.0;
	d4=11/2.0;
	printf("i1=%d \n",i1 );
	printf("i2=%d \n",i2 );
	printf("i3=%d \n",i3 );
	printf("i4=%d \n",i4 );

	printf("d1=%lf \n",d1 );
	printf("d2=%lf \n",d2 );
	printf("d3=%lf \n",d3 );
	printf("d4=%lf \n",d4 );
return 0;
}
