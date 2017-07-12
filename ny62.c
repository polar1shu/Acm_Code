#include<stdio.h>
#include<math.h>
int isprime(int n)
{
    int i;
    if(n<=1)
        return 0;
    for(i=2;i<=sqrt(n);++i)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            int i,maxn,minn,t;
            char a[101];
            int b[30]={0};
            maxn=0;
            minn=30;
            scanf("%s",a);
            for(i=0;a[i]!='\0';++i)
                b[a[i]-'a']++;
            for(i=0;i<26;++i)
            {
                if(b[i]>maxn)
                    maxn=b[i];
                if(b[i]<minn && b[i]!=0)
                    minn=b[i];
            }
            t=maxn-minn;
            if(isprime(t))
            {
                 printf("Lucky Word\n");
                 printf("%d\n",t);
            }
            else
            {
                printf("No Answer\n");
                printf("0\n");
            }

        }
    }
    return 0;
}


