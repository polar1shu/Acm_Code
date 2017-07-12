#include <iostream>
using namespace std;
int n;
int w[100],v[100];
int dp[100][100];
void solve()
{
	
}
int main()
{
	while(~scanf("%d",&n))
	{
		for(int i=0;i<n;++i)
			scanf("%d",&w[i]);
		for(int i=0;i<n;++i)
			scanf("%d",&v[i]);
		solve();
	}
}
/*#include <iostream>
using namespace std;
int w[5],v[5];
int W=5;
int n;
int max(int a,int b)
{
	if(a<b)
		return b;
	else
		return a;
}
int rec(int i,int j)
{
	int sum;
	if(i == n)
	{
		sum=0;
	}
	else if(j<w[i])
	{
		sum=rec(i+1,j);
	}
	else
	{
		sum = max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
	}
	printf("%d\n",sum);
	return sum;
}
void solve()
{
	printf("%d\n",rec(0,W));
}
int main()
{
	while(~scanf("%d",&n))
	{
		for(int i=0;i<n;++i)
			scanf("%d",&w[i]);
		for(int i=0;i<n;++i)
			scanf("%d",&v[i]);
		solve();
	}
}*/