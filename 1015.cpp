#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int target,k,m;
char a[26],c[26];
int b[26],v[26];
int dfs(int cur,int count)
{
    if(count == 5)
    {
        if(cur == target)
            return 1;
        else
            return 0;
    }
    for(int i=0;i<k;++i)
    {
        if(!v[i])
        {
            v[i]=1;
            int t=a[i]-'A'+1;
            c[m++]=a[i];
            count++;
            int yuan=cur;
            if(count == 1)
                cur+=t;
            else if(count == 2)
                cur-=t*t;
                //cur-=pow(t,2);
            else if(count == 3)
                cur+=t*t*t;
                //cur+=pow(t,3);
            else if(count == 4)
                cur-=t*t*t*t;
                //cur-=pow(t,4);
            else
                cur+=t*t*t*t*t;
                //cur+=pow(t,5);
            if(dfs(cur,count))
                return 1;
            m--;
            cur=yuan;
            count--;
            v[i]=0;

        }
    }
    return 0;
}
int main()
{
    while(~scanf("%d%s",&target,a))
    {
        m=0;
        k=strlen(a);
        memset(v,0,sizeof(v));
        if(target == 0 && strcmp(a,"END") == 0)
            break;
        for(int i=0;i<k;++i)
            for(int j=i+1;j<k;++j)
            {
                if(a[i]<a[j])
                {
                    char temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }        
        if(dfs(0,0))
        {
            c[m]='\0';
            puts(c);
        }
        else
            printf("no solution\n");
    }
    return 0;
}
/*#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int target,count;
char a[26];
int v[26],b[26],c[5];
int k;
int pow(int x,int y)
{
	int t=1,i;
	for(i=0;i<y;++i)
		t*=x;
	return y%2?t:-t;
}


int dfs(int m,int n)
{
	if(n == 5)
		return m == target;
	for(int i=k-1;i>=0;--i)
	{
		if(!v[i])
		{
			v[i]=1;
			int temp=c[n]=b[i];
			if(dfs(m+pow(temp,n+1),n+1))
				return 1;
			v[i]=0;
		}
	}
	return 0;
}


int main()
{
	while(~scanf("%d%s",&target,a) && (target || strcmp(a,"END")))
	{
	    k=strlen(a);
		for(int i=0;i<k;++i)
			b[i]=a[i]-'A'+1;
		memset(v,0,sizeof(v));
		sort(a,a+k);
		if(dfs(0,0))
		{
			for(int i=0;i<5;++i)
				printf("%c",c[i]-1+'A');
			printf("\n");
		}
		else
			printf("no solution\n");
	}
	return 0;
}*/

/*#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int target,i,j,k,l,m,len;
    int v,w,x,y,z;
    char a[12],b[12],c[12];
    while(~scanf("%d%s",&target,a))
    {
        len=strlen(a);
        if(len == 3 && target == 0 && a[0] == 'E' && a[1] == 'N' && a[2] == 'D')
            printf("no solution\n");
        if(len == 5)
        {
        	for(i=0;i<5;++i)
        		b[i]=a[i]-'A'+1;
        	for(i=0;i<len;++i)
        	{
        		for(j=0;j<len;++j)
        		{
        			for(k=0;l<len;++k)
        			{
        				for(l=0;l<len;++l)
        				{
        					for(m=0;m<len;++m)
        					{
        						if(i != j && i != k && i != l && i != m && j != k && j != l && j != m && k != l && k != m && l != m)
        						{
        							v=b[i];
        							w=b[j];
        							x=b[k];
        							y=b[l];
        							z=b[m];
        							if(v-w*w+x*x*x-y*y*y*y+z*z*z*z*z == target)
        								{
                                            c[0]=v-1+'A';
                                            c[1]=w-1+'A';
                                            c[2]=x-1+'A';
                                            c[3]=y-1+'A';
                                            c[4]=z-1+'A';
                                            for(int z=0;z<5;++z)
                                            printf("%c",c[z]);
                                            printf("\n");
        								}
        						}
        					}
        				}
        			}
        		}
        	}

        }
        
    }
    return 0;
}*/

