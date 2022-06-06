//Program to accept two integers and return power 

#include "Header57.h"

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

