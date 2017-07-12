#include<stdio.h>
int main()
{
    int k1,k2,i,j;
    char a[55];
    while(~scanf("%s%d%d",a,&k1,&k2))
    {
        for(i=0;a[i]!='\0';++i)
        {
            for(j=0;j<26;++j)
            {
                if((k1*j+k2)%26 == a[i]-'A')
                {
                    a[i]=j+'A';
                    break;
                }
            }
        }
        puts(a);
    }
    return 0;
}
