#include<stdio.h>
int main()
{
    int m;
    while(~scanf("%d",&m))
    {
        while(m--)
        {
            int a;
            scanf("%d",&a);
             if(a>100000)
                printf("%d\n",a%100000);
             else if(a>10000)
                printf("%d\n",a%10000);
             else if(a>1000)
                printf("%d\n",a%1000);
             else if(a>100)
                printf("%d\n",a%100);
             else
                printf("%d\n",a%10);
        }
    }
    return 0;
}
/*#include<stdio.h>
int main()
{
    int m;
    while(~scanf("%d",&m))
    {
        while(m--)
        {
            char a[20];
            int i,k,j,flag;
            scanf("%s",&a);
            k=strlen(a[20]);
            flag=0;
            for(i=k-2; i>=0; --i)
            {
                if(a[i]!=0)
                {
                    flag=1;
                    j=i;
                    break;
                }
            }
            if(flag == 0)
                printf("0\n");
            else
                for(i=0; i<=j; ++i)
                    printf("%c\n",a[i]);
        }
    }
    return 0;
}*/


