#include<stdio.h>

///////////////////////////////////////////////////
//
// ACCEPT TWO NOS PERFORM ADDITION AND SUBSTRACTION
//
///////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
	auto int iAns = 0;
	iAns = iNo1+iNo2;
	return iAns;
}

int Substraction(int iNo1, int iNo2)
{
	auto int iAns = 0;
	iAns = iNo1-iNo2;
	return iAns;
}

int main()
{
	auto int iRet = 0;
	int iValue1 = 0,iValue2 = 0;
	
	printf("Enter two numbers\n");
	scanf("%d %d",&iValue1,&iValue2);
	
	iRet = Addition(iValue1,iValue2);
	printf("\nAddition of two numbers is %d\n",iRet1);
	
	iRet = Substraction(iValue1,iValue2);
	printf("\nSubstraction of two numbers is %d\n",iRet2);
	
	return 0;
}