#include<stdio.h>
int main()
{
    int i,n,j;
    char a[50];
    while(~scanf("%s%d",a,&n))
    {
        for(i=0;a[i]!='\0';++i)
        {
            for(j=0;j<26;++j)
            {
                if(j*n%26 == a[i]-'A')
                {
                    a[i]=j+'A';
                    break;
                }
            }
        }
        printf("%s\n",a);
    }
    return 0;
}
