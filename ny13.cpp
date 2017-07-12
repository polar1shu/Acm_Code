#include<stdio.h>
int a[20]; 
int main()
{
    int m,i,n;
    a[0]=a[1]=1;
    for(i=2; i<=20; ++i)
            a[i]=a[i-1]+a[i-2];
    while(~scanf("%d",&m))
    {
        a[0]=a[1]=1;
        while(m--)
        {
            scanf("%d",&n);
            printf("%d\n",a[n-1]);
        }
    }
    return 0;
}
