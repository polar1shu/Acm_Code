#include <iostream>
using namespace std;
template<typename T>
T sort(T a[])
{
	T min;
	for(int i=0;i<10;++i)
	{
		for(int j=i;j<10;++j)
		{
			if(a[i]>a[j])
			{
				min=a[i];
				a[i]=a[j];
				a[j]=min;
			}
		}
	}

}
int main()
{
	int a[10];
	float b[10];
	double c[10];
	for(int i=0;i<10;++i)
		cin>>a[i];
	for(int i=0;i<10;++i)
		cin>>b[i];
	for(int i=0;i<10;++i)
		cin>>c[i];
	sort(a);
	sort(b);
	sort(c);
	for(int i=0;i<10;++i)
	    cout<<a[i];//<<endl;
	cout<<endl;
	for(int i=0;i<10;++i)
		cout<<b[i];
	cout<<endl;
	for(int i=0;i<10;++i)
		cout<<c[i];
	cout<<endl;
}
/*#include <iostream>
using namespace std;
void sort(int a[])
{
	int min;
	for(int i=0;i<10;++i)
	{
		for(int j=i;j<10;++j)
		{
			if(a[i]>a[j])
			{
				min=a[i];
				a[i]=a[j];
				a[j]=min;
			}
		}
	}
}
void sort(float b[])
{
	int min;
	for(int i=0;i<10;++i)
	{
		for(int j=i;j<10;++j)
		{
			if(b[i]>b[j])
			{
				min=b[i];
				b[i]=b[j];
				b[j]=min;
			}
		}
	}
}
void sort(double c[])
{
	int min;
	for(int i=0;i<10;++i)
	{
		for(int j=i;j<10;++j)
		{
			if(c[i]>c[j])
			{
				min=c[i];
				c[i]=c[j];
				c[j]=min;
			}
		}
	}
}
int main()
{
	int a[10];
	float b[10];
	double c[10];
	for(int i=0;i<10;++i)
		cin>>a[i];
	for(int i=0;i<10;++i)
		cin>>b[i];
	for(int i=0;i<10;++i)
		cin>>c[i];
	sort(a);
	sort(b);
	sort(c);
	for(int i=0;i<10;++i)
	    cout<<a[i];//<<endl;
	cout<<endl;
	for(int i=0;i<10;++i)
		cout<<b[i];
	cout<<endl;
	for(int i=0;i<10;++i)
		cout<<c[i];
	cout<<endl;
}*/
/*#include <iostream>
using namespace std;
int main()
{
	string a;
	char z;
	cin>>a;
	int m = a.length();
	for(int i=0;i<m/2;++i)
	{
		z=a[i];
		a[i]=a[m-i-1];
		a[m-i-1]=z;
	}
	cout<<a<<endl;
}*/
/*#include <iostream>
using namespace std;
void sort(int &x,int &y,int &z)
{
	int m;
	if(x<y)
	{
		m=y;
		y=x;
		x=m;
	}
	if(x<z)
	{
		m=z;
		z=x;
		z=m;
	}
	if(y<z)
	{
		m=y;
		y=z;
		z=m;
	}
} 
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	sort(a,b,c);
	cout<<a<<","<<b<<","<<c<<endl;
}*/
/*#include <iostream>
using namespace std;
int max(int x,int y,int z)
{
	int m = x;
	if(m<=y)
		m=y;
	if(m<=z)
		m=z;
	return m;
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<max(a,b)<<endl;
	cout<<max(a,b,c)<<endl;
}*/
/*#include <iostream>
using namespace std;
int main()
{
	cout<<"Hello World"<<endl;
}*/