#include<stdio.h>

int Factorial(int iNo)
{
 register int iCnt = 0;
 int iFact = 1;
 
 for(iCnt = iNo; iCnt >=1; iCnt--)
 {
  //iFact = iFact * iCnt;
  iFact *= iCnt;
 }
 
 return iFact;
}

int main()
{
 int iValue = 0;
 int iRet = 0;
 
 printf("Enter the number\n");
 scanf("%d",&iValue);
 
 iRet = Factorial(iValue);
 printf("Factorial is %d\n",iRet);
 
 return 0;
}
