#include<stdio.h>

int CountSmall(char brr[])
{
 int iCnt = 0;
 
 while(*brr != '\0')
 {
  if((*brr >= 'a') && (*brr <= 'z'))
  {
    iCnt++;
  }
  brr++;
 }
 return iCnt;
}

int main()
{
  char arr[20];
  int iRet = 0;
  
  printf("Enter the string\n");
  scanf(" %[^'\n']s",arr);
  
  iRet = CountSmall(arr);
  printf("Count of small characters is : %d\n",iRet);
  
  return 0;
}
