#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
};

class Derived : public Base
{
	public:
		int i,j;
};

int main()
{
	//static memory 
	Base bobj;
	Derived dobj;
	
	//dynamic memory
	Base *bp = new Base();
	Derived *dp = new Derived();
	
	
	
	return 0;
}