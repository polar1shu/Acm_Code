#include<stdio.h>
int main()
{
    int n,a[60],i;
    while(~scanf("%d",&n))
    {
        if(n==0)
            return 0;
        a[1]=1;
        a[2]=2;
        a[3]=3;
        for(i=4; i<=n; ++i)
            a[i]=a[i-3]+a[i-1];
        printf("%d\n",a[n]);

    }
    return 0;

}
