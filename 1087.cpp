#include<stdio.h>
int main()
{
	int n,ans,i,j,a[1028],dp[1028];
	while(~scanf("%d",&n) && n)
	{
		for(i=0;i<n;++i)
			scanf("%d",&a[i]);
		for(i=0;i<n;++i)
		{
			dp[i]=a[i];
			for(j=0;j<i;++j)
			{
				if(a[i]>a[j] && dp[j]+a[i]>dp[i])
					ans=dp[j]+a[i];
					
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}