//triangle 


#include<stdio.h>

void Display(int iRow, int iCol)
{
  int i = 0, j = 0;
  
  for(i = iRow; i >= 1; i--)
  {
   for(j = iCol; j >= 1 ; j--)
   {
      if(i < j)
      {
       printf(" \t");
      }
      else
      {
       printf("*\t");
      } 
   }
   printf("\n");
  }
}

int main()
{
 int iValue1= 0, iValue2 = 0;
 
 printf("Enter rows\n");
 scanf("%d",&iValue1);
 
 printf("Enter columns\n");
 scanf("%d",&iValue2);
 
 Display(iValue1, iValue2);
 
 return 0;
}


//time complexity : O(N\2)   ...N = N*N
