#include<stdio.h>
int fun(int n)
{
    int t;
    t=0;
    while(n)
    {
        t*=10;
        t+=n%10;
        n/=10;
    }
    return t;
}
int main()
{
    int a,b;
    while(~scanf("%d%d",&a,&b) && a && b)
    {
        printf("%d\n",fun(a)+fun(b));
    }
    return 0;
}
