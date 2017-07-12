#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int a[10000],sum,dd,N;
void dfs(int cur,int total)
{
	int t = abs(sum-total*2);
	if(t<dd)
		dd=t;
	if(cur == N || total > sum/2)
		return ;
	dfs(cur+1,total+a[cur]);
	dfs(cur+1,total);

}
int main()
{
	while(~scanf("%d",&N))
	{
		memset(a,0,sizeof(a));
		sum=0;
		for(int i=0;i<N;++i)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		dd=1e9;
		dfs(0,0);
		printf("%d\n",dd);
	}
	return 0;
}