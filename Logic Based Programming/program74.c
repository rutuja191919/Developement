//Program to accept n numbers and then find frequency of the number accepted from user

#include<stdio.h>
#include<stdlib.h>

int ChkFrequency(int Arr[],int iLength, int iNo)
{
  register int iCnt = 0;
  auto int iFrequency = 0;
  
  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    if(iNo == Arr[iCnt])
    {
      iFrequency++;
    }
  }
  return iFrequency;
}

int main()
{
  auto int iSize = 0, iRet = 0, iValue = 0;
  register int iCnt = 0;
  auto int *iPtr = NULL;
  
  printf("Enter the number of elements\n");
  scanf("%d",&iSize);
   
  iPtr = (int *)malloc(iSize*sizeof(int));
  
  printf("Enter the elements\n");
  
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    scanf("%d",&iPtr[iCnt]);
  }
  
  printf("Enter the element to check frequency\n");
  scanf("%d",&iValue);
  
  iRet = ChkFrequency(iPtr,iSize,iValue);
  
  printf("Frequency of %d is: %d\n",iValue,iRet);  
  
  free(iPtr);
  
  return 0;
}
