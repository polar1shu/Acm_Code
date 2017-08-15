#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
	char a[1000];
	char b[1000];
	while(~scanf("%s%s",a,b))
	{
		int len1 = strlen(a);
		int len2 = strlen(b);
		int c[1000][1000];
		for(int i=0;i<=len1;++i)
			c[i][0]=0;
		for(int i=1;i<=len2;++i)
			c[0][i]=0;
		for(int i=1;i<=len1;++i)
		{
			for(int j=1;j<=len2;++j)
			{
				if(a[i-1] == b[j-1])
				{
					c[i][j]=c[i-1][j-1]+1;
				}
				else 
				{
					c[i][j]=max(c[i-1][j],c[i][j-1]);
				}
			}
		}
		printf("%d\n",c[len1][len2]);
	}
}