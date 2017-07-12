#include<stdio.h>
int main()
{
    long long a,b,x,y;
    while(~scanf("%lld%lld",&a,&b))
    {
        x=a^b;
        for(y=1;y<=x;y<<=1);
            printf("%lld\n",y-1);
    }
    return 0;
}
