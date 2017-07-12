#include<stdio.h>
int main()
{
    int i,n,sum;
    while(~scanf("%d",&n))
    {
        sum=0;
        for(i=1;i<=n;++i)
            sum+=i;
        printf("%d\n\n",sum);
    }
    return 0;
}
