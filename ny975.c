#include<stdio.h>
#include<string.h>
//貌似打表法是这样的  数组开到函数之外
int x[1000001]= {0};
int y[1000001]= {0};
int z[1000001]= {0};
int main()
{
    int a,b;
    int i,j,m,k,n;
    char temp[111];
    //int x[1000001];
    //int y[1000001];
    //int z[1000001];
    //while(~scanf("%d%d",&a,&b))//先写这个超时
    //{
    for(i=125; i<=1000000; ++i)
    {
        //char temp[111];
        k=0;
        sprintf(temp,"%d",i);//sprintf函数  重点  用出无限
        n=strlen(temp);
        for(j=0; j<n; ++j)
        {
            if(temp[j] == '1')
            {
                k=1;
                break;
            }
        }
        if(k == 1)
        {
            for(j=0; j<n; ++j)
            {
                if(temp[j] == '2')
                {
                    k=2;
                    break;
                }
            }
        }
        if(k == 2)
        {
            for(j=0; j<n; ++j)
            {
                if(temp[j] == '5')
                {
                    k=3;
                    if(j+2<n && temp[j+1] == '2' && temp[j+2] == '1')//j+2判断是否后边两个数超出这个数的范围
                        //例如521
                        x[i]=2;//包含521这样的排列就加二
                }
            }
        }
        if(x[i]!=2 && k == 3)
            x[i]=1;//i代表的那个数包含5，2，1就是一个
    }
    m=1;
    for(i=124; i<=1000000; ++i)
    {
        if(x[i])
            y[i]=y[i-1]+1;//判断有多少个数是包含5，2，1的
        else
            y[i]=y[i-1];
    }
    for(i=520; i<1000000; ++i)
    {
        if(x[i] == 2)//判断有多少数非常生气
            z[i]=z[i-1]+1;//有就＋1 单独的数组
        else
            z[i]=z[i-1];
    }
    while(~scanf("%d%d",&a,&b))
        printf("Case %d:%d %d\n",m++,y[b]-y[a-1],z[b]-z[a-1]);
    //为什么要y[b]-y[a-1]因为不知道a是不是符合条件的如果符合在a~b中只有a符合的话两者差为0是错误的
    //所以不如算y[a-1］有多少个符合的反正y[b]已经包括了y[a]的
    //}
    return 0;
}
/*最优解
#include<stdio.h>
int a[2][1000001]= {0};
int main()
{
    int k=0,i,sum=0;
    for(i=1; i<=1000000; i++)
    {
        if((i%10==5||(i/10)%10==5||(i/100)%10==5||(i/1000)%10==5||(i/10000)%10==5||(i/100000)%10==5)&&(i%10==2||(i/10)%10==2||(i/100)%10==2||(i/1000)%10==2||(i/10000)%10==2||(i/100000)%10==2)&&(i%10==1||(i/10)%10==1||(i/100)%10==1||(i/1000)%10==1||(i/10000)%10==1||(i/100000)%10==1))
        {
            sum++;
            if(i/1000==521||(i/100)%1000==521||(i/10)%1000==521||i%1000==521)k++;
        }
        a[0][i]+=sum;
        a[1][i]+=k;
    }
    int m,n,w=0;
    while(scanf("%d%d",&n,&m)!=EOF)
        printf("Case %d:%d %d\n",++w,a[0][m]-a[0][n-1],a[1][m]-a[1][n-1]);
}*/