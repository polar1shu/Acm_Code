#include<stdio.h>
#include<math.h>
double fun(double n)
{
    double sum;
    if(n>=0 &&n<=2)
        sum=4.0/3*pow(n,1.5)-0.4*pow(n,2.5);
    else if(n>2 && n<=5)
        sum=fun(2)+0.25*pow(n,4)-2.0/3*pow(n,3)-0.5*pow(n,2)+2*n-6+16.0/3;
    else
        sum=fun(5)+72*n-8.0/15*pow(n-5,15.0/8)-72*5;
        return sum;
}
int main()
{
    double a,b;
    int n;
    while(~scanf("%d",&n))
    //scanf("%d",&n);
    {
        while(n--)
        {
            scanf("%lf%lf",&a,&b);
            printf("%d\n",(int)(fun(b)-fun(a)+0.5));//这个四舍五入真奇怪
        }
    }
    return 0;
}
