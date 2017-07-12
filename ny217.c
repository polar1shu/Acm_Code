#include<stdio.h>
int main()
{
    int t;
    //while(~scanf("%d",&t))
    scanf("%d",&t);
    //getchar();
    {
        while(t--)
        {
            char m;
            int n,a;
            scanf("\n%c %d",&m,&n);
            getchar();
            if(m>='a' && m<= 'z')
            {
                a=-1*(m-'a'+1);
            }
            else if(m>='A' && m<='Z')
            {
                a=m-'A'+1;
            }
            printf("%d\n",a+n);
        }
    }
    return 0;
}
