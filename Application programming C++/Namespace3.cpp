#include<iostream>
namespace Marvellous
{	
	void fun()
	{
		std::cout<<"Inside marvellous fun\n";
	}
}

namespace Infosystems
{
	void fun()
	{
		std::cout<<"Inside infosystems fun\n";
	}
}

int main()
{	
	
	std::cout<<"Jay Ganesh\n"; 
	
	//fun()   ambiguity
	Infosystems::fun();
	
	return 0;
}