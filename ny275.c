#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int a[100],i=0,t,m;
        if(n == 0)
            printf("0");
        while(n)
        {
            a[i++]=n%2;
            n/=2;
        }
        for(i=i-1;i>=0;--i)
            printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}
