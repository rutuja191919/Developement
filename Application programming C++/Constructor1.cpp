#include<iostream>

using namespace std;

class Demo
{
	public :
		int x;
		int y;
		
	Demo()   //Default Constructor
	{
		cout<<"Inside Default Constructor\n";
		x = 0;
		y = 0;
	}
	
	Demo(int i, int j)   //Parameterized Constructor
	{
		cout<<"Inside Parameterized Constructor\n";
		x = i;
		y = j;
	}
	
	Demo(Demo &ref) //Copy Constructor
	{
		cout<<"Inside Copy Constructor\n";
	}
	
	~Demo()   //Destructor
	{
		cout<<"Inside Destructor\n";
	}
};

int main()
{
	cout<<"Inside Main\n";
	Demo obj1(11,21);  //Memory llocation at this time ..constructor called
	Demo obj2(42,51);
	cout<<"End of Main\n";
	
	cout<<sizeof(obj1)<<"\n";
	cout<<sizeof(obj2)<<"\n";
	
	cout<<"Value of X in obj1 : "<<obj1.x<<"\n";
	cout<<"Value of X in obj2 : "<<obj2.x<<"\n";
	
	
	return 0;  //Destructor called
}