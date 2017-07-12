#include<stdio.h>
int a[20];
int vst[20];
int n,k;
int count;
int ok;
void dfs(int pos)
{
    /*if(count>=k)
    {
        if(k==count)
        {
            ok=1;
            printf("YES\n");
            for(int i=0;i<n;i++)
            {
                if(vst[i])
                    printf("%d ",a[i]);
            }
            return ;
        }
    }*/
//下边的这种写法占用时间少
    if(count>k)
        return ;
    if(k==count)
    {
        ok=1;
        printf("YES\n");
        for(int i=0;i<n;i++)
        {
            if(vst[i])
                printf("%d ",a[i]);
        }
        return ;
    }

    for(int i=pos;i<n;i++)
    {
        count+=a[i];
        vst[i]=1;
        dfs(i+1);
        count-=a[i];
        vst[i]=0;
    }
}
int main()
{
	while(~scanf("%d%d",&n,&k))
	{
		int i;
		for(i=0;i<n;++i)
		{
			scanf("%d",&a[i]);
			vst[i]=0;
		}
		ok = 0;
		count = 0;
		dfs(0);
		if(!ok)
		    printf("NO\n");
		else
			printf("\n");
	}
	return 0;
}