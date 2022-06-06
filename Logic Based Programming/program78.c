//Program to accept n numbers and search number from array and return the first occurance of that number

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchFirstOccurance(int Arr[],int iLength, int iNo)
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
    return -1;
  }
  else
  {
    return iCnt;
  }
  
}

int main()
{
  auto int iSize = 0,iValue = 0,iRet = 0;
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
  
  iRet = SearchFirstOccurance(iPtr,iSize,iValue);
  
  printf("The first occurance of the number is : %d",iRet);
  
  free(iPtr);
  
  return 0;
}
