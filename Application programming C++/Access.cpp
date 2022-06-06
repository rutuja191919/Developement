#include<iostream>
using namespace std;

class Demo 
{
	int i; //by default private in c++
	public:
	 int x;
	
	private:
	 int y;
	  
	public:
		Demo()
		{
			x = 10;
			y = 20;
			i = 30;
		}
		
		void fun() //object oriented functions
		{
			cout<<"Inside Fun\n";
			cout<<i; //ALLOWED
		}
		
	private:
		void gun() //object oriented functions
		{
			cout<<"Inside Gun\n";
			cout<<y;  //ALLOWED
		}
};

int main()  //naked function
{
	Demo obj;
	
	cout<<obj.x<<"\n";  //ALLOWED
	//cout<<obj.y<<"\n";  //NOT ALLOWED
	//cout<<obj.i<<"\n";  //NOT ALLOWED
	
	obj.fun();
	//obj.gun();  //NOT ALLOWED
	
	return 0;
}