#include <stdio.h>

int main(void)
{
	float x,h = 0.0;
	int i ;

    for (i = 0; i <= 100; i++) {
        x = i / 100.0;
        printf("x=%f x=%f\n",h,x);
        h=h + 0.01;
    }
 

	return 0;
}
