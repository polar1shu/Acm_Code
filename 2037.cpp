#include <iostream>
using namespace std;
int n;
void solve(int a[],int b[])
{
	for(int i=0;i<n-1;++i)
    {
		for(int j=0;j<n-i-1;++j)//冒泡排序 
		{
			if(b[j]>b[j+1])
			{
				int k=b[j];  
				b[j]=b[j+1];
				b[j+1]=k;
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
	int sum=1,j=0;
	for(int i=0;i<n;++i)
	{
		if(a[i]>=b[j])
		{
			sum++;
			j=i;
		}
	}
	printf("%d\n",sum);
}
int main()
{
	while(~scanf("%d",&n))
	{
		if(n == 0)
			return 0;
        int a[101],b[101];//c[101]={0};
		for(int i=0;i<n;++i)
			scanf("%d%d",&a[i],&b[i]);
		solve(a,b);
	}
}