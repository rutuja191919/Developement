//Program to accept number and return reverse number of that number

#include<stdio.h>

int ReverseNumber(int iNo)
{
  int iDigit = 0, iRev = 0;
  
  while(iNo>0)
  {
    iDigit = iNo % 10;
    iRev = iRev*10 + iDigit;
    iNo = iNo / 10;
  }
  
  return iRev;
}

int main()
{
  int iValue = 0, iRet = 0;
 
  printf("Enter number\n");
  scanf("%d",&iValue);
  
  iRet = ReverseNumber(iValue);
  
  printf("Reverse number is : %d",iRet);
  
  return 0;
}




