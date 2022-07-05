//Recursion

#include<stdio.h>

//Iterative logic
void DisplayI()
{
 auto int iCnt = 0;

 while(iCnt < 4)
 {
	printf("*\t");
	iCnt++;
 }
}

//Recursion logic
void DisplayR()
{
  static int iCnt = 0;

  if(iCnt < 4)
  {
	printf("*\t");
	iCnt++;
	DisplayR();  //Recursive call
  }
}

int main()
{
    DisplayR();

	return 0;
}