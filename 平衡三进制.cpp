#include <stdio.h>
//https://www.zhihu.com/question/30164499/answer/47003542
//https://zhidao.baidu.com/question/242298237779175444.html
int main()
{
    int N;
    int x,i,j,k,m;
 
    scanf("%d",&N);
    while(N--) {
        int a[50]={0};
        i=0;
        scanf("%d",&x);
        //这部分是可以放到循环中的。
        k=x;
        while(k!=0) {
            j=k%3;
            k=(k-j)/3;//这里其实不-j也是一样的。
            //对a的赋值，可以不用这么复杂，当j为2时，只需要在k上加1就可以了。表示计算的时候，曾经向高位借一
             
            if(j!=2) {
                a[i] = j;
            }
            else {
                a[i] = -1;
                k++;
            }
 
            i++;
        }
        for(m=i-1;m>=0;m--)//因为每次赋值后i++,所以一共是i位，从0到i-1.
        {
            if(a[m]==-1) printf("-");
            else printf("%d",a[m]);
        }
        printf("\n");
    }
 
    return 0;
}