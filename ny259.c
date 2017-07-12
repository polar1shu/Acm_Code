#include<stdio.h>
int main()
{
    int n;
    char a[20];
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            scanf("%s",&a);
            printf("%s\n",a);
        }
    }
    return 0;
}
