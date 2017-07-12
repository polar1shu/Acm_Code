#include<stdio.h>
int main()
{
    int i,k;
    char a[50];
    while(~scanf("%s%d",a,&k))
    {
        for(i=0;a[i]!='\0';++i)
            a[i]=(a[i]-'A'+26-k)%26+'A';
        //题目就是就是输入一串字母和一个数字k，把各个字母向前推k个，如果该字母小于A，便加26.
        //我写的思路是将这个数转化为数字后往前推一位+26避免是负数 除26取余 得到他和A的关系得答案
        printf("%s\n",a);
    }
    return 0;
}
