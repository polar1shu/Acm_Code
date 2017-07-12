#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            double h1,t,h2;
            scanf("%lf%lf%lf",&h1,&t,&h2);
            printf("%.1lf\n",t/log(h1/h2));
        }
    }
    return 0;
}//公式。。。