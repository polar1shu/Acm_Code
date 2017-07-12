#include<stdio.h>
#include<string.h>
int a[100005];
int main()
{
    int T;
    while(~scanf("%d",&T))
    {
        while(T--)
        {
            int n;
            int t=1;
            memset(a,0,sizeof(a));
            scanf("%d",&n);
            if(n<0)
                printf("-0.");
            else
                printf("0.");
            while(a[t]!=1 && t != 0)
            {
                a[t]=1;
                t*=10;
                printf("%d",t/n);
                t%=n;
            }
            puts("");
        }
    }
    return 0;
}