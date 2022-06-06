#include<stdio.h>
#include<stdlib.h>  //for malloc and free

void Display(int Arr[], int iLength)
{
  auto int iCnt = 0;
  printf("Elements are :\n");
  
  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    printf("%d\n",Arr[iCnt]);
  }
}

int main()
{
  //auto int Brr[5];    static memory allocation
  auto int *iPtr = NULL;
  auto int iSize = 0;  
  register int iCnt = 0;
  
  printf("Enter the number of elements\n");
  scanf("%d",&iSize);
  
  iPtr = (int *)malloc(iSize*sizeof(int));
  
  printf("Enter elements : \n");
  
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    scanf("%d",&iPtr[iCnt]);
  }
  
  Display(iPtr,iSize);   //Display(100)
  
  free(iPtr);
   
  iPtr = NULL;  //dereference dangling pointer
  
  return 0;
}
