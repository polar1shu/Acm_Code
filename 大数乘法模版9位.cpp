#include <stdio.h>
#include <string.h>

#include <stdlib.h>
#include <time.h>
#define LEN 10000
#define MOD 1000000000
int main()
{

    clock_t start,finish;
    double duration;


    char s1[LEN],s2[LEN];
    int a[LEN],b[LEN];
    int c[2*LEN];//此模板使用范围，相乘的两个数每个数小于90000位，可容纳180000以内的结果
    int i,j,la,lb,lc,pos;

    while(EOF !=scanf("%s%s",s1,s2))
    {
        start = clock();

        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));

        for(la=0,pos=strlen(s1)-9; pos>=0; pos-=9)
            a[la++] = (s1[pos]-48)*100000000 + (s1[pos+1]-48)*10000000 + (s1[pos+2]-48)*1000000 + (s1[pos+3]-48)*100000 + (s1[pos+4]-48)*10000 + (s1[pos+5]-48)*1000 + (s1[pos+6]-48)*100 + (s1[pos+7]-48)*10 + (s1[pos+8]-48);
        for(pos += 9,j=0; j<pos; j++)
            a[la] = a[la]*10 + (s1[j]-48);
        if(j!=0)
            la++;


        for(lb=0,pos=strlen(s2)-9; pos>=0; pos-=9)
            b[lb++] = (s2[pos]-48)*100000000 + (s2[pos+1]-48)*10000000 + (s2[pos+2]-48)*1000000 + (s2[pos+3]-48)*100000 + (s2[pos+4]-48)*10000 + (s2[pos+5]-48)*1000 + (s2[pos+6]-48)*100 + (s2[pos+7]-48)*10 + (s2[pos+8]-48);
        for(pos += 9,j=0; j<pos; j++)
            b[lb] = b[lb]*10 + (s2[j]-48);
        if(j!=0)
            lb++;


        for(j=0; j<lb; j++)
            for(i=0; i<la; i++)
            {
                c[j+i] += (int)b[j]*a[i];
                c[j+i+1] += c[j+i]/MOD;
                c[j+i] %= MOD;
            }

        lc = la + lb;
        if(0 == c[lc-1])
            lc--;

        finish = clock();

        printf("%d",c[lc-1]);
        for(i=lc-2; i>=0; i--)
            printf("%09I64d",c[i]);
        printf("\n");
        duration = (double)(finish-start)/CLOCKS_PER_SEC;
        printf("%lf\n",duration);
    }
    return 0;
}
