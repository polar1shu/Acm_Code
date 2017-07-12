#include <iostream>
using namespace std;
int main()
{
	int t;
	while(~scanf("%d",&t))
	{
		while(t--)
		{
			int a[21]={0};
		    int b[21]={0};
		    int c[21]={0};
		    int n;
		    scanf("%d",&n);
	 	    for(int i=0;i<n;++i)
	 	    {
			    scanf("%d",&a[i]);
			    if(!i)
			    	c[i]=a[i];
			    else
			    	c[i]=a[i]-a[i-1];
	 	    }
	 	    for(int i=0;i<n;++i)
	 	    {
	 	    	if(!a[i])
	 	    		b[i]=0;
	 	    	else
	 	    	{
	 	    		b[i]=1;
	 	    		for(int j=i;j>=0;--j)
	 	    		{
	 	    			if(c[j])
	 	    			{
	 	    				c[j]--;
	 	    				break;
	 	    			}
	 	    			else
	 	    			{
	 	    				b[i]++;
	 	    			}
	 	    		}
	 	    	}
	 	    }
	 	    for(int i=0;i<n;++i)
	 	    	printf("%d ",b[i]);
	 	    printf("\n");
	    }
	}
}