#include<stdio.h>
#define PI 3.1415926
#include<math.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    while(n--)
    {
        double m,a,b;
        scanf("%lf",&m);
        a=sqrt(3)*m/3;
        b=PI*a*a;
        printf("%.2lf\n",b);//等边三角形面积为pi＊边长＊边长/3
    }
    return 0;
}
