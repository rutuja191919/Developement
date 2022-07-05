//Digits addition in recursion

#include<stdio.h>

int Sum(int iNo)
{
 static int iSum = 0;
 
 if(iNo > 0)
 {
  iSum = iSum + (iNo % 10);
  iNo = iNo/10;
  Sum(iNo);
 }
 return iSum;
}

int main()
{
  int iValue = 0;
  int iRet = 0;
  
  printf("Enter the number\n");
  scanf("%d",&iValue);
  
  iRet = Sum(iValue);
  
  printf("Addition of digits is : %d\n",iRet);
  
  return 0;
}
