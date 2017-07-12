#include<stdio.h>
int main()
{
    char a[3],b[6];
    int i=0,j,k,m,n;
    while(~scanf("%s%s",a,b))
    {
        i++;
        if(a[1] == '#')
        {
            a[0]=(a[0]-'A'+1)%7+'A';
            a[1]='b';
        }
        else if(a[1] == 'b')
        {
            a[0]=(a[0]-'A'+6)%7+'A';
            a[1]='#';
        }
        else
        {
            printf("Case %d: UNIQUE\n",i);
            continue;
        }

        printf("Case %d: %s %s\n",i,a,b);
    }
    return 0;
}
