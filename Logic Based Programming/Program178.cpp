#include<iostream>
using namespace std;

class ArrayX
{
	public:
	 int *Arr;
	 int size;

	 ArrayX(int iValue)
	 {
		size = iValue;
		Arr = new int[size];
	 }
	 ~ArrayX()
	 {
		delete []Arr;
	 }

	 void Accept()
	 {
      cout<<"Enter the values : "<<endl;
	  for(int i = 0; i < size; i++)
	  {
		cin>>Arr[i];
	  }
	 }

	 void Display()
	 {
      cout<<"The Values are : "<<endl;
	  for(int i = 0; i < size; i++)
	  {
		cout<<Arr[i]<<endl;
	  }
	 }
	 int Maximum()
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
};
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