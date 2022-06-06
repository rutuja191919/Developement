#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
		
		void fun()   //concrete non virtual
		{
			cout<<"Base fun\n";
		}
		
		virtual void gun()  //concrete virtual 
		{
			cout<<"Base gun\n";
		}
		
		virtual void sun() //concrete virtual
		{
			cout<<"Base sun\n";
		}
		
		virtual void run() = 0;  //abstract virtual

};

class Derived : public Base
{
	public:
		int i,j;
		
		void fun()    //Redefination
		{
			cout<<"Derived fun\n";
		}
		
		virtual void gun()   //overriding - concrete virtual
		{
			cout<<"Derived gun\n";
		}
		
		void run()   //overriding - concrete function 
		{
			cout<<"Derived run\n";
		}
	
};

int main()
{
	//Base bobj;  //Not allowed
	Derived dobj;  //allowed
	
	Base *bp = NULL;
	
	bp = &dobj;  //static upcasting
	
	cout<<sizeof(Base)<<"\n";
	cout<<sizeof(Derived)<<"\n";
	
	bp->fun();
	bp->gun();
	bp->sun();
	bp->run();
	
	return 0;
}