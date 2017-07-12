#include<stdio.h>
int main()
{
    int n,a[200],sum,i,z,b,c,d,f,g;
    while(~scanf("%d",&n))
    {
        if(n==0)
            return 0;
        sum=0;
        for(i=0;i<n;++i)
            scanf("%d",&a[i]);
        for(i=0;i<n;++i)
        {
            z=a[i]/100;
            b=a[i]%100/50;
            c=a[i]%100%50/10;
            d=a[i]%100%50%10/5;
            f=a[i]%100%50%10%5/2;
            g=a[i]%100%50%10%5%2;
            sum+=z+b+c+d+f+g;
        }
        printf("%d\n",sum);
    }
    return 0;
}
