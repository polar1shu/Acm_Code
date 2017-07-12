#include <iostream>
#include <cstring>
using namespace std;
int dfs(int i,int j,int k)
{
	int a[12]={0};
	while(i)
	{
		int m;
		m=i%10;
		a[m]++;
		//printf("1\n");
		if(a[m]>1)
			return 0;
		i/=10;
		if(a[0] != 0)
		return 0;
	}
	while(j)
	{
		int m;
		m=j%10;
		a[m]++;
		if(a[m]>1)
			return 0;
		j/=10;
		if(a[0] != 0)
		return 0;
	}
	while(k)
	{
		int m;
		m=k%10;
		a[m]++;
		if(a[m]>1)
			return 0;
		k/=10;
		if(a[0] != 0)
		return 0;
	}

	for(int i=1;i<10;++i)
	{
		if(a[i] == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	int sum;
	while(~scanf("%d",&n))
	{
		sum=0;
		//memset(a,0,sizeof(a));
		for(int i = 1;i<n;++i)
			for(int j=1;j<9999;++j)
			{
				if(i!=j)
				{
					int k = (n-i)*j;
					if(dfs(i,j,k))//  n= i + k/j;
					{
						//printf("%d=%d+%d/%d\n",n,i,j,k);
						sum++;
					}
				}
			}
		printf("%d\n",sum);
	}
}