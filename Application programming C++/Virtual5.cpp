#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
		
		virtual void fun()
		{
			cout<<"Inside fun\n";
		}
		virtual void gun()
		{
			cout<<"Inside gun\n";
		}
		void sun()
		{
			cout<<"Inside sun\n";
		}
		virtual void run()
		{
			cout<<"Inside gun\n";
		}
};
class Derived : public Base
{
	public:
		int i,j;
		
		void sun()
		{
			cout<<"Inside sun of child\n";
		}
		void fun()
		{
			cout<<"Inside fun of child\n";
		}
		virtual void gun()
		{
			cout<<"Inside gun of child\n";
		}
		virtual void mun()
		{
			cout<<"Inside mun\n";
		}			
};

int main()
{
	Derived der;
	Base *bp = new Derived();  //Upcasting
	bp->fun();
	bp->gun();
	bp->sun();   //Not allowed
	
	//der->run();

	cout<<"Size of Base : "<<sizeof(Base)<<"\n";
	cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";
	
	return 0;
}