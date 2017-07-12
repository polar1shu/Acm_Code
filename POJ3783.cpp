/* 
    动态规划DP： 
        状态转移方程：DP[i][j]=DP[i][j-1]+DP[i-1][j-1]+1; 
        其中i代表小球个数，j代表可扔次数。DP[][]表示该状态下可测出的楼层数。 
        由状态转移方程可清晰看出，DP[i][j]在第某层楼X扔下一个小球， 
        如果该球破碎，那么其结果是DP[i-1][j-1]的情况（即少一个球少一次机会）； 
        如果该球未破碎，那么其结果是DP[i][j-1]的情况（即球不少，但少一次机会）； 
        所以DP[i][j]能测的楼层数为DP[i][j-1]+DP[i-1][j-1]+1的和。 
*/  
#include <iostream>
#include <algorithm>
using namespace std;
int dp[52][1010];
int main()
{
			for(int i=0;i<=1000;++i)
			{
				dp[1][i]=i;
			}
			for(int i=2;i<=50;++i)
			{
				for(int j=1;j<=1000;++j)
				{
					if(i>j)
						dp[i][j]=dp[j][j];
					else
						dp[i][j]=dp[i-1][j-1]+dp[i][j-1]+1;
					if(dp[i][j]>1010)//防止数据过大  数据规模最大为1000，所以设上限
						dp[i][j]=1010;
				}
			}
	int P;
	while(~scanf("%d",&P))
	{
		while(P--)
		{
			int m,n,num;
			scanf("%d%d%d",&num,&m,&n);
			printf("%d %ld\n",num,lower_bound(dp[m],dp[m]+1000,n)-dp[m]);
		}
	}
}