//Display even numbers 

#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[], int iLength)
{
  auto int iCnt = 0;
  
  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    if(Arr[iCnt] % 2 == 0)
    {
    printf("%d\n",Arr[iCnt]);
    }
  }
}

int main()
{
  auto int iSize = 0, iCnt = 0;
  auto int *iPtr = NULL;
  
  printf("Enter number of elements\n");
  scanf("%d",&iSize);
  
  iPtr = (int *)malloc(iSize*sizeof(int));
  
  printf("Enter the elements\n");
  
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    scanf("%d",&iPtr[iCnt]);
  }
   
  DisplayEven(iPtr,iSize);
  
  free(iPtr);
  
  iPtr = NULL;
  
  return 0;
}
