#include<stdio.h>

int CountSmall(char str[])
{
 static int iCnt = 0;
 
 if(*str != '\0')
 {
  if((*str >= 'a') && (*str <= 'z'))
  {
    iCnt++;
  }
  str++;
  CountSmall(str);
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
