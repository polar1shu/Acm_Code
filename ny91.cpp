#include<stdio.h>
int a[11];
int main()
{
	int m,sum;
	sum=1;
	for(int i=1;i<10;++i)
	{
		sum*=i;
		a[i]+=sum;
		//printf("%d ",a[i]);
	}
	while(~scanf("%d",&m))
	{
		while(m--)
		{
			int n;
		    scanf("%d",&n);
		    int flag=1;
		    for(int i=9;i>0;--i)
		    {
		    	if(n>=a[i])
		    	{
		    		n-=a[i];
		    	}
		    	/*if(n == 0)
		    	{
		    		printf("Yes\n");
		    		flag=0;
		    		break;
		    	}*/
		    }
		    //if(flag == 1)
		    if(n == 0)
		    	printf("Yes\n");
		    else
		        printf("No\n");

		}
	}
	return 0;
}