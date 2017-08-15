#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
struct Node
{
	int x,y;
	double len;
}node[10001];
Node se[10001];
int a[10001];
int C;
bool cmp(Node a,Node b)
{
	return a.len<b.len;
}
void init()
{
	for(int i=0;i<C;++i)
		a[i]=i;
}
int find(int n)
{
	if(n != a[n])
		return find(a[n]);
	return a[n];
}
int merge(int x,int y)
{
	x=find(x);
	y=find(y);
	if(x != y)
	{
		a[y]=x;
		return 1;
	}
	return 0;
}
int main()
{
	int T;
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			scanf("%d",&C);
			for(int i=0;i<C;++i)
			{
				scanf("%d%d",&node[i].x,&node[i].y);
			}
			int num = 0;
			for(int i=0;i<C;++i)
			{
				for(int j = i+1;j<C;++j)
				{
					se[num].x=i;
					se[num].y=j;
					se[num++].len = (double)sqrt((node[i].x - node[j].x) * (node[i].x - node[j].x) + (node[i].y - node[j].y) * (node[i].y - node[j].y));
				}
			}
			sort(se,se+num,cmp);
			init();
			double sum = 0;
			int ans = 0;
			for(int i=0;i<num;++i)
			{
				if(se[i].len<=1000 && se[i].len>=10 && merge(se[i].x,se[i].y))
				{
					sum += se[i].len;
					ans++;
				}
			}
			/*int i,m;
			for(i=0,m=0;i<C;i++)
	        {
	            if(m>1)
	            {
	                printf("oh!\n");
	                break;
	            }
	            else if(a[i]==i)
	                m++;
	        }
	        if(m==1)
	            printf("%.1lf\n",100*sum);*/
			if(ans != C-1)
				printf("oh!\n");
			else
				printf("%.1lf\n",sum*100.0);//两种写法都可以
		}
	}
}