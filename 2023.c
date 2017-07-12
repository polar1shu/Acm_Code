#include<stdio.h>
int main()
{
    int n,m;
    int num[60][6];
    double ave1[60],ave2[6];
    int i,j;
    int z;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            ave1[i]=0;
            for(j=0;j<m;j++)
            {
                scanf("%d",&num[i][j]);
                ave1[i]+=num[i][j];
            }
            ave1[i]/=m;
        }
        for(i=0;i<n-1;i++)
            printf("%.2lf ",ave1[i]);
        printf("%.2lf\n",ave1[n-1]);
        for(j=0;j<m;j++)
        {
            ave2[j]=0;
            for(i=0;i<n;i++)
                ave2[j]+=num[i][j];
            ave2[j]/=n;
            printf("%.2lf",ave2[j]);
            if(j!=m-1)
                printf(" ");//最后一个数据是没有空的
        }
        printf("\n");
        for(i=0,z=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(num[i][j]<ave2[j])
                    break;
            }
            if(j==m)
                z++;
        }
        printf("%d\n",z);
        printf("\n");
    }
    return 0;
}
