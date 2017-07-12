回去用倒做
//#include<stdio.h>
int main()
{
    int n,i,t,sum;
    while(~scanf("%d",&n))
    {
        t=0;
        sum = 1;
        for(i=1;i<n;i++)
        {
            t=2*(sum+1);
            sum=t;
        }
        printf("%d\n",t);
    }
    return 0;
}
