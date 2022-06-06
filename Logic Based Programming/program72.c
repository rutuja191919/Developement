//Program to accept n numbers and then find minimum number amongst them - Works only for positive numbers

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
  register int iCnt = 0;
  auto int iMin = 0;
  
  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    if(iMin > Arr[iCnt])
    {
      iMin = Arr[iCnt];
    }
  }
  return iMin;
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
  
  iRet = Minimum(iPtr,iSize);
  
  printf("Smallest of all numbers is: %d\n",iRet);  
  
  free(iPtr);
  
  return 0;
}
