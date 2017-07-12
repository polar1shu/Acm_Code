#include<stdio.h>
int main()
{
    double n,m,sign;
    double sum,t;
    while (~scanf("%lf",&m))
    {

        while(m--)
        {
            scanf("%lf",&n);
            sum=0;
            sign = 1;
            for (int i = 1;i<=n;++i)
            {
                t=sign*1/i;
                sum+=t;
                sign=-sign;
            }
            printf("%.2lf\n",sum);
        }
    }
    return 0;
}
