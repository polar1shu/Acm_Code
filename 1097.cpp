/*#include<stdio.h>
int main()
{
	int a,b,i,j,m[10],sum;
	while(~scanf("%d%d",&a,&b))
	{
		sum=a;
		m[0]=a;
		for(i=1;i<5;++i)
		{
			sum*=a;
			m[i]=sum%10;
			sum=sum%10;
			if(sum == a)
			{
				break;
			}
		}
		sum=(b%i)-1;
		//b=i-1;
		if(a!=0 && b == 0)
			printf("1\n");
		//sum=(b%i)-1;
		else if(sum == -1)
			printf("%d\n",m[i-1]);
		//printf("%d %d\n",i,sum);
		else
		    printf("%d\n",m[sum]);
	}
	return 0;
}*/
	#include<stdio.h>
	int main()
	{
		int a,b;
		while(~scanf("%d%d",&a,&b))
		{
			int sum=1;
			a%=10;
			b%=4;
			if(b == 0)
				b=4;
			for(int i=1;i<=b;++i)
				sum*=a;
			printf("%d\n",sum%10);
		}
		return 0;
	}