#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
	char a[10000];
	char dp[110][1000];
	while(gets(a) && (a[0]!='#'))
	{
		int len=0;
		len=strlen(a);
		memset(dp,'\0',sizeof(dp));
		if(len == 0)//没输入字符串
		{
			printf("0\n");
			continue;
		}
		int n=0;
		n=len-1;
		for(int i=0;i<len;++i)
		{
			if(a[i]!=' ')
			{
				n=i;
				break;
			}
		}
		if(n == len-1)
		{
			printf("0\n");
			continue;
		}
		int j=0;
		int word=1;
		for(int i=n;i<len-1;++i)
		{
			if(a[i]!=' ')
			{
				dp[word][j++]=a[i];
			}
			if(a[i] == ' ' && a[i+1] != ' ')
			{
				word++;
				j=0;
			}
		}
		if(a[len-1]!=' ')
			dp[word][j]=a[len-1];
		int sameword=0;
		for(int i=1;i<=word;++i)
		{
			for(int j=i+1;j<=word;++j)
			{
				if(strcmp(dp[i],dp[j]) == 0)
				{
					sameword++;
					break;
				}
			}
		}
		printf("%d\n",word-sameword);
	}
}