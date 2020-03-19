#include <stdio.h>

//后
void increment_date(int *y,int *m ,int *d)
{
int error=0;
	//二月 润年判断
	if ((*y%4==0 || *y%400==0 ) && *m==2 && *d<=28 )
	{
		*d=*d+1;
	}
	else if ((*y%4==0 || *y%400==0 ) && *m==2 && *d==29 )
	{
		*m=*m+1;
		*d=1;
	}
	//非润年
	else if ((*y%4!=0 || *y%400!=0) && *m==2 && *d==28 )
	{
		*d=1;
		*m=*m+1;
	}
	else if ((*y%4!=0 || *y%400!=0) && *m==2 && *d<28 )
	{
		*d=*d+1; 
	}

	// 31天月
	else if((*m==1 || *m==3 || *m==5 || *m==7|| *m==8|| *m==10 ) 
		&& *d==31) 
	{
		*m=*m+1;
		*d=1;
	}
	else if ((*m==1 || *m==3 || *m==5 || *m==7|| *m==8|| *m==10 ||*m==12 ) 
			&& *d<31)
	{
		*d=*d+1;
	}

	// 30天月
	else if((*m==4 || *m==6 || *m==9 || *m==11   ) 
		&& *d==30) 
	{
		*m=*m+1;
		*d=1;
	}
	else if ((*m==4 || *m==6 || *m==9 || *m==11  ) 
			&& *d<30)
	{
		*d=*d+1;
	}

	// 12月
	else if( *m==12 && *d==31) 
	{
		*y=*y+1;
		*m=1;
		*d=1;
	}
	else 
	{
		error=error+1;
	}
	
	if (error!=0)
	{
		//重置成错误月日，为main里的错误抛出做准备
		*m=0;
		*d=0;
	}

}


void decrement_date(int *y,int *m ,int *d)
{
 int error=0;
	//二月 润年判断
	if ((*y%4==0 || *y%400==0 ) && *m==2 && *d<=29  && *d>1 )
	{
		*d=*d-1;
	}
	//非润年
	else if ((*y%4!=0 || *y%400!=0) && *m==2 && *d<=28 && *d>1 )
	{
		*d=*d-1;
	}

	// 31天月
	else if((*m==1 || *m==3 || *m==5 || *m==7|| *m==8|| *m==10 || *m==12  ) 
		&& *d<=31 && *d>1) 
	{ 
		*d=*d-1;
	}

	// 30天月
	else if ((*m==4 || *m==6 || *m==9 || *m==11  ) 
			&& *d<=30 && *d>1)
	{
		*d=*d-1;
	}
 
	// 1 月
	else if( *m==1 && *d==1) 
	{
		*y=*y-1;
		*m=12;
		*d=31;
	}
	//1号
	else if (*d=1 )
	{
		*d=*d-1; 
		*m=*m-1;
	}
	else 
	{
		error=error+1;
	}

	if (error!=0)
	{
		//重置成错误月日，为main里的错误抛出做准备
		*m=0;
		*d=0;
	}

}

int main(void)
{
	int y,m,d ; 

	printf("请输入年月日。\n");
	printf("年 ：");   scanf("%d", &y); 
	printf("月 ：");   scanf("%d", &m); 
	printf("日 ：");   scanf("%d", &d); 
//这里必须保存一份出来。因为第一个函数就把内容修改了，到后面一个函数就会接到错误内容。
	decrement_date(&y,&m,&d);
if (m!=0 && d!=0)
	printf("前一天是 ：%d年%d月%d日\n" ,y,m,d);

//要不就执行两次第二个函数。
	increment_date(&y,&m,&d);
	increment_date(&y,&m,&d);
if (m!=0 && d!=0)
	printf("后一天是 ：%d年%d月%d日\n" ,y,m,d);
//错误抛出
if (m==0 && d==0)
	printf("年月日错误！！！\n");




}
