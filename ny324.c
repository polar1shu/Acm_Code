#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            int m,sum,i;
            sum=1;
            scanf("%d",&m);
            for(i=0; i<m; ++i)
                sum=(sum+1)*2;
            printf("%d\n",sum);
        }
    }
    return 0;
}
