#include<iostream>
using namespace std;

class Demo
{
	public:
		int i,j;
		
		void fun()  //defination
		{
			cout<<"Inside fun\n";
		}
		
		void fun(int no)  //Overloaded Defination
		{
			cout<<"Inside gun\n";
		}
};

int main()
{
	return 0;
}