#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            double m,x,y,z;
            scanf("%lf%lf%lf%lf",&m,&x,&y,&z);
            printf("%.2lf\n",((m*x)/(y-x))*z);
        }
    }
    return 0;
}
