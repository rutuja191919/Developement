//Program to accept input from user and display Hello upto that number screen

#include<stdio.h>

//Demonstration of Iteration
void Display(int iNo)   //Defination
{
   int iCnt = 0;
   
   /*printf("Hello\n");
   printf("Hello\n");
   printf("Hello\n");
   printf("Hello\n");
   printf("Hello\n");*/
       
   if(iNo < 0)    //filter
   {
     printf("Please enter positive value!\n");
     return;
   }
   
// Initialization Condition Movement
// 1              2         3 
   for(iCnt = 0; iCnt<iNo ; iCnt++)
   {
      printf("Hello\n");    //4 body 
   }
}

int main()
{
   int iValue = 0;
   
   printf("Enter the number\n");
   scanf("%d",&iValue);
   
   Display(iValue);     //Function call
   
   return 0;
}



