#include<stdio.h>
//#include<string.h>
int fun1(int a ,int b)
//作用是得到分子和分母的最大公约数化成最简模式
{
    int t;
    while(b)
    {
        t=a%b;
        a=b;
        b=t;
    }
    return a;
}
int fun(int n,int m)
{
    double sum;
    sum=n*1.0/m;
    if(sum<0.003 && sum>0.5)
        return 1;
        //printf("Fail\n");
    return 0;
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        char a[70000];
        int i,j,k,t,sum,b=0;
        scanf("%s",a);
        for(i=0;a[i]!='\0';++i)
        {
            if(a[i] == 'U')
                b+=1;
            if((a[i]) == 'S')
            {
                printf("Bingo\n");
                return 0;
            }
        }
        //k=strlen(a);
        if(fun(b,n))
            printf("Fail\n");
        else
        {
            t=fun1(b,n);
            printf("%d/%d\n",b/t,n/t);
        }
    }
    return 0;
}
