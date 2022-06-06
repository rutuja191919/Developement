#include<iostream>
using namespace std;
 
class Demo
{
	public:
		int i;
		const int j;  //compiler dependent error yeu shakto 
		const int k;
		
		/*Demo() : j(20)  //Member initialization
		{ 
		  //control goes INTO constructor after object creation
		  // thus initialize before control goes into constructor
		  
			i = 10;
			//j = 20;
		}*/
		
		Demo(int a, int b, int c) : j(b),k(c)
		{
			i = a;
			cout<<"Inside Parameterized\n";
		}
};

int main()
{
	Demo obj(11,21,31);
	
	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";
	cout<<obj.k<<"\n";
	
	obj.i++;
	cout<<obj.i<<"\n";
	
	return 0;
}