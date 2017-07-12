#include<stdio.h>
int a[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
int runnian(int n)
{
    if((n%4 == 0 && n%100 != 0) || (n%400 == 0))
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            int year,month,day,sum,i;
            sum=0;
            scanf("%d%d%d",&year,&month,&day);
            if(runnian(year))
                a[1]=29;
            else
                a[1]=28;
            for(i=0; i<month-1; ++i)
                sum+=a[i];
            printf("%d\n",sum+day);
        }
    }
    return 0;
}
