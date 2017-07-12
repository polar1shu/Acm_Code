#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
char s[102];
int a[10002];
int main()
{
	int N;
	while(~scanf("%d",&N))
	{
		getchar();//吞回车
		//gets(s);
		int m=0;
		int k = 0;
		while(N--)
		{
			gets(s+1);//从s[1]开始存
			//int len = length(s);
			int flag = 0;
			s[0] = ' ';
			for(int i=0;s[i]!='\0';++i)
			{
				if(s[i-1] == ' ' && s[i] != ' ')
				{
					k = s[i] - '0';
					flag = 1;
				}
				else if(s[i] == ' ')
				{
					if(k != -1)
						a[m++]=k;
					flag = 0;
					k = -1;
				}
				else if(flag)
					k = k*10 + s[i] - '0';
			}
		}
		if(k != -1)
			a[m++] = k;
		sort(a,a+m);//排序
		int x,y;
		x = y = 0;
		for(int i = 1;i<m;++i)
		{
			if(a[i] - a[i-1] == 2)
				x=a[i]-1;
			if(a[i] == a[i-1])
				y=a[i];
		}
		printf("%d %d\n",x,y);
	}
}