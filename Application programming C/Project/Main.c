//#include<stdio.h>   //include from compiler directory
//#include "stdio.h"   //It is possible but preprocessor search that header file first in current directory and then in compiler directory
#include "Marvellous.h"   //include from current directory

int main()
{
	struct Demo dobj;
	
	printf("Inside main\n");
	printf("Value of macro is : %d\n", MAX);
	printf("Size of structure is : %d\n",sizeof(dobj));
	
	fun();
	
	return 0;
}
void fun()
{
	printf("Inside fun");
}
