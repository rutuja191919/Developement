#include<stdio.h>

int AdditionFactors(int iNo)
{
  int iCnt = 0, iSum = 0;
  
  if(iNo < 0)  //Updater
  {
    iNo = -iNo;
  }
  for(iCnt = 1; iCnt<=(iNo/2) ;iCnt++)
  {
    if(iNo % iCnt == 0)
    {
      iSum = iSum + iCnt;
    }
  }
  return iSum;
}

int main()
{
  int iValue = 0;
  int iRet = 0;
   
  printf("Enter number\n");
  scanf("%d",&iValue);
  
  iRet = AdditionFactors(iValue);
  
  printf("Addition is : %d",iRet);
  
  return 0;
}
