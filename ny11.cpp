#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            int m,i;
            scanf("%d",&m);
            for(i=1;i<m;i+=2)
                printf("%d ",i);
            printf("\n");
            for(i=2;i<=m;i+=2)
                printf("%d ",i);
            printf("\n");
        }
    }
    return 0;
}
