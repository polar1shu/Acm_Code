#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            int m,i,sum,t;
            scanf("%d",&m);
            sum=0;
            t=0;
            for(i=1;i<=m;++i)
            {
                t+=i;
                sum+=t;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
