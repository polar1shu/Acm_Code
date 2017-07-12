q#include<stdio.h>
int a[201][202];
int main()
{
	a[1][200]=1;
	a[2][200]=2;
	for(int i=3;i<201;++i)
	{
		for(int j=201;j>0;--j)
		{
			a[i][j]=a[i][j]+a[i-1][j]+a[i-2][j];
			if(a[i][j]>9)
			{
				a[i][j-1]=a[i][j]/10;
				a[i][j]=a[i][j]%10;
			}
		}
	}
	int n;
	while(~scanf("%d",&n))
	{
		int j;
		for(j=0;j<202;)
		{
			if(a[n][j] == 0)
				++j;
			else
				break;
		}
		for(;j<201;++j)
		    printf("%d",a[n][j]);
		puts("");
	}
	return 0;
}