#include<stdio.h>
int main()
{
    int i;
    char c;
    char a[101];
    while(gets(a))
    {


        a[0]=a[0]-32;
        for(i=1; a[i]!='\0'; ++i)
        {

            if(a[i]==' ')
            {
                a[i+1]=a[i+1]-32;
            }
        }

        printf("%s\n",a);
    }
    return 0;
}
