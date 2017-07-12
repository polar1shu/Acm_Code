#include<stdio.h>
int main()
{
    int n,m,sum,i,k;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            sum=0;
            scanf("%d",&m);
            for(i=m;i>0;i/=2)
            {
                k=i;
                if(k%2 == 1)
                    sum+=1;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
