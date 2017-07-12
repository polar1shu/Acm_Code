#include<stdio.h>
int main()
{
    long long int m;
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            scanf("%lld",&m);
            printf("%.lld471\n",--m);
        }
    }
    return 0;
}
