#include<stdio.h>
#define PI 3.1415926
int main()
{
    double n;
    while(~scanf("%lf",&n))
    {
         printf("%.lf\n",n*n*n*PI*4/3);
    }
    return 0;
}
