#include<stdio.h>
int main()
{
    int t;
    while(~scanf("%d",&t))
    {
        while(t--)
        {
            int n,k,i,t,sum=0;
            scanf("%d%d",&n,&k);//��Ŀ��˼��������ÿ����k��������һ��
            i=n;
            while(i>=k)
            {
                sum+=i/k;//�̵ĸ��������˶��ٸ�
                i=i/k+i%k;//���ӵĸ����������ٻ�һ�ε��ܺ�
            }
            printf("%d\n",sum+n);
        }
    }
    return 0;
}
