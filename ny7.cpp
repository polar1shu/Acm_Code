#include<stdio.h>
#include<stdlib.h>
//暴力法
//模拟出所有点  一个一个试出他们之间的最小距离
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            int m,x[21],y[21];
            int i,j,k,sum,min=10000;
            scanf("%d",&m);
            for(i=0;i<m;++i)
                scanf("%d%d",&x[i],&y[i]);
            for(i=1;i<100;++i)
            {
                for(j=1;j<100;++j)
                {
                    sum=0;
                    for(k=0;k<m;++k)
                        sum+=abs(x[k]-i)+abs(y[k]-j);
                    if(sum<min)
                        min=sum;
                }
            }
            printf("%d\n",min);
        }
    }
    return 0;
}
//最优解
//标程，我个人的理解（纯手打），我们可以假设最优的点（邮局的位置）为(x,y),其他的点（居民房）为(a1,b1)(a2,b2)...(an,bn),则最短路径距离min=|a1-x|+|b1-y|+|a2-x|+...+|an-x|+|bn-y|,整理得min=(|a1-x|+...+|an-x|)+(|b1-y|+...+|bn-y|);对于(|a1-x|+...+|an-x|)根据不等关系|a|+|b|>=|a-b|当a,b异号时等号成立，此题我们可以推广（同向不等式相加原理）成|a1-x|+...+|an-x|>=|a1-a2|+|a3-a4|+...+|a(n-1)-an|,其中a1,a2(a3,a4;...;a(n-1),an)等必须有一个大于x,另一个小于x(即等号成立的条件),同理可证(|b1-y|+...+|bn-y|)；说白了，就是有一条数轴，上面有n个固定的点，有一个移动的点，要使得移动的点到其他点的距离和最小，那个移动的点就是那一系列点的中位点（如果是数轴上的任一点都可以取得话，当n为偶数时，x是中位点（两个）中间的任意一点，奇数的话就是它本身），此题拓展到了二维。
/*#include<iostream>
#include<algorithm>
using namespace std;
int x[30],y[30],n,m,i;;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>m;
        for(i=0;i<m;i++)
            cin>>x[i]>>y[i];
        sort(x,x+m);
        sort(y,y+m);
        int sum=0;
        for(i=0;i<m/2;i++)
            sum+=x[m-1-i]-x[i]+y[m-1-i]-y[i];
        cout<<sum<<endl;
    }
    return 0;
}*/