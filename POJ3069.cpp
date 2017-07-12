#include <iostream>
using namespace std;
int *sort(int a[],int n)
{
	for(int i=0;i<n;++i)
	{
		for(int j=i;j<n;++j)
		{
			if(a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	return a;
}
void solve(int a[],int r,int n)
{
	sort(a,n);
	int i=0;
	int ans=0;
	//for(int i=0;i<n;++i)
	//	printf("%d ",a[i]);
	while(i<n)
	{
		int z=a[i++];
		while(i<n && z+r>=a[i])
		{
			i++;
		}
		int y=a[--i];
		while(i<n && a[i]<=y+r)
		{
			i++;
		}
		ans++;
	}
	printf("%d\n",ans);
}
int main()
{
	int n,r;
	int a[1001];
	while(~scanf("%d%d",&r,&n) && r!= -1 && n!=-1)
	{
	    for(int i=0;i<n;++i)
		    scanf("%d",&a[i]);
	    solve(a,r,n);
	}
}