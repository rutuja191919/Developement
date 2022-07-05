#include<iostream>
using namespace std;

template<class T>
T Maximum(T Arr[], int iSize )
{
	int cnt = 0;
	T Max;

	Max = Arr[0];

	for(cnt = 1; cnt < iSize; cnt++)
	{
		if(Arr[cnt] > Max)
		{
			Max = Arr[cnt];
		}
	}
	return Max;
}

int main()
{
	int Brr[] = {-80,-100,-90,-85,-95};
	int iRet = 0;
	iRet = Maximum(Brr,5);
	cout<<"Maximum number is : "<<iRet<<endl;

    float Crr[] = {11.12,32.23,43.54,32};
    float fRet = 0.0;	
	fRet = Maximum(Crr,5);
	cout<<"Maximum number is : "<<fRet<<endl;

	return 0;
}