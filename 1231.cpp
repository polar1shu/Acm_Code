#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	while(~scanf("%d",&n) && n)
	{
		int a[10001];
		int dp[10001];
		for(int i=0;i<n;++i)
			scanf("%d",&a[i]);
		int start,end,left,max_sum;
		start = left = a[0] ;
		max_sum = a[0];
		dp[0]=max_sum;
		end = a[0];
		for(int i=1;i<n;++i)
		{
			if(max_sum+a[i]<a[i])
				left = max_sum = a[i];
			else
				max_sum+=a[i];
			if(dp[i-1]>=max_sum)
				dp[i]=dp[i-1];
			else
			{
				dp[i]=max_sum;
				start = left;
				end = a[i];
			}
		}
		if(dp[n-1]<0)
			printf("0 %d %d\n",a[0],a[n-1]);
		else
			printf("%d %d %d\n",dp[n-1],start,end);
	}
}