#include<stdio.h>

struct Demo
{
	int iNo;
	float fValue;
	int iValue;
};

//Array in structure
struct Hello
{
	int Arr[2];
	float Brr[3];
};
int main()
{
	//Array of Structure
	struct Demo Arr[4]; 
	
	//Reading : Arr is one dimensional array which contains 4 elements each element is of type struct Demo
	//where Demo is the structure which contains 3 elements one is integer, one is float and another is double 
	
	Arr[0].iNo = 11;
	Arr[0].fValue = 10.11;
	Arr[0].iValue = 21;
	
	Arr[1].iNo = 51;
	Arr[1].fValue = 20.11;
	Arr[1].iValue = 101;
	
	printf("%d\n",Arr[0].iNo);
	printf("%d\n",Arr[1].iValue);
	
	struct Hello obj;
	
	obj.Arr[0] = 80;
	obj.Arr[1] = 10;
	
	obj.Brr[0] = 90.11;
	obj.Brr[1] = 50.87;
	obj.Brr[2] = 21.98;
	
	printf("%d\n",obj.Arr[1]);
	printf("%f\n",obj.Brr[1]);
	
	return 0;
}
	