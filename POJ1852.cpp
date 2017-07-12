#include <stdio.h>
#include <string.h>
int a[1000001];
int L,n;
int max(int x,int y)
{
	if(x<y)
		return y;
    else 
    	return x;
}
int min(int x,int y)
{
	if(x<y)
		return x;
	else
		return y;
}
void solve(int x)
{
	int minT=0;
	for(int i=0;i<n;++i)
		minT=max(minT,min(a[i],L-a[i]));
    int maxT=0;
	for(int i=0;i<n;++i)
		maxT=max(maxT,max(a[i],L-a[i]));
	printf("%d %d\n",minT,maxT);
	memset(a,0,sizeof(a));
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&L,&n);
		for(int i=0;i<n;++i)
			scanf("%d",&a[i]);
		solve(1);

	}
}