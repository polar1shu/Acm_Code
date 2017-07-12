#include<stdio.h>
int main()
{
    int *i,*j,*k,a,b,c,t;
    scanf("%d%d%d",&a,&b,&c);
    i=&a;
    j=&b;
    k=&c;
    if(*i>*j)
    {
        t=*i;
        *i=*j;
        *j=t;
    }
    if(*i>*k)
    {
        t=*i;
        *i=*k;
        *k=t;
    }
    if(*j>*k)
    {
        t=*j;
        *j=*k;
        *k=t;
    }
    printf("%d %d %d\n",*i,*j,*k);
    return 0;

}
