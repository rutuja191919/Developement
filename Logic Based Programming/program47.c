//Program to accept number and display digits of that number
/*Input : 7856       
Output : 
6
5
8
7*/

#include<stdio.h>

void DisplayDigits(int iNo)
{
  int iDigit = 0;
  
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  
  while(iNo > 0)
  {
  iDigit = iNo%10;
  printf("%d\n",iDigit);
  iNo = iNo/10;
  }
}

int main()
{
  int iValue = 0;
  
  printf("Enter number\n");
  scanf("%d",&iValue);
  
  DisplayDigits(iValue);
  
  return 0;
}


//Time complexity : O(N)...N is no of digits

