#include<stdio.h>

int main(void)
{

    int  a[4][3]={{1,1,1},{2,2,2},{3,3,3},{4,4,4}};
    int  b[3][4]={{1,1,1,1},{2,2,2,2},{3,3,3,3}};
    int  n[4][4]={0};
    int  i,j,m,h,temp;
//  6, 6, 6, 6
// 12,12,12,12
// 18,18,18,18
// 24,24,24,24

/*
for(i=0;i<=4;i++){
for(j=0;j<=4;j++){
printf("a:[%d][%d]:%d",i,j,a[i][j]) ;
printf("b:[%d][%d]:%d",i,j,b[i][j]) ;
printf("n:[%d][%d]:%d",i,j,n[i][j]) ;
}
printf("\n");
}
*/

m=0;
temp=0;

	temp=0;
	for(i=0;i<=3;i++){
	temp=0;
		for(j=0;j<=2;j++){
			temp=temp+a[i][j]*b[j][i];
			printf("i=%d , j=%d, m=%d,h=%d,temp=%d\n",i,j,m,h,temp) ;
		}
	n[m][i]=temp;
	if (h==3) 
		m++;

	}




//显示 矩阵乘法之后的内容。
for(i=0;i<=3;i++){
for(j=0;j<=3;j++){
printf("%5d",n[i][j]) ;
}
printf("\n");
}


    return 0;
} 
