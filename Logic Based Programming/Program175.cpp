#include<iostream>
using namespace std;

template<class T>
void Display(T Arr[], int Size)
{
	int Cnt;
	for(Cnt = 0; Cnt < Size; Cnt++)
	{
		cout<<Arr[Cnt]<<endl;
	}
}

int main()
{
	int Brr[] = {10,20,30,40,50};
    float Crr[] = {11.12,32.23,43.54,32};

	Display(Brr,5);

    Display(Crr,4);

	return 0;
}