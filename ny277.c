#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            int m,i;
            char a[6],b[6];
            scanf("%d",&m);
            scanf("%s",b);
            strcpy(a,b);
            for(i=1;i<m;++i)
            {
                scanf("%s",b);
                if(strcmp(a,b)>0)
                    strcpy(a,b);
            }
            printf("%s\n",a);
        }
    }
    return 0;
}
