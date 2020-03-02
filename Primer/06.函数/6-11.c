 #include <stdio.h>

int search_idx(const int v[] , int idx[] , int key , int n)
{ 
int i,t;
t=0;
	for(i=0;i<7;i++)
	{
		 if (v[i]==key) {
			idx[t]=i;
			t++;
		}
	} ; 
return t;
}


int main(void)
{
	int  w,j,h=0;
	int k[]={1,7,5,7,2,4,7};
	int q[7]={0}; 
 	w=search_idx(k,q,7,7);
	printf("所查找的关键词共有:%d \n 存在的数组位置为：{" ,w );
	for(j=0;j<w;j++)
	{
	printf("%d" ,  q[j]);
	if (j!=(w-1))
		printf(","  );
	}
	printf("} \n");
	return 0;
} 
