#include <stdio.h>
#include <math.h>
int main ()
{
    int n;
    printf("please enter a nember between 0 and 15:\n");
    while (~scanf("%d",&n))
    {
        int i,j,flag;
        long long a;
        flag=0;
        for (i=50;i>=0;i--)
        {
            a=pow(2,i);
            if(n>=a)
            {
                n=n-a;
                printf("1");
                flag=1;
            }
            else if((n<a||n==0)&&flag==1)
                printf("0");
        }
        printf("\nplease enter a nember between 0 and 15:\n");
    }
}
/*#include <stdio.h>
int main ()
{
    int n;
    printf("please enter a nember between 0 and 15:\n");
    while (~scanf("%d",&n))
    {
        printf("you entered the nember %d\n",n);
        int a[100],i,j;
        for (i=0; n!=0; i++)
        {
            a[i]=n%2;
            n=n/2;
        }
        for(j=i-1; j>=0; j--)
            printf("%d",a[j]);
        printf("\nplease enter a nember between 0 and 15:\n");
    }
}*/
