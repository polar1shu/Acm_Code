#include<stdio.h>
int main()
{
    int T;
    while(~scanf("%d",&T))
          {
              while(T--)
              {
                  int N,t[10010]={0},i,j,k,m,n,a,b,c;
                  scanf("%d",&N);
                  for(i=0;i<N;++i)
                  {
                      scanf("%d%d%d",&a,&b,&c);
                      for(j=b;j<b+c;++j)
                          t[j]+=a;
                  }
                  m=0;
                  for(i=0;i<190;++i)
                  {
                      if(t[i]>m)
                          m=t[i];
                  }
                  printf("%d\n",m);
              }
          }
          return 0;
}
