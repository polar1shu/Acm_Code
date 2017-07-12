#include<stdio.h>

int main()
{
    int t;
    while(~scanf("%d",&t))
    {
        while(t--)
        {
            int n,i;
            char a[]={'O','O','T','T','F','F','S','S','E','N','T'};
            scanf("%d",&n);
            while(n)
            {
                i=n%10;
            printf("%c",a[i]);
            n/=10;
            }
            puts("");
        }

    }
    return 0;
}
/*“¿æ…ac
#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    while(~scanf("%d",&t))
    {
        while(t--)
        {
            char a[11];
            int i,m;
            scanf("%s",a);
            m=strlen(a);
            for(i=m-1;i>=0;--i)
            {
                if(a[i] == '0' || a[i] == '1')
                    printf("O");
                if(a[i] == '4' || a[i] == '5')
                    printf("F");
                if(a[i] == '2' || a[i] == '3' || a[i] == '10')
                    printf("T");
                if(a[i] == '6' || a[i] == '7')
                    printf("S");
                if(a[i] == '8')
                    printf("E");
                if(a[i] == '9')
                    printf("N");
            }
            puts("");
        }
    }
    return 0;
}

