#include<stdio.h>
int main()
{
    int a[5],min,max,i,j;
    for(i=0;i<5;++i)
        scanf("%d",&a[i]);
        min=max=a[0];

    for(i=0;i<5;++i)
        for(j=1;j<=5-i;++j)
    {
        if(a[j-1]>max)
            max=a[j-1];
        if(a[j-1]<min)
            min=a[j-1];
    }
    printf("%d %d\n",min,max);
    return 0;
}
