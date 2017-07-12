/*
题目大意
题目描述： 
      从前有只肥肥的老鼠，他叫FatMouse，他就像人类的恐怖分子跟敌人交易军火一样，
猥琐的他准备了M磅猫食，准备与守卫仓库的大猫们进行交易，仓库里有他最爱吃的食物Javabean。 
仓库里有N个房间，第i间房间里有J[i]磅Javabean且需要F[i]磅猫食进行交换，FatMouse不必把
每个房间里的Javabean全部用于交易，
相反，他可以付给大猫F[i]*a%磅猫食，从而换的J[i]*a%磅的Javabean。
其中，a是一个实数，现在他给你布置一个家庭作业，
请你告诉他他最多能够获得多少磅Javabean。

输入描述： 
输入包含多组测试数据，每组测试数据的开头一行是两个非负整数M, N.接下来的N行中，
每行包含两个非负整数J[i]和F[i]，最后一组测试数据是两个-1，所有的整数的值不糊超过1000；

输出描述： 
对于每组测试数据，在一行上打印出一个3位小数的实数，
这个实数是FatMouse能够交易到的最大数量的Javabean.

意思就是这个人用m磅东西去交换她想要的 先给他们的单价排一下序 
如果m大于F[i]的重量，则m减去F[i]的重量，sum加上J[i]的重量
否则，   之前算出单价为z[i]了，按照单价算剩余的m可以换多少J[i]的重量sum加上后 程序跳出输出结果后结束  
思路就是先给单价排序利益最大化
贪心算法
 */
#include<stdio.h>
int main()
{
	int m,n;
	double a[1001],b[1001],c[1001];
	while(~scanf("%d%d",&m,&n) && m!=-1 && n!= -1)
	{
		int i,j;
		double sum=0;
		for(i=0;i<n;++i)
		{
			scanf("%lf%lf",&a[i],&b[i]);
			c[i]=1.0*a[i]/b[i];
		}
		for(i=0;i<n;++i)
		{
			for(j=i+1;j<n;++j)
			{
				if(c[i]<c[j])
				{
					double t1=a[i];
					double t2=b[i];
					double t3=c[i];
					a[i]=a[j];
					b[i]=b[j];
					c[i]=c[j];
					a[j]=t1;
					b[j]=t2;
					c[j]=t3;
				}
			}
		}
		for(i=0;i<n;++i)
		{
			if(m>b[i])
			{
				sum+=a[i];
				m-=b[i];
			}
			else
			{
				sum+=m*c[i];
				break;
			}
		}
		printf("%.3lf\n",sum);
		
	}
	return 0;
}
/*#include<stdio.h>
struct Room
{
	double j,f,z; 
}room[1001];
int main()
{
	int m,n;
	while(~scanf("%d%d",&m,&n) && m!=-1 && n!=-1)
	{
		for(int i=0;i<n;++i)
		{
			scanf("%lf%lf",&room[i].j,&room[i].f);
			room[i].z=1.0*room[i].j/room[i].f;
		}
		//for(int i=0;i<n;++i)
		//	printf("%lf\n",room[i].z);
		double sum=0;
		for(int i=0;i<n;++i)
		{
			for(int j=i+1;j<n;++j)
			{
				if(room[i].z<room[j].z)
				{
					double t1=room[i].j;
					double t2=room[i].f;
					double t3=room[i].z;
					room[i].j=room[j].j;
					room[i].f=room[j].f;
					room[i].z=room[j].z;
					room[j].j=t1;
					room[j].f=t2;
					room[j].z=t3;
				}
			}
		}
		for(int i=0;i<n;++i)
		{
			if(m>room[i].f)
			{
				m-=room[i].f;
				sum+=room[i].j;
			}
			else
			{
				sum+=m*room[i].z;
				break;
			}
		}
		printf("%.3lf\n",sum);
		//for(int i=0;i<n;++i)
		//	printf("%lf %lf %lf\n",room[i].j,room[i].f,room[i].z);
	}
	return 0;
}*/
/*#include<iomanip>
#include<algorithm>
using namespace std;
struct Room
{
	double j,f,z; 
}room[1001];
bool cmp(Room x,Room y)
{
	return x.z>y.z;
}
int main()
{
	double m;
	int n;
	while(~scanf("%lf%d",&m,&n) && (n != -1 && m != -1))
	{
		for(int i=0;i<n;++i)
		{
			scanf("%lf%lf",&room[i].j,&room[i].f);
			room[i].z=room[i].j/room[i].f;
		}
		for(int i=0;i<n;++i)	
            printf("%lf\n",room[i].z);
		sort(room,room+n,cmp);
		double sum=0;
		for(int i=0;i<n;++i)
		{
			if(m>room[i].f)
			{
				sum+=room[i].j;
				m-=room[i].f;
			}
			else
			{
				sum+=m*room[i].z;
				break;
			}

		}
		printf("%.3lf\n",sum);
		//for(int i=0;i<n;++i)
		//	printf("%lf %lf %lf\n",room[i].j,room[i].f,room[i].z);
		
	}
	return 0;
}*/