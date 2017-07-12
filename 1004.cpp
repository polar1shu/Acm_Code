#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,max,t,b[1000];
	char a[1000][20];
	while(~scanf("%d",&n) && n)
	{
		max=0;
		for(i=0;i<n;++i)
		{
			scanf("%s",a[i]);
			b[i]=0;//必须重新初始化，不然这个值是是最近一次使用后的值
		}
		for(i=0;i<n;++i)
		{
			for(j=0;j<n;++j)
			{
				 if(strcmp(a[i],a[j]) == 0)
					b[i]++;
			}
		}
		t=0;
		for(i=0;i<n;++i)
		{
			if(max<b[i])
			{
				max=b[i];
				t=i;
			}

		}
		//printf("%d\n",b[t]);
		printf("%s\n",a[t]);
	}
	return 0;
}