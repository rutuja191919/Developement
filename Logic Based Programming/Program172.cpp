#include<iostream>
using namespace std;

template<class T>
void SwapA(T *p, T *q)
{
 T temp;
 temp = *p;
 *p = *q;
 *q = temp;
}

int main()
{
	int iNo1 = 11, iNo2 = 21; 
    cout<<"Before swap data is : "<<iNo1<<" "<<iNo2<<endl;
	SwapA(&iNo1,&iNo2);
    cout<<"After swap data is : "<<iNo1<<" "<<iNo2<<endl;
	
	float fNo1 = 11.10, fNo2 = 21.0; 
    cout<<"Before swap data is : "<<fNo1<<" "<<fNo2<<endl;
	SwapA(&fNo1,&fNo2);
    cout<<"After swap data is : "<<fNo1<<" "<<fNo2<<endl;
	
	char cNo1 = 'B', cNo2 = 'E'; 
    cout<<"Before swap data is : "<<cNo1<<" "<<cNo2<<endl;
	SwapA(&cNo1,&cNo2);
    cout<<"After swap data is : "<<cNo1<<" "<<cNo2<<endl;
	
	return 0;
}