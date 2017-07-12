#include<stdio.h>
int main()
{
    int *p,a[10],max,min,i;
    p=&a;
    for(i=0;i<10;++i)
        scanf("%d",(p+i));
    min=max=*p;
    for(i=0;i<10;++i)
    {
        if(*(p+i)>max)
            max=*(p+i);
    }
    for(i=0;i<10;++i)
    {
        if(*(p+i)<min)
            min=*(p+i);
    }
    for(i=0;i<10;++i)
    {
        if(*(p+i)==max)
            break;
    }
    *(p+i)=*(p+9);
    *(p+9)=max;
    for(i=0;i<10;++i)
    {
        if(*(p+i)==min)
            break;
    }
    *(p+i)=*p;
    *p=min;
    for(i=0;i<10;++i)
    printf("%d ",*(p+i));
    printf("\n");
    return 0;


}
