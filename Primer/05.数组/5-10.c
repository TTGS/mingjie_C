#include<stdio.h>

int main(void)
{

    int  a[4][3]={{1,1,1},{2,2,2},{3,3,3},{4,4,4}};
    int  b[3][4]={{1,1,1,1},{2,2,2,2},{3,3,3,3}};
    int  n[4][4]={0};
    int  i,j,k,p,l,temp[4]={0};

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
p=0;
for (k=0;k<=3;k++){
for(i=0;i<=2;i++){
for(j=0;j<=3;j++){
temp[i]=temp[i]+a[i][j]*b[j][i];
printf("temp:[%d]:%d\n",i,temp[i]) ;
}

for(l=0;l<=4;l++)
{
n[p][l]=temp[l];
}
p++;
}
temp[4]={0};
}

for(i=0;i<=3;i++){
for(j=0;j<=3;j++){
printf("%5d",n[i][j]) ;
}
printf("\n");
}

    return 0;
} 
