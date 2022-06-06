/*program to display class if 
0 - 34 : fail
35 - 49 : pass
50 - 59 : firstclass
60 - 69 : Secondclass

*/ 
#include<stdio.h>

void DisplayClass(float fMarks)
{
  if((fMarks > 0.0) && (fMarks < 35.0))
  {
    printf("Fail\n");
  }
  else if((fMarks >= 35.0) && (fMarks <50.0))
  {
    printf("Pass\n");
  } 
  else if((fMarks >= 50.0) && (fMarks <60.0))
  {
    printf("Second class\n");
  } 
  else if((fMarks >= 60.0) && (fMarks <70.0))
  {
    printf("First class\n");
  }
  else if((fMarks >= 70.0) && (fMarks <=100.0))
  {
   printf("First class with distinction\n");
  } 
  else
  {
    printf("Invalid Marks\n");
  } 
}

int main()
{
  float fValue = 0.0;
  
  printf("Enter the percentage\n");
  scanf("%f",&fValue);
  
  DisplayClass(fValue);
  
  return 0;
}
