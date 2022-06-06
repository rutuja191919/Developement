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
		x = ref.x;
		y = ref.y;
	}
	
	~Demo()   //Destructor
	{
		cout<<"Inside Destructor\n";
	}
};

int main()
{
	Demo obj1(11,21);
	
	Demo obj2(obj1); //Calling of copy constructor
	
	cout << obj2.x <<"\n";
	cout << obj2.y <<"\n";
	
	return 0;  //Destructor called
}