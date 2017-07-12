#include<stdio.h>
int main()
{
	int n,u,d,i,sum;
	while(~scanf("%d%d%d",&n,&u,&d) && n && u && d)
	{
		sum=1;
		for(i=u;i<=n;i+=u)
		{
			if(i>=n){
				break;
			}
			i-=d;
			sum+=2;
		}
		printf("%d\n",sum);
	}
	return 0;
}