#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        char a[1010],b[1010],c[1010];
        int i,j,k,m,shu=1,max,p;
        while(n--)
        {
            scanf("%s%s",a,b);if(shu !=1)
                puts("");

            printf("Case %d:\n%s + %s = ",shu++,a,b);

            k=strlen(a)-1;
            m=strlen(b)-1;
            //max=k>m?k:m;
            for(i=0,p=0; k>=0 || m>=0; ++i,--k,--m)
            {
                if(k>=0 && m>=0)
                    c[i]=a[k]+b[m]-'0'+p;
                if(k>=0 && m<0)
                    c[i]=a[k]+p;
                if(k<0 && m>=0)
                    c[i]=b[m]+p;
                p=0;
                if(c[i]>'9')
                {
                    c[i]-=10;
                    p=1;
                }


            }
            /*for(i=max-1; i>=0; --i)
            {
                for(j=m-1; j!=0; --j)
                {
                    if(a[i]+b[j]<9)
                    {
                             c[i]=a[i]+b[j];
                    //continue;
                    }

                    if(a[i]+b[j]>=9)
                    {
                        c[i]=(a[i]+b[j])%10;
                        a[i-1]+=1;
                        //continue;
                    }

                }
            }*/
            //++shu;


            if(p == 1)
                printf("1");
            for(i=i-1; i>=0; --i)
                printf("%c",c[i]);
            puts("");
            //puts("");
            //printf("%s + %s = ",a,b);
        }
    }
    return 0;
}
/*第二种输出格式*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        char a[1010],b[1010],c[1010];
        int i,j,k,m,shu=0,max,p;
        while(n--)
        {
            scanf("%s%s",a,b);

            k=strlen(a)-1;
            m=strlen(b)-1;
            //max=k>m?k:m;
            for(i=0,p=0; k>=0 || m>=0; ++i,--k,--m)
            {
                if(k>=0 && m>=0)
                    c[i]=a[k]+b[m]-'0'+p;
                if(k>=0 && m<0)
                    c[i]=a[k]+p;
                if(k<0 && m>=0)
                    c[i]=b[m]+p;
                p=0;
                if(c[i]>'9')
                {
                    c[i]-=10;
                    p=1;
                }


            }
            //if(shu!=1)
              //  printf("\n");

            printf("Case %d:\n%s + %s = ",++shu,a,b);
            if(p == 1)
                printf("1");
            for(i=i-1; i>=0; --i)
                printf("%c",c[i]);
                if(n == 0)
          printf("\n");
            else
                printf("\n\n");

        }
    }
    return 0;
}

