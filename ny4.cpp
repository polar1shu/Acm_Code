#include<stdio.h>
int main()
{
    int n;
    /*while(~*/scanf("%d\n",&n);//)
    {
        while(n--)
        {
            char a,b,c,t;
            scanf("%c%c%c\n",&a,&b,&c);
            //getchar();
            if(a>b)
            {
                t=a;
                a=b;
                b=t;
            }
            if(a>c)
            {
                t=a;
                a=c;
                c=t;
            }
            if(b>c)
            {
                t=b;
                b=c;
                c=t;
            }
            printf("%c %c %c\n",a,b,c);
        }
    }
    return 0;
}
