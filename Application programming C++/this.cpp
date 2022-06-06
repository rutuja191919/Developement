#include<iostream>
using anmespace std;

class Demo
{
	public:
	 int x;
	 int y;

	Demo(int a = 10, int b = 20); //parameterised constructor with default arguments  
	{
		x = a;
		y = b;
	}
};
int main()
{
	Demo obj1; //10, 20 
	Demo obj2(11);  //11, 20
	Demo obj3(11,21);  //11, 21
	
	return 0;
}