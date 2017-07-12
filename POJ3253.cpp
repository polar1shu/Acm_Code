
#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
}
//这样写耗时间
/*void swap(int *a,int *b)
{
	int t;
	t= *a;
	*a=*b;
	*b=t;
}*/
void solve(int a[],int n)
{
	long long ans=0;//必须初始化常量
	while(n>1)
	{
		int x=0,y=1;
		if(a[x]>a[y])
			swap(x,y);
		//printf("%d%d\n",x,y);
		for(int i=2;i<n;++i)
		{
			if(a[x]>a[i])
			{
				y=x;
				x=i;			
			}
			else if(a[y]>a[i])
			{
				y=i;
			}
		}
		int t=a[x]+a[y];
		ans+=t;
		if(x == n-1)
			swap(x,y);
		a[x]=t;
		a[y]=a[n-1];
		n--;
	}
	printf("%lld\n",ans);
}
int main()
{
	int a[20001];//根据题目要求来确定数组长度  减少内存
	int n;
	while(~scanf("%d",&n))
	{
	    //getchar();
	    for(int i=0;i<n;++i)
	    {
		    scanf("%d",&a[i]);
		    //getchar();
	    }
	    solve(a,n);
    }
}
//另外一种思想
/*
#include<algorithm>
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
const int maxn=1000001;
int n,a[maxn],i,j,k,b;
long long sum,ans=0;
int main()
{
	scanf("%d",&n);
	int l=n;
	for(i=1;i<=n;++i)scanf("%d",&a[i]);
	sort(a+1,a+n+1);//快排
	k=1;
	for(i=1;i<n;++i)
	{
		sum=a[k]+a[k+1];
		ans+=sum;
		k+=2;
		b=k;
		while(a[k]<sum&&k<=l)//满足条件一直在循环
		    k++;
		for(j=l+1;j>k;--j)
		    a[j]=a[j-1];
		a[k]=sum;
		l++;
		k=b;
	}
	printf("%lld\n",ans);
}*/

