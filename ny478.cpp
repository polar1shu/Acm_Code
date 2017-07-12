#include<stdio.h>
int a[500000];
int main()
{
	for(int i=1;i<=500000;++i)
	{
		for(int j=2*i;j<=500000;j+=i)
		{
			a[j]+=i;
		}
	}
	int T,N;
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			scanf("%d",&N);
			printf("%d\n", a[N]);
		}
	}
	return 0;
}