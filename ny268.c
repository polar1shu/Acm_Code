#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            char a[1010],b[1010];
            int i,flag;
            scanf("%s",a);
            for(i=0;a[i]!='\0';++i)
            {
                if(a[i] == 'R')
                    printf("%c",a[i]);
            }
            for(i=0;a[i]!='\0';++i)
            {
                if(a[i] == 'W')
                    printf("%c",a[i]);
            }
            for(i=0;a[i]!='\0';++i)
            {
                if(a[i] == 'B')
                    printf("%c",a[i]);
            }
            puts("");
        }
    }
    return 0;
}
