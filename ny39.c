#include<stdio.h>
int main()
{
    int a,b,c,n;
    while(~scanf("%d",&n))
    {
        if(n == 0)
            return 0;
        a=n%10;
        b=n%100/10;
        c=n/100;
        if(n == a*a*a+b*b*b+c*c*c)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
