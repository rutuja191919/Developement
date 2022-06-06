#include<iostream>
using namespace std;

class Demo
{
	public:
	 int i;
	private:
	 int j;
	protected:
     int k;
};

class Hello : public Demo
{
	public:
	 int x;
	private:
	 int y;
	protected:
	 int z;
};

int main()
{
	cout<<sizeof(Demo)<<"\n";
	cout<<sizeof(Hello)<<"\n";
	
	Demo dobj;
	cout<<dobj.i<<"\n";
	
	Hello hobj;
	cout<<hobj.x<<"\n";
	
	return 0;
}