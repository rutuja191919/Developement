#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
	public:
		int i;
	protected:
		int j;
	private:
		int k;
		
	public:
		Demo()
		{
			i = 10;
			j = 20;
			k = 30;
		}
		
		void gun();
		
	friend class Hello;
};

class Hello
{
	public:
		void fun();
		void gun();
		
	friend class Demo;
};

void Hello::fun()  //naked function
{
	Demo dobj1;
	cout<<dobj1.i<<"\n";
	cout<<dobj1.j<<"\n";  
	cout<<dobj1.k<<"\n"; 
}

void Hello::gun()
{
	Demo dobj1;
	cout<<dobj1.i<<"\n";
	cout<<dobj1.j<<"\n";  
	cout<<dobj1.k<<"\n"; 
}

int main()
{
	Hello hobj;
	hobj.fun();
	hobj.gun();
	//fun();

	return 0;
}