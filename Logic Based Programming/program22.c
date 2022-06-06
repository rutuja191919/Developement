//program of summation of N numbers

#include<stdio.h>

///////////////////////////////////////
// function name : Sum
// description   : used to perform summation
// input         : integer
// output        : integer
// date          : 19/04/2022
// author        : Rutuja Chaudhari
////////////////////////////////////////

int Summation(int iNo)
{
   int iSum = 0, iCnt = 0;
   
   if(iNo < 0)   //Updater
   {
     iNo = -iNo;
   }

   for(iCnt = 1; iCnt<= iNo ; iCnt++)
   {
      iSum = iSum + iCnt;
   }
   
   return iSum;
}

int main()
{
   int iValue = 0, iRet = 0;
   
   printf("Enter the number\n");
   scanf("%d",&iValue);
   
   iRet = Summation(iValue);
   
   printf("The summation is : %d\n",iRet);
   
   return 0;
}
