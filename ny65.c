#include<stdio.h>
int main()
{
    int a;
    while(~scanf("%d",&a))
    {
        while(a--)
        {
            int n,i,sum,t,m;
            scanf("%d",&n);
            sum=0;
            t=1;
            for(i=1; i<=n; ++i)
            {
                m=i;
                if(m%2 != 0)
                t*=m;
                if(m%2 == 0)
                t*=1;
                sum+=t;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
