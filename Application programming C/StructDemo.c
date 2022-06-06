#include<stdio.h>

//Structure declaration
struct Demo
{
	int iNo;
	float fValue;
	int iValue;
	double dValue;	
};

int main()
{
	//structure object creation
	//struct Demo obj1 = {11,23.45,33,21.43}; //1. Member Initialization List
	
	struct Demo obj; 
	struct Demo *ptr = &obj;
	//object initialization //2 Member by Member Initialization
	
	ptr -> iNo = 20;
	ptr -> iValue = 30;
	ptr -> fValue = 12.11;
	
	//obj.iNo = 10; 
	//obj.fValue = 22.10;
	//obj.iValue = 21;
	//obj.dValue = 20.11;
	
	printf("%d\n",ptr -> iNo);
	printf("%d\n",obj.iNo);
	//printf("%d\n",obj1.iNo);
	printf("%d\n",sizeof(obj));
	
	return 0;
}