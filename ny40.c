#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int a,b,i,max,k;
        while(n--)
        {
            scanf("%d%d",&a,&b);
            max=a>b?a:b;
            for(i=1; i<=max; ++i)
            {
                if(a%i == 0 && b%i == 0)
                    k=i;
            }
            printf("%d %d\n",k,(a*b)/k);
        }
    }
    return 0;
}
/*牵扯高中数学
#include<stdio.h>
int main()
{
    unsigned int u,v,r,s,i,d;
    scanf("%u",&s);
    for(i=1; i<=s; i++)
    {
        scanf("%u%u",&u,&v);
        d=u*v;
        while(v!=0)
        {
            r=u%v;
            u=v;
            v=r;
        }
        printf("%u %u\n",u,d/u);
    }
    return 0;
}
*/
