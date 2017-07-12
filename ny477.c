#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            double a,b,c;
            scanf("%lf%lf%lf",&a,&b,&c);
            if(a+b-c>=-0.0001 && a+b-c<=0.0001)//1e-6近似于0开头要用#include<math.h>
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
