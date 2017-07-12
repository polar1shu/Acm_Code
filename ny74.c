#include<stdio.h>
int main()
{
    int i,m,n,a,b,c;
    while(~scanf("%d%d",&m,&n) && (m !=0 && n != 0))
    {
        c=0;
        for(i=0; i<3; ++i)
        {
            a=m%10;
            b=n%10;
            m=m/10;
            n=n/10;
            if(a+b>=10)
                c+=1;
            m+=1;
        }
        printf("%d\n",c);
    }
    return 0;
}
