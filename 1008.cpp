#include<stdio.h>
int main()
{
	int n;
	while(~scanf("%d",&n) && n)
	{
			int sum,a[1000],i,j;
			for(i=0;i<n;++i)
				scanf("%d",&a[i]);
			sum=a[0]*6+5;
			for(i=1;i<n;++i)
			{
				if(a[i]>a[i-1])
					sum+=6*(a[i]-a[i-1])+5;
				else if((a[i]<a[i-1]))
					sum+=4*(a[i-1]-a[i])+5;
				else
					sum+=5;
			}
			printf("%d\n",sum);
	}
	return 0;
}