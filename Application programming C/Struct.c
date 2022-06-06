#include<stdio.h>

//Structure Declaration
struct Demo
{
	int iNo;
	float fValue;
	int iValue;
};

int main()
{
	//Structure Object Creation
	struct Demo obj;  //memory allocation
	
	//Object Initialization
	obj.iNo = 11;
	obj.fValue = 21.11;
	obj.iValue = 20;
	
	//access the value in obj
	printf("iNo = %d\n",obj.iNo);
	printf("iValue = %d\n",obj.iValue);
	printf("fValue = %f\n",obj.fValue);
	
	return 0;
}