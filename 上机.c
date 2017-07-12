#include<stdio.h>
int main()
{
    int n,m,num,sum;
    while(scanf("%d",&n)!=EOF)
    {
        while(n--)
        {
            scanf("%d",&m);
                sum=0;
                while(m--)
                {
                    scanf("%d",&num);
                    sum=sum+num;
                }
                printf("%d\n",sum);
            if(n>0)
                {
                    printf("\n");
                }
        }
    }
    return 0;
}
