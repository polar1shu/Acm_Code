#include<stdio.h>
#include<math.h>
#include<string.h>
//int a[20]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
int v[21],a[21],n,m;
int prime(int y)
{
	if(y == 1)
		return 0;
	for(int i=2;i<=y/2;++i)
	{
		if(y%i == 0)
			return 0;
	}
	return 1;
}
void dfs(int x)
{
	if(x == n+1 && prime(a[n]+1))
	{
		for(int i=1;i<=n;++i)
			printf("%d ",a[i]);
		printf("\n");
		return ;
	}
	for(int i=2;i<=n;++i)
	{
		if(v[i] == 0 && prime(a[x-1]+i))
		    {
		    	v[i]=1;
		    	a[x]=i;
		        dfs(x+1);
		        v[i]=0;
		    }
	}
	return ;
}
int main()
{
	m=0;
	while(~scanf("%d",&n) && n != 0)
	{
		memset(a,0,sizeof(a));
		memset(v,0,sizeof(v));
		a[1]=1;
		m+=1;
		printf("Case %d:\n",m);
		if(n%2 == 0)
			dfs(2);
		else 
		{
			if(n == 1)
			    printf("1\n");
			else 
		        printf("No Answer\n");
		}
	}
	return 0;
}