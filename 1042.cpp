#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		if(n<0)
			continue;
		int i,j,m;
		//memset(a,0,sizeof(a));
		int a[10000]={0};
		//memset(a,0,sizeof(a));
		m=0;
		a[0]=1;
		for(i=1;i<=n;++i)
			for(j=0;j<=m;++j)
			{
				a[j]=a[j]*i;
				if(j>0 && a[j-1]>=10000)
				{
					a[j]=a[j]+a[j-1]/10000;//
					a[j-1]=a[j-1]%10000;
				}
				if(a[m]>=10000)
					m++;
				//printf("%d %d %d\n",m,j,a[j]);
			}
		printf("%d",a[m]);
		for(i=m-1;i>=0;--i)
			printf("%04d",a[i]);
		puts("");
	}
	return 0;
}