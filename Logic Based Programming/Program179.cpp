#include<iostream>
using namespace std;

class ArrayX
{
	public:
	 int *Arr;
	 int size;

	 ArrayX(int iValue);
	 ~ArrayX();
	 void Accept();
	 void Display();
	 int Maximum();

};

ArrayX :: ArrayX(int iValue)
{
	size = iValue;
	Arr = new int[size];
}

ArrayX :: ~ArrayX()
{
	delete []Arr;
}

void ArrayX :: Accept()
{
  cout<<"Enter the values : "<<endl;
  for(int i = 0; i < size; i++)
  {
   cin>>Arr[i];
  }
}

void ArrayX :: Display()
{
  cout<<"The values are : "<<endl;
  for(int i = 0; i < size; i++)
  {
  cout<<Arr[i]<<endl;
  }
}

int ArrayX :: Maximum()
{
  int Max = Arr[0];

  for(int i = 0; i < size; i++)
  {
  	if(Arr[i] > Max)
	{
		Max = Arr[i];
	}
  }
return Max;
}

int main()
{ 
	ArrayX obj1(5);
	int iRet = 0;

	obj1.Accept();
	obj1.Display();

    iRet = obj1.Maximum();
	cout<<"The Maximum number is : "<<iRet;

	return 0;
}