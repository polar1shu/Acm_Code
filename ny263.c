#include<stdio.h>
struct gangguan
{
    int chang;
    int zhi;
    int bian;
} guan[1010];
int main()
{
    int N;
    while(~scanf("%d",&N))
        //scanf("%d",&N);
    {
        while(N--)
        {
            int i,m,flag,a1,a2,da;
            flag=0;
            scanf("%d",&m);
            for(i=0; i<m; ++i)
                scanf("%d%d%d",&guan[i].chang,&guan[i].zhi,&guan[i].bian);
            a1=guan[0].chang;
            a2=guan[0].zhi;
            da=guan[0].bian;
            for(i=1; i<m; ++i)
            {
                //if(guan[i].chang>=a1 && guan[i].zhi<=a2)
                //{
                //  if(guan[i].chang == a1 && guan[i].zhi == a2)// || (guan[i].chang>a1 && guan[i].zhi == a2))
                //{
                //  if(guan[i].bian>=da)
                //{
                //  a1=guan[i].chang;
                //a2=guan[i].zhi;
                //da=guan[i].bian;
                //}
                //}
                //else
                if(guan[i].chang>a1 || guan[i].chang == a1 && guan[i].zhi<a2 || guan[i].chang == a1 && guan[i].zhi == a2 && guan[i].bian>da)
                {
                    a1=guan[i].chang;
                    a2=guan[i].zhi;
                    da=guan[i].bian;
                }

            }
            printf("%d\n",da);

        }
    }
    return 0;
}

/*
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int m,x,y,z,a=0,b=0,c=0,i;
        scanf("%d",&m);
        for(i=0;i<m;++i)
        {
            scanf("%d%d%d",&x,&y,&z);
            if(x>a || x == a && y<b || x == a && y == b && z>c)
            {
                a=x;
                b=y;
                c=z;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}*/
