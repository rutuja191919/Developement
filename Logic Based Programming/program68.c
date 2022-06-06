//Display even numbers 

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
  auto int iCnt = 0, iEvenCnt = 0;
  
  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    if(Arr[iCnt] % 2 == 0)
    {
    iEvenCnt++;
    }
  }
  return iEvenCnt;
}

int main()
{
  auto int iSize = 0, iCnt = 0, iRet = 0;
  auto int *iPtr = NULL;
  
  printf("Enter number of elements\n");
  scanf("%d",&iSize);
  
  iPtr = (int *)malloc(iSize*sizeof(int));
  
  printf("Enter the elements\n");
  
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    scanf("%d",&iPtr[iCnt]);
  }
   
  iRet = CountEven(iPtr,iSize);
  
  printf("Number of even count is : %d\n",iRet);
  
  free(iPtr);
  
  iPtr = NULL;
  
  return 0;
}
