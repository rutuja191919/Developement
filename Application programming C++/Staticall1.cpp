#include<iostream>
using namespace std;

class Demo
{
	public:
		int i,j;        //Instance variable (Non static) 
		static int x;   //Class variable    (static)
	
		Demo(int a = 10,int b = 20)
		{
			cout<<"Inside Constructor\n";
			
			this->i = a;
			this->j = b;
		}
		
		//void fun(Demo *this,int no);
		void fun(int no)
		{
			cout<<"Inside non static fun\n";
			cout<<this->i<<"\n";
			cout<<this->j<<"\n";
			//cout<<this->x<<"\n";
		}
		
		//static void gun(int value);
		static void gun(int value)
		{
			cout<<"Inside static gun function\n";
		}
};

int Demo::x = 30;

int main()
{
	cout<<Demo::x<<"\n";
	Demo::gun(11);
	
	Demo obj(11);
	
	obj.fun(21);  //fun(&obj,21) internal conversion
	
	obj.gun(30); //Demo::gun(30)
	cout<<sizeof(obj)<<"\n";
	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";
	
	return 0;
}