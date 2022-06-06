//Program to display 5 times Hello on screen

#include<stdio.h>

//Demonstration of Iteration
void Display()   //Defination
{
   int iCnt = 0;
   
   /*printf("Hello\n");
   printf("Hello\n");
   printf("Hello\n");
   printf("Hello\n");
   printf("Hello\n");*/
   
     
// Initialization Condition Movement
// 1              2         3 
   for(iCnt = 1; iCnt<=5 ; iCnt++)
   {
      printf("Hello\n");    //4 body 
   }
}

int main()
{
   Display();     //Function call
   
   return 0;
}



