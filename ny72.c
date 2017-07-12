#include<stdio.h>
int main()
{
    int i;
    double a[15],sum=0;
    for(i=0;i<12;++i)
    {
        scanf("%lf",&a[i]);
        sum+=a[i];
    }
    printf("%.2lf\n",sum/12);
    return 0;
}
