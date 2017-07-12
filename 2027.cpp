#include <iostream>
//#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	int n;
	//scanf("%d",&n);
	while(~scanf("%d",&n))
	{
		getchar();
		while(n--)
			{
				char a[105];
				gets(a);
				//printf("%lu\n",strlen(a));
				//printf("%s",a);
				int b[5]={0};
		        for(int i=0;i<strlen(a);++i)
		        {
			        if(a[i]=='a')
				        b[0]+=1;
			        else if(a[i] == 'e')
				        b[1]+=1;
			        else if(a[i] == 'i')
				        b[2]+=1;
			        else if(a[i] == 'o')
				        b[3]+=1;
			        else if(a[i] == 'u')
				        b[4]+=1;
		        }
		        printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",b[0],b[1],b[2],b[3],b[4]);
		        memset(a,0,sizeof(a));
                if(n)
        	         printf("\n");
     		}
	}
}