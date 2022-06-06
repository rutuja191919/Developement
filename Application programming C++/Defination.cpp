#include<iostream>
using namespace std;

class Demo
{
	public:
		int i,j;
		
		void gun()
		{
			cout<<"Inside gun\n";
		}
		void fun()  //defination
		{
			cout<<"Inside fun\n";
		}
		
		void gun()  //defination
		{
			cout<<"Inside gun\n";
		}
};

int main()
{
	return 0;
}