#include<iostream>
using namespace std;

class Demo
{
	public:
	 int x;  //Characteristics
	 int y;  //Characteristics

	//Demo(Demo *this, int a, int b)
	Demo(int a, int b) //parameterised constructor with default arguments  
	{
		x = a;
		cout<<this->x<<"\n";
		y = b;
	}

	//void fun(Demo *this, int no)  //conversion to C 
	void fun(int no)
	{
		cout<<this->x<<"\n";
		cout<<"Inside fun\n";
	}
};
int main()
{	
	Demo obj(11,21);  //11, 21   Demo(&obj,11,21)
	obj.fun(51);     //fun(&obj,51)  fun(100,51)  internally conversion to C
	
	return 0;
}