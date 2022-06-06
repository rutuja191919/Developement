#include<iostream>
using namespace std;
 
class Demo
{
	public:
		int i;
		const int j;  //compiler c++11 dependent error yeu shakto constant characteristics
		
		Demo(int a, int b) : j(b)
		{
			i = a;
		}
		
		void fun()
		{
			cout<<"Inside fun\n";
			i++;  //Allowed
			//j++; Not allowed
		}
		
		//b is constant input arguments 
		void gun(int a, const int b) const //constant function
		{
			int x = 10;
			const int y = 20;
			
			cout<<"Inside gun\n";
			
			//i++;   Not allowed
			//j++;   //Not allowed
			
			x++;     //Allowed not class characteristics
			//y++;   //Not allowed
			cout<<x<<"\n";
			
			a++;      //Allowed
			//b++    Not allowed
			cout<<b<<"\n";
		}
		
};

int main()
{
	const int s = 5;
	const int y = 6;
	
	Demo obj(11,21);
	
	const Demo obj2(11,21);
	
	obj.fun();
	obj.gun(10,20);
	obj.gun(20,40);
	
	//obj2.fun();
	obj2.gun(10,20);
	
	Demo obj3(s,y); 
	
	
	return 0;
}