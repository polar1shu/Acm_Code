#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
	int T;
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			int a[15][15];
			char s[15][15];
			int v[15];
			char c;
			/*for(int i=1;i<10;++i)
				scanf("%s",s[i]);*/
			//for(int i=0;i<9;i++)
			//	scanf("%s",s[i]);
			for(int i=1;i<10;++i)
				for(int j=1;j<10;++j)
				{
					cin>>c;
					a[i][j]=c-'0';
				}
			/*for(int i=1;i<10;++i)
				for(int j=1;j<10;++j)
					a[i][j]=s[i][j]-'0';*/
				/*for(int i=1;i<10;++i)
				{
					for(int j=1;j<10;++j)
						printf("%d",a[i][j]);
					printf("\n");
				}*/

			int flag =1;
			for(int i=1;i<10;++i)
			{
				int flag1=1;
				memset(v,0,sizeof(v));
				for(int j =1;j<10;++j)
				{
					v[a[i][j]]=1;
				}
				for(int j=1;j<10;++j)
				{
					flag1&=v[j];
				}
				flag&=flag1;
			}
			for(int i=1;i<10;++i)
			{
				int flag1=1;
				memset(v,0,sizeof(v));
				for(int j=1;j<10;++j)
				{
					v[a[j][i]]=1;
				}
				for(int j=1;j<10;++j)
				{
					flag1&=v[j];
				}
				flag&=flag1;
			}
			for(int i=1;i<10;i+=3)
			{
				for(int j=1;j<10;j+=3)
				{
					memset(v,0,sizeof(v));
					for(int p=i;p<i+3;++p)
					{
						for(int q=j;q<j+3;++q)
						{
							v[a[p][q]]=1;
						}
					}
					int flag1=1;
					for(int p=1;p<10;++p)
						flag1&=v[p];
					flag&=flag1;
				}
			}
			if(flag == 1)
				printf("Valid\n");
			else
				printf("Invalid\n");
		}
	}
}