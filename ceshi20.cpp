#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
long long fun(long long n){
    long long s = 1;
    for(int i = 1;i<=n;i++)
        s*=i;
    return s;
}
int main(){
    int f[18] = {0};
        int dig[] = {0,2,3,11,6,17,12,1,10,8,5,13,7,9,15,4,14,16};
        long long sum = 0;
        for(int i = 1;i<18;i++){
            long long t = 0;
            for(int j = 1;j<18;j++){
                if(j==dig[i]){f[j]=1;break;}
                if(f[j]==0)t++;
            }
            sum+=(t)*fun(18-1-i);//此处康托展开式公式
        }
        printf("%lld\n",sum);
    return 0;
}