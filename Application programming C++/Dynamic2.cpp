#include<iostream>
using namespace std;

class Demo 
{
	public :
	 int x;
	 int y;
	 
	Demo()
	{
		cout<<"Inside Default Constructor\n";
	}
	~Demo()
	{
		cout<<"Inside Destructor\n";
	}
	void fun()
	{
		cout<<"Inside Fun\n";
	}
};

int main()
{
	Demo obj;    //static object creation
	
	Demo *ptr =NULL;
	
	ptr = new Demo;    //Dynamic allocation
 	
	obj.fun();
	
	ptr->fun();
	
	//delete ptr;
	
	return 0;
}