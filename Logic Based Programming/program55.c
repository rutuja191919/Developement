//Program to accept number and check whether number is palindrome or not

#include<stdio.h>
#include<stdbool.h>

bool ChkPalindrome(int iNo)
{
  int iDigit = 0, iRev = 0, iTemp = 0;
  
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  
  iTemp = iNo;
  
  while(iNo > 0)
  {
    iDigit = iNo % 10;
    iRev = iRev*10 + iDigit;
    iNo = iNo / 10;
  }
  
  if(iRev == iTemp)
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
  bool iRet = false;
 
  printf("Enter number\n");
  scanf("%d",&iValue);
  
  iRet = ChkPalindrome(iValue);
  
  if(iRet == true)
  {
   printf("%d is palindrome number\n",iValue);  
  }
  else
  {
    printf("%d is not palindrome number\n",iValue);
  }
  return 0;
}




