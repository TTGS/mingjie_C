#include<stdio.h>

int main(void)
{

    int  a[4][3]={{1,1,1},{2,2,2},{3,3,3},{4,4,4}};
    int  b[3][4]={{1,1,1,1},{2,2,2,2},{3,3,3,3}};
    int  n[4][4]={0};
    int  i,j;

/*
for(i=0;i<=4;i++){
for(j=0;j<=4;j++){
printf("a:[%d][%d]:%d",i,j,a[i][j]) ;
printf("a:[%d][%d]:%d",i,j,b[i][j]) ;
printf("a:[%d][%d]:%d",i,j,n[i][j]) ;
}
printf("\n");
}
*/

for(i=0;i<=2;i++){
for(j=0;j<=3;j++){
n[i][j]=n[i][j]+a[i][j]*b[j][i];
}
}

for(i=0;i<=4;i++){
for(j=0;j<=4;j++){
printf("%5d",n[i][j]) ;
}
printf("\n");
}

    return 0;
} 
