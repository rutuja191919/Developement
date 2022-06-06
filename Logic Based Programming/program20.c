//program to display 1 to N and N is taken from user

#include<stdio.h>

void Display(int iNo)
{
  int iCnt = 0;
  
  if(iNo < 0)   //Updater
  {
    iNo = -iNo;
  }
  
  printf("Output is : \n");
  for(iCnt = 1; iCnt<=iNo; iCnt++)
  {
     printf("%d\n",iCnt);
  } 
}

int main()
{
   int iValue = 0;
   
   printf("Please Enter Number\n");
   scanf("%d",&iValue);
   
   Display(iValue);
   
   return 0;
}
