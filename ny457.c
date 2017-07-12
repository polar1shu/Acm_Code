#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            char a[101];
            int i,k;
            scanf("%s",a);
            k=strlen(a);
            for(i=0;i<k;++i)
            {
                if(a[i]>='a' && a[i]<='z')
                    a[i]-=32;
                else
                    a[i]+=32;
            }
            printf("%s\n",a);
        }
    }
    return 0;
}
