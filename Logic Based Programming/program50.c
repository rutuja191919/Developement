//Program to accept number and return summation of digits in that number
//Input : 432       
//Output : 9

#include<stdio.h>

int SumDigits(int iNo)
{
  int iCnt = 0, iDigit = 0, iSum = 0;
  
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  
  while(iNo > 0)
  {
  iDigit = iNo%10;
  iSum = iSum + iDigit;
  iNo = iNo/10;
  }
  
  return iSum;
}

int main()
{
  int iValue = 0, iRet = 0;
 
  printf("Enter number\n");
  scanf("%d",&iValue);
  
  iRet = SumDigits(iValue);
  
  printf("Sum of digits is : %d",iRet);
  return 0;
}


//Time complexity : O(N)...N is no of digits

