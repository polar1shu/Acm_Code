#include<stdio.h>
int n,r;
int a[15],v[15];
/*int pd(int a[])
{
	for(int x=1;x<=r;++x)
	    	for(int j=x;j<=r;++j)
	    	{
	    		if(a[x]<a[j])
	    		{
	    			return 0;
	    			break;
	    		}
	    	}
	    	return 1;
}*/
void dfs(int cur)
{
	int i,k;
	if(cur == r+1)
	{
	    /*int flag=1;
	    for(int x=1;x<=r;++x)
	    	for(int j=x;j<=r;++j)
	    	{
	    		if(a[x]<a[j])
	    		{
	    			flag=0;
	    			break;
	    		}
	    	}
	    //if(pd(a))
	    if(flag)*/
	    //{
		    for(k=1;k<=r;++k)
		    {
			    printf("%d",a[k]);
		    }
		    printf("\n");
		    return ;
	    //}
	}
	for(i = n;i>0;--i)
	{
		if(v[i] == 0 && i<a[cur-1])
		{
			a[cur]=i;
			v[i]=1;
			dfs(cur+1);
			v[i]=0;
		}
	}
}
int main()
{
	while(~scanf("%d%d",&n,&r))
	{
		a[0]=12;
		dfs(1);
	}
	return 0;
}