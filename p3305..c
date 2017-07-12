#include<stdio.h>
struct student
{
    char num[6];
    char name[8];
    double score[3];
    double aver;
}stu[10];
int main()
{
    int i,j,maxi;
    double sum,max,average;
    for(i=0;i<10;++i)
    {
        scanf("%s",stu[i].num);
        scanf("%s",stu[i].name);
        for(j=0;j<3;++j)
        {
            scanf("%lf",&stu[i].score[j]);
        }

    }
    average=0;
    max=0;
    maxi=0;
    for(i=0;i<10;++i)
    {
        sum=0;
        for(j=0;j<3;++j)
            sum+=stu[i].score[j];
        stu[i].aver=sum/3;
        average+=stu[i].aver;
        if(sum>max)
        {
            max=sum;
            maxi=i;
        }
    }
    average/=10;
    for(i=0;i<10;++i)
    {
        printf("%s %s",stu[maxi].num,stu[maxi].name);
        for(j=0;j<3;++j)
            printf("%.lf",stu[i].score[j]);
            printf("%.lf",stu[i].aver);
    }
    printf("%.lf",average);
    printf("The highest score is :%s %s\n",stu[maxi].num,stu[maxi].name);
    printf("score is :%.lf,%.lf,%.lf average :%.lf\n",stu[maxi].score[0],stu[maxi].score[1],stu[maxi].score[2],stu[maxi].aver);
    return 0;
}
