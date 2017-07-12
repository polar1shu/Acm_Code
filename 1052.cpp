#include<stdio.h>
int a[1001],b[1001];
int main()
{
	int n;
	while(~scanf("%d",&n) && n)
	{
		for(int i=0;i<n;++i)
			scanf("%d",&a[i]);
		for(int i=0;i<n;++i)
			scanf("%d",&b[i]);
		for(int i=0;i<n;++i)
			for(int j=i;j<n;++j)
			{
				if(a[i]>a[j])
				{
					int t1=a[i];
					a[i]=a[j];
					a[j]=t1;
				}
				if(b[i]>b[j])
				{
					int t2=b[i];
					b[i]=b[j];
					b[j]=t2;
				}
			}
		/*for(int i=0;i<n;++i)
			printf("%d ",a[i]);
		printf("\n");*/
		
		int awin,bwin,afaest,bfaest;
		awin=bwin=0;
		afaest=bfaest=n-1;
		int sum=0;
		for(int i=0;i<n;++i)
		{
			if(a[awin]>b[bwin])
			{
				awin++;
				bwin++;
				sum+=200;	
			}
			else if(a[awin]<b[bwin])
			{
				bfaest--;
				awin++;
				sum-=200;
			}
			else 
			{
				if(a[afaest]>b[bfaest])
				{
					afaest--;
				    bfaest--;
				    sum+=200;
				}
				else if(a[afaest]<b[bfaest])
			    {
				    awin++;
				    bfaest--;
				    sum-=200;
			    }
			    else //if(a[awin]<b[bfaest])
			    {
			    	if(a[awin]<b[bfaest]){
			    	awin++;
			    	bfaest--;
			    	sum-=200;}

			    }
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}