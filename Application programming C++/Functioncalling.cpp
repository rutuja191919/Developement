#include<iostream>
using namespace std;

void CallValue(int no)
{
	no++;
}

void CallAddress(int *p)
{
	(*p)++;
}

void CallReference(int &ref)
{
	ref++;
}

int main()
{
	int a = 10,b = 10, c = 10;
	
	CallValue(a); //CallValue(10)
	cout<<"Value of a :"<<a<<"\n";
	
	CallAddress(&b); //CallAddress(200)
	cout<<"Value of b :"<<b<<"\n";
	
	CallReference(c); //CallReference(c)
	cout<<"Value of c :"<<c<<"\n";

	return 0;
}