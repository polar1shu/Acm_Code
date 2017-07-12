#include<stdio.h>
//N!的质因数2 等于 N/2+N/4+N/8+N/16....
int main()
{
    int n,sum;
    while(~scanf("%d",&n))
    {
        sum=0;
        for(int i=2;i<=n;i*=2)
            sum+=n/i;
        printf("%d\n",++sum);
    }
    return 0;
}
