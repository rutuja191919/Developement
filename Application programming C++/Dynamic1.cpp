#include<iostream>

using namespace std;

int main()
{
	int Arr[10];  //static memory allocation
	
	int *p = NULL;
	
	//p = (int *)malloc(sizeof(int)*10); //dynamic memory allocation

	p = new int[10];
	
	if(p == NULL)
	{
		cout<<"Unable to allocate memory\n";
	}
	else
	{
		cout<<"Memory gets allocated successfully : "<<p<<"\n";
	}
	
	delete []p;
	return 0;
}