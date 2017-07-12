//arraymax.h
#include <iostream>
using namespace std;
class Arraymax
{
public:
	void set();
	void maxs();
	void show();
	void swap();
	void del1();
	void del2();
private:
	int array[10];
	int max;
};
//arraymax.cpp
void Arraymax::set()
{
	int i;
	cout<<"please enter the array:";
	for(i=0;i<10;i++)
	{
		cin>>array[i];
	}
}
void Arraymax::swap()
{
	int i,j;
	int temp;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
		cout<<array[i]<<" ";
	cout<<endl;
}

void Arraymax::maxs()
{
	int i;
	max=array[0];
	for(i=1;i<10;i++)
	{
		if(array[i]>max)
			max=array[i];
	}
}
void Arraymax::show()
{
	cout<<"max="<<max<<endl;
}
void Arraymax::del1()
{
	int i;
	cout<<"请输入要删除的数的位置:";
	int n;
	cin>>n;
	for(i=n-1;i<10;i++)
	{
		array[i]=array[i+1];
	}
	for(i=0;i<9;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
}
void Arraymax::del2()
{
	cout<<"请输入要删除的数:";
	int n;
	int h;
	cin>>n;
	int j;
	for(j=0;j<10;j++)
		if(array[j]==n)
		    h=j;
	   for(j=h;j<9;j++)
	{
		array[j]=array[j+1];
	}

	for(j=0;j<8;j++)
	{
		cout<<array[j]<<" ";

	}
	cout<<endl;
}
//file1.cpp
int main()
{
	Arraymax a;
	a.set();
	a.maxs();
	a.show();
	a.swap();
	a.del1();
	a.del2();
	return 0;
}

