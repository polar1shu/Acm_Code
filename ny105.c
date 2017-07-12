#include<stdio.h>
int main()
{
    int m;
    while(~scanf("%d",&m))
    {
        while(m--)
        {
            char a[1000001];
            int i,sum=0;
            scanf("%s",a);
            for(i=0;a[i]!='\0';++i)
                sum=(sum+a[i]-'0')%9;
            printf("%d\n",sum);
        }
    }
    return 0;
}//和205一样的原理
/*#include<stdio.h>
int main()
{
    int m;
    while(~scanf("%d",&m))
    {
        while(m--)
        {
            char a[1000001];
            int i,sum=0;
            scanf("%s",a);
            for(i=0;a[i]!='\0';++i)
            {
                sum=(a[i]-'0')+sum*10;
                sum%=9;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}*/

