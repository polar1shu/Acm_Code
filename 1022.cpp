#include<stdio.h>
//简单使用栈
//题目大意是给你1～9个火车  让他们按一定的顺序进去   按一定的顺序
//出来   但是它们可以按进去的顺序进去完之后再按出来的顺序一个一个出来  
// 也可以按出来的顺序进去一个 出来一个
// 比如123 132  这样也是可以的 
int main()
{
	int n;
	char in[12],out[12],temp[20];
	while(~scanf("%d %s %s",&n,in,out))
	{
		int a[20];
		int flag=1;
		int k=0;
		int i,j;
		//memset(temp,0,sizeof(temp));
		for(i=0,j=0;j<n+1 && i<n;)
		{
			//for(int j=0;j<n+1;++j)
			//{
				if(out[i] == temp[flag-1] && flag != 1)
				{
					a[k++]=0;
					i++;
					flag--;
					//break;
				}
				else
				{
					temp[flag]=in[j];
					a[k++]=1;
					j++;
					flag++;
					//break;
				}
			//}

		}
		if(k == 2*n)
			{
				printf("Yes.\n");
				for(int i=0;i<k;++i)
				{
					if(a[i])
						printf("in\n");
					else
						printf("out\n");
				}
			}
		else
			printf("No.\n");
		printf("FINISH\n");
	}
	return 0;
}
/*#include<cstdio>
int main()
{
    char in[12],out[12],stack[20];
    int n,i,j,k,top,flag[20];
    while(scanf("%d %s %s",&n,in,out)!=EOF)
    {
        top=1;
        i=j=k=0;
        while(i<n&&j<n+1)           //进栈时j++，出栈时i++,先进栈后出栈，进栈完毕后任不能结束，故j<n+1 
        {                        
            if(out[i]==stack[top-1]&&top!=1)
            {
                i++,top--;              //出栈 
                flag[k++]=0;          
            }
            else
            {
                stack[top]=in[j];      //进栈
                j++,top++;
                flag[k++]=1;           
            }      
        }  
        if(k==2*n)
        {
            printf("Yes.\n");
            for(i=0; i<k; i++)
            {
                if(flag[i])
                    printf("in\n");
                else 
                    printf("out\n");
            }
        }
        else
        {
            printf("No.\n");
        }
         printf("FINISH\n");
    }
    return 0;
}*/