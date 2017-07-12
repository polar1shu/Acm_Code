#include<stdio.h>
int main()
{
    int n,k;
    while(~scanf("%d%d",&n,&k))
    {
            if(n<k)
                printf("2\n");
            else
                printf("%d\n",(2*n+k-1)/k);
    }
    return 0;
}
