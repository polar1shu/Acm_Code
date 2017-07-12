#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            char a[1000];
            int i,sum=0;
            scanf("%s",a);
            for(i=0;a[i]!='\0';++i)
            {
                if(a[i]>='0' && a[i]<='9')
                    sum+=1;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
