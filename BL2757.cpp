#include <iostream>
#include <algorithm>
using namespace std;
//int 
int max(int x,int y)
{
	return x>y?x:y;
}

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
	    int sum=0;
	    int a[1010];
	    int dp[1010];
	    for(int i=0;i<n;++i)
	    {
	        scanf("%d",&a[i]);
	        dp[i]=1;
	    }
	    for(int i=0;i<n;++i)//求第i个元素为终点的最长上升子序列的长度
	    	for(int j=0;j<i;++j)//到第j个元素为终点的最长上升子序列
	    		if(a[i]>a[j])
	    			dp[i]=max(dp[i],dp[j]+1);
	    for(int i=0;i<n;++i)
	    	if(sum<dp[i])
	    		sum = dp[i];
	    printf("%d\n",sum);
	}
}