#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;
//#define PI 3.1415926
double PI=acos(-1.0);//必须这么定义
double a[10010];
double sum;
double maxn;
int main()
{
	int T;
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			int N,F;
			int R;
			double l,r,mid;
			maxn=sum=0;
			scanf("%d%d",&N,&F);//N块蛋糕，F个人
			F++;
			memset(a,0,sizeof(a));
			for(int i=0;i<N;++i)
			{
				scanf("%d",&R);//输入半径
				a[i]=PI*R*R;//求每个蛋糕的面积
				maxn=max(a[i],maxn);//算单个蛋糕最大的面积
				sum+=a[i];//算所有蛋糕的总面积
			}
			l = maxn/F;//算单个蛋糕可以平分面积的下界 
			r = sum/F;//算所有蛋糕可以平分面积的上界
			int ans;
			while(fabs(l-r)>1e-6)//1e－6就可以了
			{
				mid=(l+r)/2;//二分
				ans=0;
				for(int i=0;i<N;++i)
				{
					ans+=(int)double(a[i]/mid);
					//计算所有蛋糕是否可以平分
					//ans用来计算分够f个人的
				}
				if(ans<F)//如果分的数量小于f，说明这个蛋糕的上界是不可能达到的
					//则换上界
						r=mid;
					else
						//否则换下界
						l=mid;
			}
			printf("%.4lf\n",l);
		}
	}
}
