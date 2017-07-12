#include<stdio.h>
#include<string.h>
int main()
{
	char a[105],v[105];
	while(~scanf("%s",a))
	{
		i=0;
		count=0;
		point=-1;
		if(a[i] == '-')
		{
			v[count++]=a[0];
			i++;
		}
		while(a[i] == '0' && a[i+1] != '\0' && a[i+1] != '.')
			i++;
		while(a[i] != '\0')
		{
			v[count++]=a[i];
			i++;
		}
		v[count]='\0';
		strcpy(a,v);
		count=0;
        int k = strlen(a);
		for(i=0;a[i]!='\0';++i)
		{
			if(a[i] == '.')
			{
			    point = i;
				break;
			}
		}
        int jw;
        if(point != -1 )
        {
        	jw=0;
        	if(point+3<k)
        	{
        		if(a[point+3]>='5')
        			jw=1;
        		for(i=point+2;i>point;--i)
        		{
        			int t=a[i]-'0'+jw;
        			if(t>=10)
        			{
        				jw=1;
        				t=t-10;
        			}
        			else
        			{
        				jw=0;
        			}
        			v[count++]=t+'0';
        		}
        	}
        	else if(point+2<k)
        	{
        		for(i=point+2;i>point;--i)
        			v[count++]=a[i];
        	}
        	else
        	{
        		v[count++]='0';
        		v[count++]=a[point+1];
        	}
        	v[count++]='.';
        	for(i=point-1;i>=0 && a[i] != '-';--i)
        	{
        		int t=a[i]-'0'+jw;
        		if(t>=10)
        		{
        			jw=1;
        			t-=10;
        		}
        		else
        			jw=0;
        		if((point-1-i) % 3 == 0 && i != point-1)
        			v[count++]=',';
        	    v[count++]= t+'0';
        	}
        	if(jw!=0)
        	{
        		if((point-1-i)%3 == 0 && i != point-1)
        			v[count++]=',';
        		v[count++]=jw+'0';
        	}
        }
        else
        {
        	v[count++] = '0';
            v[count++] = '0';
            v[count++] = '.';
            for(i=k-1;i>=0 && a[i] != '-';--i)
            {
            	if((k-1-i)%3 == 0 && i != k-1)
            		v[count++]=',';
            	v[count++]=a[i];
            }
        }
        if(a[0]=='-')
        	v[count++]='(';
        int j;
        for(i=0,j=count-1;i<j;++i,--j)
        {
        	char temp = v[i];
        	v[i]=v[j];
        	v[j]=temp;
        }
        if(v[0] == '(')
        	v[count++]=')';
        v[count] = '\0';
        puts(v);
	}
	return 0;
}