#include <iostream>
using namespace std;
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int m;
		scanf("%d",&m);
		int b[1001]={0};//位置上的学号
		int a[1001]={0};//学号所在位置
		for(int i=1;i<=n;++i)
		{
			a[i]=i;
			b[i]=i;
		}
		for(int i=0;i<m;++i)
		{
			int p,q;
			scanf("%d%d",&p,&q);
			if(q>0)
			{
				int t1 = a[p];
				int t2,t3;
				for(int i = 1;i<=q;++i)
				{
					t2 = b[t1+1];
					t3 = a[t2];
					b[t1]=t2;
					a[t2]=t1;
					t1 = t3;
				}
				b[t3] = p;
				a[p]+=q;
			}

			else if(q<0)
			{
				int t1 = a[p];
				int t2,t3;
				for(int i = 1;i<=(-q);++i)
				{
					t2 = b[t1-1];
					t3 = a[t2];
					b[t1]=t2;
					a[t2]=t1;
					t1 = t3;
				}
				b[t3] = p;
				a[p]+=q;
			}
			else if(q == 0)
				continue;
		}
		for(int i=1;i<n;++i)
			printf("%d ",b[i]);
		printf("%d\n",b[n]);
	}
}