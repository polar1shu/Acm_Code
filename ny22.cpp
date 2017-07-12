 #include<stdio.h>
int isprime(int n)
{
    int i;
    if(n == 1)
        return 0;
    for(i=2; i<n; ++i)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int m;int n,a[1000],i,sum;
    while(~scanf("%d",&m))
    {

        while(m--)
        {
            sum=0;
            scanf("%d",&n);
            for(i=0; i<n; ++i)
            {
                scanf("%d",&a[i]);
                if(isprime(a[i]))
                    sum+=a[i];
            }
            printf("%d\n",sum);
        }

    }
    return 0;
}
