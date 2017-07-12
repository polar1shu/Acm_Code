#include<stdio.h>
int fun(int m)
{
    int i;
    if(m==1)
        return 0;
    for (i=2; i<m; ++i)
    {
        if(m%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n,x,y,t;
    double sum;
    while (~scanf("%d%d",&x,&y))
    {
        sum=0;
        n = 0;
        if((x == 0)&&(y==0))
            return 0;
        if(x>y)
        {
            t=x;
            x=y;
            y=t;
        }
        for (int i=x; i<=y; ++i)
        {
            sum=i*i+i+41;
            if(fun (sum))
                n+=1;
        }
        if(n==y-x+1)
            printf("OK\n");
        else
            printf("Sorry\n");
    }
    return 0;
}
