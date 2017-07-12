#include<stdio.h>
int main()
{
    int T;
    while(~scanf("%d",&T))
    //scanf("%d",&T);
    {
        while(T--)
        {
            char a[1010];
            int b[26]={0};
            int i,max=0;
            scanf("%s",a);
            for(i=0;a[i]!='\0';++i)
            {
                b[a[i]-'a']++;
            }
            for(i=1;i<26;++i)
            {
                if(b[i]>b[max])
                    max=i;
            }
            printf("%c\n",max+'a');
        }
    }
    return 0;
}


