#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int t;
    while(~scanf("%d",&t))
    {
        while(t--)
        {
            int m,k,i=0,sum=0;
            char a[5];
            scanf("%d",&m);
            while(m--)
            {
                scanf("%s",a);
                if(strcmp("IN",a) == 0)
                    i++;
                if(strcmp("STAY",a) == 0)
                {
                    scanf("%d",&k);
                    sum+=k*60/(int)pow(20,i);//每深入一层就会加速20倍  第一层是20第二层是20*20第三层是20*20*20
                }
                if(strcmp("OUT",a) == 0)
                    i--;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
