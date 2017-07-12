#include<stdio.h>
//母函数  杭电1028一样的
int main()
{
	int n;
	int a[121][121],b[121],i,j;
	for(i=0;i<121;++i)
	{
		a[i][0]=1;
		a[1][i]=1;
		a[0][i]=1;
		a[i][1]=1;
	}
	for(i=2;i<121;++i)
	{
		for(j=2;j<121;++j)
		{
			if(i>=j)
				a[i][j]=a[i][j-1]+a[i-j][j];
			else
				a[i][j]=a[i][i];
		}
	}
	int T;
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			scanf("%d",&n);
		    printf("%d\n",a[n][n]);
		}
	}
	return 0;
}