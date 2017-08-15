#include <cstdio>
using namespace std;
int CaculateWeekDay(int y, int m, int d)
{
    if(m==1||m==2)
    {
        m+=12;
        y--;
    }
    int Week=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
    return Week;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int d, m, y;
        char str[100];
        scanf("%d-%d-%d",&y,&m,&d);
        int flag=0;
        if(y%4==0&&y%100!=0||y%400==0)
            flag=1;
        int a=CaculateWeekDay(y,m,d);
        //printf("%d %d %d %d\n",y,m,d,a);
        for(int i=y+1; i<100000; i++)
        {
            int aa;
            if(flag&&m==2&&d==29)
            {
                if(i%4==0&&i%100!=0||i%400==0)
                    aa=CaculateWeekDay(i,m,d);
            }
            else
                aa=CaculateWeekDay(i,m,d);
                //printf("%d %d %d %d\n",i,m,d,aa);

            if(aa==a)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
}