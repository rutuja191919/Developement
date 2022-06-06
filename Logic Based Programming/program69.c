#include<stdio.h>
#include<stdlib.h>

int SummationNumber(int Arr[],int iLength)
{
  int iCnt = 0, iSum = 0;
  
  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    iSum = iSum + Arr[iCnt];
  }
  return iSum;
}

int main()
{
  int iSize = 0, iCnt = 0, iRet = 0;
  int *iPtr = NULL;
  
  printf("Enter the number of elements\n");
  scanf("%d",&iSize);
  
  iPtr = (int *)malloc(iSize*sizeof(int));
  
  printf("Enter the elements\n");
  
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    scanf("%d",&iPtr[iCnt]);
  }
  
  iRet = SummationNumber(iPtr,iSize);
  
  printf("Addition of numbers is: %d\n",iRet);  
  
  free(iPtr);
  
  return 0;
}
