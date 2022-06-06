//Program to accept number and return summation of even digits in that number and display even digits

#include<stdio.h>

int SumEvenDigits(int iNo)
{
  int iCnt = 0, iDigit = 0, iSum = 0;
  
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  
  while(iNo > 0)
  {
  iDigit = iNo%10;
  if((iDigit % 2) ==0)
  {
  printf("%d",iDigit);
  iSum = iSum + iDigit;
  }
  iNo = iNo/10;
  }
  
  return iSum;
}

int main()
{
  int iValue = 0, iRet = 0;
 
  printf("Enter number\n");
  scanf("%d",&iValue);
  
  iRet = SumEvenDigits(iValue);
 
  if(iRet != 0)
  {
    printf("\nSum of even digits is : %d",iRet);
  }
  else
  {
    printf("There is no even number");
  }
  return 0;
}


//Time complexity : O(N)...N is no of digits

