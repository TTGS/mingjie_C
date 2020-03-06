 #include <stdio.h>

int mat_mul(const int a[4][3] , const int b[3][4] , int c[3][3])
{ 
int i,j,h,m,temp;
m=0;
temp=0;
	for(i=0;i<=2;i++)
	{
		
		for(h=0;h<=2;h++)
		{
		temp=0;
				//单独写一个j，那么只是矩阵的第一个数，
				//4×3 和3×4的矩阵，第一行乘第一列， 第一行乘第二列，....
				for(j=0;j<=3;j++)
				{
					temp=temp+b[i][j]*a[j][i]; 
				}

			c[m][h]=temp;
			if (h==2) 
				m++;
		}
	}
}


int main(void)
{
	int  i,j;
	int  a[4][3]={
{1,1,1},
{2,2,2},
{3,3,3},
{4,4,4}
};
	int  b[3][4]={
{1,1,1,1},
{2,2,2,2},
{3,3,3,3}};
	int  c[3][3]={0}; 


//运算过程
//a的行，
mat_mul(a,b,c);

	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		{
			printf("%5d",c[i][j]) ;
		}
		printf("\n");
	}

	return 0;
} 
