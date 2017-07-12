#include<stdio.h>
int main()
{
    int n,m,i,t;
    int a[200];
    while(~scanf("%d%d",&n,&m))
    {
        if (m==0 && n==0)
            continue;
        a[0]=m;
        for (i=1;i<=n;++i)
            scanf("%d",&a[i]);

        for(i=0;i<n;++i)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }

        for(i=0;i<n;++i)
            printf("%d ",a[i]);
            if(i == n)
                printf("%d\n",a[i]);
    }
    return 0;
}
