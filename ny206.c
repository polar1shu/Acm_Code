#include<stdio.h>
int main()
{
    long long int a,b;
    while(~scanf("%lld%lld",&a,&b))
    {
        printf("%lld\n",a*(a+1)*b*(b+1)/4);
    }
    return 0;
}
