//Program to check whether number is armstrong or not

#include<stdio.h>
#include<stdbool.h>

bool ChkArmstrong(int iNo)
{
  int iCnt = 0, iTemp = 0, iDigCnt = 0, iDigit = 0, iSum = 0,  iMult = 0;
  
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  
  iTemp = iNo;  
  
  //Calculate no of digits
  while(iNo>0)
  {
    iDigCnt++;
    iNo = iNo/10;
  }

  iNo = iTemp; //again reassign value to iNo
  
  while(iNo>0)
  {
   iDigit = iNo % 10;
   
   iMult = 1;
   for(iCnt = 1; iCnt <= iDigCnt; iCnt++)
   {
    iMult = iDigit * iMult;
   }
   iSum = iSum + iMult;
   
   iNo = iNo/10;
  }
  
  if(iSum == iTemp)
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
   bool bRet = false;
   
   printf("Enter Number\n");
   scanf("%d",&iValue);
   
   bRet = ChkArmstrong(iValue);
   
   if(bRet == true)
   {
     printf("Number is armstrong\n");
   }
   else
   {
     printf("Number is not armstrong\n");
   }
   
}
