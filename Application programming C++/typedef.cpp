using namespace std;
#include<iostream>

int main()
{
	typedef int NUMBER;
	typedef char LETTER;
	
	NUMBER no = 10;
	LETTER ch = 'M';
	
	//const int *p = &no
	typedef const int * CPTR;
	CPTR p = &no;
	
	cout<<*p<<"\n";
	
	cout<<sizeof(no)<<"\n";
	cout<<no<<"\n";
	
	cout<<sizeof(ch)<<"\n";
	cout<<ch<<"\n";
	
	return 0;
}