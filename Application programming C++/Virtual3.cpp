#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
		
		void fun()
		{
			cout<<"Inside fun\n";
		}
		void gun()
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
			cout<<"Inside sun\n";
		}
		void fun()
		{
			cout<<"Inside fun of child\n";
		}
};

int main()
{
	Base *bp = new Derived();  //Upcasting
	bp->fun();
	bp->gun();
	//bp->sun();   //Not allowed
	
	cout<<"Size of Base : "<<sizeof(Base)<<"\n";
	cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";
	
	return 0;
}