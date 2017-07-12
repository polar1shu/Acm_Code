#include<stdio.h>
int a[20]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
//int b[20]= {0,31,29,31,30,31,30,31,31,30,31,30,31};
int fun(int y)
{
    if((y%4 == 0 && y%100 )||(y%400 == 0))
        return 1;
    else
        return 0;
}
int main()
{
    int year,month,day;
    int n;
    int sum;
    while (~scanf("%d",&n))
    {
        while(n--)
        {
            scanf("%d%d%d",&year,&month,&day);
        if (fun(year))
            a[2]=29;
        else
            a[2]=28;
        sum = 0;
        for (int i = 1; i<month; ++i)
        {
            if(fun(year))
                sum+=a[i];
            else
                sum+=a[i];

        }
        sum+=day;
        printf("%d\n",sum);
        }




    }
    return 0;
}
