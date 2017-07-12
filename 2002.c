#include<stdio.h>
#define PI 3.1415927
int main()
{
    double r,V;
    while (scanf("%lf",&r)!=EOF)
    {
        V=(4*PI*r*r*r)/3;
        printf("%.3lf\n",V);
    }

}
