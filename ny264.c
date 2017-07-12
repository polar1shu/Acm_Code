#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int i,j,t,l;
        char a[101];
        while(n--)
        {
            scanf("%s",a);
            l=strlen(a);
            while(l)
            {
                if(l%2 != 0)
                {
                    printf("%d\n",l);
                    break;
                }
                for(i=0;i<l;++i)
                {
                    if(a[i]!=a[l-i-1])
                    {
                        printf("%d\n",l);
                        l=0;
                    }
                }
                l/=2;
            }
        }
    }
    return 0;
}
