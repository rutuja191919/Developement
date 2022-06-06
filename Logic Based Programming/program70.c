//Program to accept n numbers and then find largest number amongst them  - works for positive only

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
  register int iCnt = 0;
  auto int iMax = 0;
  
  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    if(iMax < Arr[iCnt])
    {
      iMax = Arr[iCnt];
    }
  }
  return iMax;
}

int main()
{
  auto int iSize = 0, iRet = 0;
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
  
  iRet = Maximum(iPtr,iSize);
  
  printf("Largest of all numbers is: %d\n",iRet);  
  
  free(iPtr);
  
  return 0;
}
