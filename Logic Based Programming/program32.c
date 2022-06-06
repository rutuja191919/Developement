#include<stdio.h>
#include<stdbool.h>

bool ChkPerfect(int iNo)
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
  if(iSum == iNo)
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
  bool bRet = 0;
   
  printf("Enter number\n");
  scanf("%d",&iValue);
  
  bRet = ChkPerfect(iValue);
  if(bRet == true)
  {
   printf("%d is perfect number\n",iValue);
  }
  else
  {
       printf("%d is not perfect number\n",iValue);
  }
  return 0;
}
