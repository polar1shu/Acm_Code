#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    while(~scanf("%s",a))
    {
        int i,k;
        k=strlen(a);
        for(i=0;i<k;++i)
        {
            if(a[i] == 'y' && a[i+1] == 'o' &&  a[i+2] == 'u')
            {
                a[i]='w';
                a[i+1]='e';
                for(int j=i+2;j<k;++j)
                     a[j]=a[j+1];
            }
        }
             printf("%s ",a);
    }
    return 0;
}
