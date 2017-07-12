#include<stdio.h>
int main()
{
    int t;
    //while(~scanf("%d",&t))
    scanf("%d",&t);
    //getchar();
    {
        while(t--)
        {
            char a,b;
            scanf("\n%c %c",&a,&b);
            //getchar();
            if(a>b)
            {
                printf("%c<%c\n",a,b);
            }

            if(a == b)
            {
                printf("%c=%c\n",a,b);
            }

            if(a<b)
            {
                printf("%c>%c\n",a,b);
            }

        }
    }
    return 0;
}

