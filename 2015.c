#include<stdio.h>
int main()
{
    int m,n,i,t,x,aver;
    while(~scanf("%d%d",&n,&m))
    {
        if(n>100)
            printf("\n");
        for(i=1;i<=n-m;i+=m)
        {
            printf("%d ",2*i+m-1);
        }
        printf("%d\n",n+i);
    }
    return 0;
}

