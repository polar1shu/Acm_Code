#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2,l,result;
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            while (scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2)!=EOF)
            {
                l=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
                result=sqrt(l);
                printf("%.2lf\n",result);
            }
        }
    }
    return 0;
}
