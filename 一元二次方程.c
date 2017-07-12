#include<stdio.h>
#include<math.h>
void fun1(double a,double b,double disc)
{
    double x1=(-b+sqrt(disc))/(2*a);
    double x2=(-b-sqrt(disc))/(2*a);
    printf("x1=%.2lf,x2=%.2lf\n",x1,x2);
}
void fun2(double a,double b)
{
    double x=-b/(2*a);
    printf("x1=%.2lf,x2=%.2lf\n",x);
}
void fun3()
{
    printf("无解\n");
}
int main()
{
    double a,b,c,disc;
    scanf("%lf%lf%lf",&a,&b,&c);
    disc = b*b-4*a*c;
    if(disc>0)
        fun1(a,b,disc);
    else if(disc =0)
        fun2(a,b);
    else
        fun3();
        return 0;
}
