#include<stdio.h>
struct student
{
    char name[20];
    int average;
    int score;
    char ganbu;
    char shengfen;
    int lunwen;

} stu[101];
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            int x;
            while(~scanf("%d",&x))
            {
                int i,sum,max,k,zonghe,flag;
                max=0;
                zonghe=0;
                flag=0;
                for(i=0; i<x; ++i)
                {
                    scanf("%s%d%d %c %c%d",stu[i].name,&stu[i].average,&stu[i].score,&stu[i].ganbu,&stu[i].shengfen,&stu[i].lunwen);
                    // getchar();
                }
                for(i=0; i<x; ++i)
                {
                    sum=0;
                    if(stu[i].average>80 && stu[i].lunwen>=1)
                        sum+=8000;
                    if(stu[i].average>85 && stu[i].score>80)
                        sum+=4000;
                    if(stu[i].average>90)
                        sum+=2000;
                    if(stu[i].average>85 && stu[i].shengfen == 'Y')
                        sum+=1000;
                    if(stu[i].score>80 && stu[i].ganbu == 'Y')
                        sum+=850;
                    zonghe+=sum;
                    if(max<sum)
                    {
                        max=sum;
                        flag=i;
                    }
                }
                printf("%s\n%d\n%d\n",stu[flag].name,max,zonghe);

            }
        }
    }
    return 0;
}
/*#include<stdio.h>
struct student
{
    char name[20];
    int sorce1;
    int sorce2;
    char a;
    char b;
    int count;
};
int main()
{
    struct student massage[105];
    int n, m;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &m);
        for(int i = 0; i < m; i++)
        {
            scanf("%s%d%d %c %c%d", massage[i].name, &massage[i].sorce1, &massage[i].sorce2, &massage[i].a, &massage[i].b, &massage[i].count);
        }

        int max = 0, all_sum = 0, flag;
        for(int i = 0; i < m; i++)
        {
            int sum = 0;
            if(massage[i].sorce1 > 80 && massage[i].count >= 1)
                sum += 8000;
            if(massage[i].sorce1 > 85 && massage[i].sorce2 > 80)
                sum += 4000;
            if(massage[i].sorce1 > 90)
                sum += 2000;
            if(massage[i].sorce1 > 85 && massage[i].b == 'Y')
                sum += 1000;
            if(massage[i].sorce2 > 80 && massage[i].a == 'Y')
                sum += 850;
            all_sum += sum;
            if(max < sum)
            {
                max = sum;
                flag = i;
            }
        }
        printf("%s\n%d\n%d\n", massage[flag].name, max, all_sum);
    }
}*/

