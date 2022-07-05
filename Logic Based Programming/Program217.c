//Digits addition in recursion

#include<stdio.h>

void Display(int iNo)
{
 char ch = 'a';
 int iCnt = 1;
 
 while(iCnt <= iNo)
 {
  printf("%c",ch);
  ch++;
  iCnt++;
 }
 printf("\n");
}

int main()
{
  int iValue = 0;
  
  printf("Enter the number\n");
  scanf("%d",&iValue);
  
  Display(iValue);
  
  return 0;
}
