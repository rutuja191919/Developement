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

Demo operator +(Demo op)
{
	return op;
	
}

Demo operator -(Demo op)
{
	return Demo(-op.x,-op.y);
}

int main()
{
	Demo obj1(11,-21);
	Demo obj2(51,-101);
	Demo robj(0,0);
	Demo robj1(0,0);
	
	robj = +obj1;   // -(obj1)
	cout<<robj.x<<"\n";
	cout<<robj.y<<"\n";
	
	robj1 = -obj2;  // -(obj2)
	cout<<robj1.x<<"\n";
	cout<<robj1.y<<"\n";
	
	
	return 0;
}