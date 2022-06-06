#include<iostream>
using namespace std;

class Demo
{
	public:
		int x;
		int y;
		
		Demo(int i = 0, int j = 0)
		{
			x = i;
			y = j;
		}
	
};

void operator ++(Demo &op) //pre
{
	cout<<"Inside first\n";
	op.x++;
	op.y++;
	
}

Demo operator ++(Demo &op,int)  //post
{
	cout<<"Inside second\n";
	op.x++;
	op.y++;
	return Demo(op.x-1,op.y-1);
	
}

int main()
{
	Demo obj1(10,20);
	Demo obj2(10,20);
	Demo robj(0,0);


	++obj1;  //without dummy
	
	cout<<obj1.x<<"\n"<<obj1.y<<"\n";
	
    robj = obj2++;  //with dummy
	
	cout<<robj.x<<"\n"<<robj.y<<"\n";
	cout<<obj2.x<<"\n"<<obj2.y<<"\n";
	
	return 0;
}