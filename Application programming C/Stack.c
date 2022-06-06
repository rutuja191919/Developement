#include<stdio.h>

/////////////////////////////////////////////////
//
// Function Name : Addition
// Input : 		   Two Integers
// output :        Integer
// Description :   It is used to perform addition
// Author : 	   Rutuja Rajesh Chaudhari
// Date :          05/03/2022
//
/////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
	auto int iAns = 0;
	
	iAns = iNo1 + iNo2;
	return iAns;
	
}

////////////////////////////////////////////////
//
// Entry point function for addition application
//
////////////////////////////////////////////////

int main()
{
	auto int iValue1 = 0, iValue2 = 0;
	auto int iRet = 0;
	
	printf("Enter first number\n");
	scanf("%d",&iValue1);
	
	printf("Enter second number\n");
	scanf("%d",&iValue2);

	iRet = Addition(iValue1, iValue2);

	printf("Addition is %d",iRet);
	
	return 0;
}