#include<stdio.h>
#include<stdbool.h>

int CountFactors(int iNo)
{
 int iCnt = 0, iFactCnt = 0;
 for(iCnt = 2; iCnt<=(iNo/2); iCnt++)
  {
    if(iNo % iCnt == 0)
    {
      iFactCnt++;
    }
  }
  return iFactCnt;
}

bool ChkPrime(int iNo)
{
 int iRet = 0;
 
 iRet = CountFactors(iNo);
 if(iRet == 0)
 {
   return true;
 }
 else
 {
   return false;
 }
}

int main()
{
  int iValue = 0;
  bool bRet = 0;
   
  printf("Enter number\n");
  scanf("%d",&iValue);
  
  bRet = ChkPrime(iValue);
  
  if(bRet == true)
  {
   printf("%d is prime number\n",iValue);
  }
  else
  {
   printf("%d is not prime number\n",iValue);
  }
  
  return 0;
}
