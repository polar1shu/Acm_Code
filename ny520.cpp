#include<stdio.h>
//找规律题目  
int a[1000005];
int main()
{
	a[1]=0;
	int cnt;
	int i,j;
	cnt=0;
	for(i=2;i<=1000000;++i)
	{
		if(!a[i])
		{
			a[i]=++cnt;//定义每一个数都是素数
		}
		for(j=2;i*j<=1000000;++j)
		{
			a[i*j]=a[i];// 找到的规律就是找到一个数等于i*j
			//得出最大的素因数是i快速归类
			if(i%j == 0)
				break;
		}
	}
	int n;
	while(~scanf("%d",&n))
	{
		printf("%d\n",a[n]);
	}
	return 0;
}