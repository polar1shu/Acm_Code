#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    int i,t,k;
    while(~scanf("%s",a))
    {
        t=a[0];
        for(i=1;a[i]!='\0';++i)
        {
            if(a[i]>t)
                t=a[i];
        }
        k=strlen(a);
        for(i=0;i<k;++i)
        {
            printf("%c",a[i]);
            if(t == a[i])
                printf("(max)");
        }
        puts("");
    }
    return 0;
}
