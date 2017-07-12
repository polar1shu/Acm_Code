#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	char a[300],b[300];
	while(~scanf("%s%s",a,b))
	{
		int dp[300][300];
		int len1=strlen(a);
		int len2=strlen(b);
		for(int i=0;i<=len1;++i)
			dp[i][0]=0;
		for(int i=0;i<=len2;++i)
			dp[0][i]=0;
		for(int i=1;i<=len1;++i)
			for(int j=1;j<=len2;++j)
			{
				if(a[i-1] == b[j-1])
					dp[i][j]=dp[i-1][j-1]+1;
				else
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		printf("%d\n",dp[len1][len2]);
	}
}
