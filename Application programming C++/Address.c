#include<stdio.h>
#include<stdlib.h>
//extern
int arr[4] = {10,20,30,40};
//extern
int no;

int main()
{
	//auto
	int brr[3] = {11,21,51};
	
	int *p = NULL;
	
	//static
	static int value = 11;
	
	//heap - Dynamic memory 
	p = (int *)malloc(sizeof(int)*3);
	
	printf("Jay Ganesh\n");
	
	return 0;
}