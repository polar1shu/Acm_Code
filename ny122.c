/*#include<stdio.h>
//题目意思是数入n  sum=1*(1+2)+2*(1+2+3)+...+n(1+2+3+...+n+(n+1))
int main()
{
    int n,zu=1;
    int i,sum,sum1,j,N;
    while(~scanf("%d",&N))
    {
   // scanf("%d",&n);
        for(i=1; i<=N; ++i)
        {
            sum=0;
            scanf("%d",&n);
            printf("%d %d ",i,n);
            for(j=1,sum1=1; j<=n; ++j)
            {
                sum1+=j+1;
                sum=sum+j*sum1;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int N,n,i,sum,j,sum1;
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        sum=0;
        scanf("%d",&n);
        printf("%d %d ",i,n);
        for(j=1,sum1=1; j<=n; j++)
        {
            sum1+=j+1;
            sum=sum+j*sum1;
        }
        printf("%d\n",sum);
    }
    return 0;

}
