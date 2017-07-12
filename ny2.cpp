#include<stdio.h>
#include<string.h>
int main()
{
	int N;
	while(~scanf("%d",&N))
	{
		while(N--)
		{
			char s[10010],a[10010];
			int i,k,m,n,w,x,y,z,t,f;
			t=0;
		    w=x=y=z=0;
		    f=1;
			scanf("%s",s);
			k=strlen(s);
			if(k%2 == 0)
			{
                for(i=0;i<k;++i)
                {
                	if(s[i] == '(')
                		w+=1;
                	if(s[i] == ')')
                		x+=1;
                	if(s[i] == '{')
                		y+=1;
                	if(s[i] == '}')
                		z+=1;
                }
                if((w == x) && (y == z))
                {
                    for(i=0;i<k;++i)
                    {
                    	if(s[i] == '(' || s[i] == '[')
                    		{
                    			a[t]=s[i];
                    			t++;
                    		}
                    	else
                    	{
                    		if(s[i] == ')' && a[t-1] == '(' || s[i] == ']' && a[t-1] == '[')
                    			t--;
                    		else
                    		{
                    			printf("No\n");
                    			f=0;
                    			break;
                    		}
                    	}
                    }
                    if(f == 1)
                        printf("Yes\n");
                }
                else
                	printf("No\n");
			}
			else
				printf("No\n");
		}
	}
	return 0;
}