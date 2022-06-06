#include<stdio.h>
#include<stdlib.h>

int Summation(int *Arr, int iSize)
{
 int iCnt = 0, iSum = 0;
 
 for(iCnt = 0; iCnt < iSize ; iCnt++)
 {
   iSum = iSum + Arr[iCnt]; 
 }
  
 return iSum;
 
}
int main()
{
 int iCnt = 0, iLength = 0, iRet = 0;
 
 int *iPtr = NULL;
 
 printf("Enter the number of elements\n");
 scanf("%d",&iLength);
 
 iPtr = (int *)malloc(iLength*sizeof(int));
 
 printf("Enter the elements\n");
 
 for(iCnt = 0; iCnt < iLength; iCnt++)
 {
  scanf("%d",&(iPtr[iCnt]));
 }

 iRet = Summation(iPtr, iLength);
 
 printf("Addition is : %d \n",iRet);
 
 free(iPtr);
 
 return 0;
}
