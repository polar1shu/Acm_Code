#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    //while(~scanf("%d",&n))//这样写就超时。。。
    scanf("%d",&n);
    {
        while(n--)
        {
            int x,y,i,j;
            int flag1,flag2,flag3;
            int a[6];
            scanf("%d %d",&x,&y);
            for(i=x; i<=y; ++i)
            {
                flag1=1;
                flag2=1;
                flag3=1;
                a[0]=i/100000 ;
                a[1]=i/10000%10 ;
                a[2]=i/1000%10 ;
                a[3]=i/100%10 ;
                a[4]=i/10%10 ;
                a[5]=i%10 ;
                for(j=0; j<6; ++j)
                    if(a[j]>6)
                    {
                        flag1=0;
                        break;
                    }
                for(j=0; j<4; ++j)
                    if(a[j] -a[j+1] == 0 && a[j] - a[j+2] == 0)
                    {
                        flag2=0;
                        break;
                    }
                for(j=0; j<5; ++j)
                    if(abs(a[j]-a[j+1])>4)
                    {
                        flag3=0;
                        break;
                    }
                if( flag1 == 1 && flag2 == 1 && flag3 == 1)
                {
                    for(j=0; j<6; ++j)
                        printf("%d",a[j]);
                    printf("\n");
                }
            }
            printf("\n");
        }

    }
    return 0;
}
//运行时间为44的代码我的是228
/*#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdio.h>
int main()
{
    int n;
    char a[7],b[7],c[7];
    scanf("%d",&n);
    while (n--)
    {
        int i;
        scanf("%s%s",a,b);
        int flag ;
        for (; !(strcmp(a,b)==1); a[5]++)
        {
            flag=1;
            for (i=5; i>0; i--)
                if(a[i]>'6')
                {
                    a[i]='0';
                    a[i-1]++;
                }
            for (i=5; i>0; i--)
                if(abs(a[i]-a[i-1])>4)
                {
                    flag=0;
                    break;
                }
            if(flag&&!((a[5]==a[4])&&(a[4]==a[3]))&&!((a[4]==a[3])&&(a[3]==a[2]))&&!((a[3]==a[2])&&(a[2]==a[1]))&&!((a[2]==a[1])&&(a[1]==a[0])))
                printf("%s\n",a);
        }
        if(n>0)
            printf("\n");
    }
}*/
