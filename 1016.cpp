#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int n;
int a[25];
int dir[25];
int prime(int x)
{
	for(int i=2;i*i<x+1;++i)
	{
		if(!(x%i))
			return 0;
	}
	return 1;
}
void fun(int cur)//控制数 控制圆圈里填数
{
	if(cur == n && prime(a[n-1]+1))//当圆圈里的数都被填上了  判断最后一个数和第一个数的和是否是素数
	{
		for(int i=0;i<n-1;++i)
		{
			printf("%d ",a[i]);
		}
		printf("%d",a[n-1]);//必须用这种方式输出，输出最后一个答案后不能有空格
		printf("\n");
		return ;
	}
	for(int i=2;i<=n;++i)//控制圆圈里的数
	{
		if(!dir[i])//判断这个数是否被用过
		{
			if(prime(a[cur-1]+i))//判断这个数相邻的数是否是素数
			{
			    dir[i]=1;
			    a[cur]=i;
			    //printf("%d\n",cur);
			    fun(cur+1);
			    dir[i]=0;
			}
		}
	}
}
int main()
{
	int sum=1;
	while(~scanf("%d",&n))
	{
		
		//memset(dir,0,sizeof(dir));
		//memset(a,0,sizeof(a));
		a[0]=1;
		printf("Case %d:\n",sum++);
		fun(1);
		printf("\n");
	}
}