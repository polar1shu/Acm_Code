#include <iostream>
#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int T;
    while(~scanf("%d",&T))
    {
        while(T--)
        {
            double a;
            scanf("%lf",&a);
            double b = ceil(a/2);
            printf("%.lf\n",b+1);
        }
    }
}