#include <iostream>
#include <algorithm>
using namespace std;
int n;
//int maxSum[101][101];
int *maxSum;//指针的使用  灵魂
int dp[101][101];
int max(int x,int y)
{
	return x>y?x:y;
}
int main()
{
	while(~scanf("%d",&n))
	{
		for(int i=0;i<n;++i)
			for(int j=0;j<=i;++j)
			{
				scanf("%d",&dp[i][j]);
			}
		//for(int i=0;i<n;++i)
		//	maxSum[n-1][i]=dp[n-1][i];
		maxSum=dp[n-1];//maxSum指向n行
		for(int i=n-2;i>=0;--i)
			for(int j=0;j<=i;++j)
				//maxSum[i][j]=max(maxSum[i+1][j],maxSum[i+1][j+1])+dp[i][j];
				maxSum[j]=max(maxSum[j],maxSum[j+1])+dp[i][j];
		printf("%d\n",maxSum[0]);
	}
}
/*#include <iostream>
#include <algorithm>
using namespace std;
int n;
int dp[101][101]={0};
int maxsum[101][101]={0};
int max(int x,int y)
{
	return x>y?x:y;
}
int maxSum(int i,int j)
{
	if(maxsum[i][j]!=-1)
		return maxsum[i][j];
	//int sum=0;
	if(i == n)
	    maxsum[i][j]=dp[i][j];
	else
	{
		int x=maxSum(i+1,j);
	    int y=maxSum(i+1,j+1);
	    maxsum[i][j]= max(x,y)+dp[i][j];
	}
	return maxsum[i][j];
}
int main()
{
	//int max=0;
	while(~scanf("%d",&n))
	{
		//int dp[100][100]={0};
		for(int i=0;i<n;++i)
			for(int j=0;j<=i;++j)
			{
				scanf("%d",&dp[i][j]);
				maxsum[i][j]=-1;
			}
		cout<<maxSum(0,0)<<endl;
	}
}*/