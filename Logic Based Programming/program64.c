#include<stdio.h>

void Display(int iPtr[])
{
  auto int iCnt = 0;
  printf("Elements are :\n");
  
  for(iCnt = 0; iCnt < 5; iCnt++)
  {
    printf("%d\n",iPtr[iCnt]);
  }
}

int main()
{
  auto int Arr[5];  
  register int iCnt = 0;
   
  printf("Enter elements : \n");
  
  for(iCnt = 0; iCnt < 5; iCnt++)
  {
    scanf("%d",&Arr[iCnt]);
  }
  
  Display(Arr);   //Display(100)
  
  return 0;
}
