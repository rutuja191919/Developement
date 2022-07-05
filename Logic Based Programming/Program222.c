#include<stdio.h>

void Display(char *str)
{
 if(*str != '\0')
 {
  printf("%c",*str);
  Display(++str);  //Post Increment
 }
}
int main()
{
 char Arr[20];
 
 printf("Enter the string\n");
 scanf(" %[^'\n']s",Arr);
 
 Display(Arr);
 return 0;
}
