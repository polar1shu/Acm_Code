#include<stdio.h>
//两种方法都可以  原理是康托展开。。。
//百科定理。。。
//http://baike.baidu.com/link?url=pCyv54scz-p9RWoa0inTI2FRnFm4HOGe3U4az47bCG5CbMoCCSEAgZmXd83COH__TsAwZ-KrTDb9w5U_h4e3Nq
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            char a[13];
            //int b[12]={39916800,3628800,362880,40320,5040,720,120,24,6,2,1,1};
            int b[12]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800};
            int c[12],i,j,k,sum=0;
            scanf("%s",a);
            for(i=0;i<12;++i)
                c[i]=a[i]-'a';
            for(i=0;i<12;++i)
            {
                k=0;
                //for(j=11;j>i;--j)
                for(j=i+1;j<12;++j)
                    if(c[j]<c[i])
                        k++;
                sum+=k*b[11-i];
            }
            printf("%d\n",sum+1);
        }
    }
    return 0;
}
