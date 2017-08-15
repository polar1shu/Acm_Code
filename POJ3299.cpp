#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
	char c1,c2;
	while(cin>>c1 && c1 != 'E')
	//while(~scanf("%c",&c1) && c1 != 'E')//不能这样输入
	{
		int flag1,flag2,flag3;
		flag1=flag2=flag3=1;
		double a,b;
		double t,d,h;
		cin>>a>>c2>>b;
		//scanf("%lf%c%lf",&a,&c2,&b);//不能这样输入
		if(c1=='T')
		{ 
			flag1=0; 
			t=a; 
		}  
        if(c1=='D')
        { 
        	flag2=0; 
        	d=a; 
        }  
        if(c1=='H')
        { 
        	flag3=0; 
        	h=a; 
        }  
        if(c2=='T')
        { 
        	flag1=0; 
        	t=b; 
        }  
        if(c2=='D')
        { 
        	flag2=0; 
        	d=b;
        }  
        if(c2=='H')
        { 
        	flag3=0; 
        	h=b; 
        }  
        if(flag1)
        	t=h-0.5555*(6.11*exp(5417.7530*(1/273.16-1/(d+273.16)))-10.0);
        if(flag2)
        	d=1/(1/273.16-log(((h-t)/0.5555+10)/6.11)/5417.753)-273.16;
        if(flag3)
        	h=t+0.5555*(6.11*exp(5417.7530*(1/273.16-1/(d+273.16)))-10.0);
        printf("T %.1lf D %.1lf H %.1lf\n",t,d,h);
	}
}