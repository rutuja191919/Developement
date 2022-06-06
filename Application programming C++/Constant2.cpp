#include<iostream>
using namespace std;
 
class Demo
{
	public:
		int i;
		const int j;  //compiler dependent error yeu shakto 
		
		Demo() : j(20)  //Member initialization
		{ 
		  //control goes INTO constructor after object creation
		  // thus initialize before control goes into constructor
		  
			i = 10;
			//j = 20;
		}
};

int main()
{
	Demo obj;
	
	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";
	
	return 0;
}