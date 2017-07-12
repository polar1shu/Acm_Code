#include<stdio.h>
int main()
{
    int a[1011]={0};
    int i,j,k,n;
    while(~scanf("%d%d",&n,&k))
    {
        for(i=1;i<=k;++i)
            {
                for(j=1;j<=n;++j)
                {
                    if(j%i == 0)
                        a[j]=!a[j];
                }
            }
        for(i=1;i<=n;++i)
        {
            if(a[i] == 1)
                printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
