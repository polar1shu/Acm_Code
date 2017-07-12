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
    //while(~scanf("%d",&n))
    scanf("%d",&n);
    {
        while(n--)
        {
            int m,i;
            scanf("%d",&m);
            if(isprime(m))
                printf("%d\n",m);
            else
            {
                for(i=1;;++i)
                {
                    if(isprime(m+i))
                    {
                        printf("%d\n",m+i);
                        break;
                    }
                    else if(isprime(m-i))
                    {
                        printf("%d\n",m-i);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
