//Efficient code of program90.c
// Input : 4
// Output :   $ * * *
//            1 $ * *
//            1 2 $ *
//            1 2 3 $ 


#include<stdio.h>

void Display(int iRow, int iCol)
{
  int i = 0, j = 0;
  
  if(iRow != iCol)
  {
   printf("Invalid Input\n");
   return;
  }
  
  for(i = 1; i<=iRow; i++)
  {
   for(j = 1; j<= iCol; j++)
   {
    if(j < i)
    {
      printf("*\t");
    }
    else if(j < i)
    {
      printf("#\t");
    }
    else
    {
     printf("$\t");
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
