#include<stdio.h>
#include<string.h>
int main()
{
    char a[5];
    char b[15][5]={"I","II","III","IV","V","VI","VII","VIII","IX","X","XI","XII"};
    int i,n=0;
    while(~scanf("%s",a))
    {
        for(i=0;i<12;++i)
        {
            if(strcmp(a,b[i]) == 0)
            {
                printf("Case %d: %d\n",++n,i+1);
                break;
            }
        }
    }
    return 0;
}
