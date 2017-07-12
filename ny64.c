#include<stdio.h>
int main()
{
    int a;
    while(~scanf("%d",&a))
    {
        while(a--)
        {
            int n,m,i,j,flag;
            scanf("%d%d",&n,&m);
            flag=0;
            for(i=0; i<=n; ++i)
            {
                for(j=0; j<=n; ++j)
                {
                    if(i+j == n && 2*i + 4*j == m)
                    {
                        printf("%d %d\n",i,j);
                        flag=1;
                        break;
                    }
                }
            }
            if(flag == 0)
                printf("No answer\n");
        }
    }
    return 0;
}
