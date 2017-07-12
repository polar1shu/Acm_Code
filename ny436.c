#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int i;
        long long int sum;
        //sum=0;
        sum=(n+1)*(abs(n-1)+1)/2;//公式：前n项和
        /*if(n>0)
        {
            for(i=1;i<=n;++i)
                sum+=i;
        }
        else
        {
            for(i=1;i>=n;--i)
                sum+=i;
        }*/

        printf("%lld\n",sum);
    }
    return 0;
}
