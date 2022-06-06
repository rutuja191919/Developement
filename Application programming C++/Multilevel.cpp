#include<iostream>
using namespace std;

class Base
{
	public:
		int i,j;
		Base()
		{
			cout<<"Base constructor\n";
		}
		
		~Base()
		{
			cout<<"Base destructor\n";
		}
};

class Derived : public Base
{
	public:
		int a,b,c;
		Derived()
		{
			cout<<"Derived constructor\n";
		}
		
		~Derived()
		{
			cout<<"Derived Destructor\n";
		}
	
};

class Derived1 : public Derived
{
	public:
	 int k,l;
	 Derived1()
	 {
		 cout<<"Derived1 constructor\n";
	 }
	 
	 ~Derived1()
	 {
		 cout<<"Derived1 Destructor\n";
	 }
};

int main()
{
	//Derived dobj;  //20 byte memory single level 
	
	Derived1 dobj; //28 bytes memory multilevel
	
	return 0;
}

