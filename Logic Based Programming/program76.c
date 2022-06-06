//Program to accept n numbers and search number from array (accept that number from user)

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength, int iNo)
{
  register int iCnt = 0;
  
  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    if(iNo == Arr[iCnt])
    {
      break;
    }
  }

  if(iCnt == iLength)
  {
   return false;
  }
  else
  {
   return true;
  }  
}

int main()
{
  auto int iSize = 0,iValue = 0;
  auto bool bRet = 0;
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
  
  printf("Enter the element to search\n");
  scanf("%d",&iValue);
  
  bRet = Search(iPtr,iSize,iValue);
  
  if(bRet == true)
  {
   printf("Element is there in array\n");  
  }
  else
  {
   printf("Element is not there in array\n");
  }
  
  free(iPtr);
  
  return 0;
}
