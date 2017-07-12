#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        if(n>=7)
            printf("3 5 7\n");
        else
            printf("No triple\n");
    }
    return 0;
}
