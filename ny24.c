#include<stdio.h>
#include<math.h>
int isprime(int n)
{
    int i;
    if(n <= 1)
        return 0;
    for(i=2;i<=sqrt(n);++i)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}
/*int juli(int n)
{
    int i,shu1,shu2,j;
    for(i=n-1;;--i)
    {
        for(j=2;j<i;++j)
        {
            if(i%j == 0)
            {
                 shu1=i;
                 break;
            }

        }
    }
    for(i=n+1;;++i)
    {
        for(j=2;j<i;++j)
        {
            if(i%j == 0)
            {
                shu2=i;
                break;
            }
        }
    }
    if(shu1>shu2)
        return (shu2);
    else
        return (shu1);
}*/

int main()
{
    int n;
    //scanf("%d",&n);
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            int m,i;
            scanf("%d",&m);
            if(isprime(m))
                printf("%d 0\n",m);
            else
            {
                for(i=1;;++i)
                {
                    if(isprime(m-i))
                    {
                        printf("%d %d\n",m-i,i);
                        break;
                    }
                    else if(isprime(m+i))
                    {
                        printf("%d %d\n",m+i,i);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
