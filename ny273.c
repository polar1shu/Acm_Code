#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            char a[201];
            int i,k,sum;
            sum=0;
            scanf("%s",a);
            k=strlen(a);
            for(i=0;i<k;++i)
            {
                if(a[i]>='a' && a[i]<='z')
                    sum+=1;
            }
            sum=sum%26;
            if(sum == 0)
                printf("z\n");
            else
                printf("%c\n",sum+96);
        }
    }
    return 0;
}
