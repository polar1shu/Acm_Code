#include<stdio.h>
int main()
{
    int T;
    while(~scanf("%d",&T))
    {
        while(T--)
        {
            int n,i,j,m=0;
            scanf("%d",&n);
            for(i=1;(i+1)*(i+1)<=n+1;++i)
        //题目的意思是n=i*j+i+j(0<i<=j)变形n+1=(i+1)*(j+1)
            {
                if((n+1)%(i+1) == 0 )//只要能整除何必管（j+1）
                    m++;
            }
            printf("%d\n",m);
        }
    }
    return 0;
}
