#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
	public:
	 T *Arr;
	 int size;

	 ArrayX(int iValue);
	 ~ArrayX();
	 void Accept();
	 void Display();
	 T Maximum();

};

template<class T>
ArrayX<T> :: ArrayX(int iValue)
{
	size = iValue;
	Arr = new T[size];
}

template<class T>
ArrayX<T> :: ~ArrayX()
{
	delete []Arr;
}

template<class T>
void ArrayX<T> :: Accept()
{
  cout<<endl<<"Enter the values : "<<endl;
  for(int i = 0; i < size; i++)
  {
   cin>>Arr[i];
  }
}

template<class T>
void ArrayX<T> :: Display()
{
  cout<<"The values are : "<<endl;
  for(int i = 0; i < size; i++)
  {
  cout<<Arr[i]<<endl;
  }
}

template<class T>
T ArrayX<T> :: Maximum()
{
  T Max = Arr[0];

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
	ArrayX <int>obj1(5);
	int iRet = 0;
	obj1.Accept();
	obj1.Display();
    iRet = obj1.Maximum();
	cout<<"The Maximum number is : "<<iRet;

    ArrayX <float>obj2(4);
    float fRet = 0;
	obj2.Accept();
	obj2.Display();
    fRet = obj2.Maximum();
	cout<<"The Maximum number is : "<<fRet;


	return 0;
}