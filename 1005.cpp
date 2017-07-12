#include<stdio.h>
//快速幂取模
//mod代表的是取模运算
int f[100];
int main()
{
	long long int a,b,n;
	while(~scanf("%lld%lld%lld",&a,&b,&n) && a && b && n)
	{
		f[1]=f[2]=1;
		for(int i=3;i<=49;++i)
		{
			f[i]=(a*f[i-1]+b*f[i-2])%7;
		}
		printf("%d\n",f[n%49]);
	}
	return 0;
}