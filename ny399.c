#include<stdio.h>
int main()
{
    long long int n,b;
    while(~scanf("%lld%lld",&n,&b))
    {
        printf("%ld\n",n/b);
    }
    return 0;
}
