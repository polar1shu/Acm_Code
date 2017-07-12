#include <iostream>
using namespace std;
int max(int x,int y)
{
	return x>y?x:y;
}
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		while(n--)
		{
			int a[100][100];
			int dp[100][100];
			int m;
			scanf("%d",&m);
			for(int i=0;i<m;++i)
				for(int j=0;j<=i;++j)
					scanf("%d",&a[i][j]);
			for(int i=0;i<m;++i)
				dp[m-1][i]=a[m-1][i];
			for(int i=m-2;i>=0;--i)
				for(int j=0;j<=i;++j)
					dp[i][j]=max(dp[i+1][j],dp[i+1][j+1])+a[i][j];
			printf("%d\n",dp[0][0]);
		}
	}
}