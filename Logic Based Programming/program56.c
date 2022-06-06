//Program to accept two integers and return power 

#include<stdio.h>

typedef unsigned long int ULONGINT;

ULONGINT Power(int iNo1, int iNo2)
{
  register int iCnt = 0;
  ULONGINT LMult = 1;
  
  for(iCnt = 1; iCnt <= iNo2; iCnt++)
  {
    LMult = iNo1 * LMult;
  }
  return LMult;
}

int main()
{
  auto int iValue = 0, iPower = 0;
  auto ULONGINT LRet = 0;
 
  printf("Enter base\n");
  scanf("%d",&iValue);
  
  printf("Enter power\n");
  scanf("%d",&iPower);
  
  LRet = Power(iValue, iPower);
  
  printf("Power is : %ld",LRet);
  
  return 0;
}


//Time complexity : O(N) ...where N = No2

