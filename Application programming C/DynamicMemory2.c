#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int size = 0;
	int *ptr = NULL;   //NULL Pointer
	
	printf("Enter no of elements : ");
	scanf("%d",&size);
	
	//Step 1 : Allocate the memory
	ptr =(int *)calloc(size, sizeof(int));    //accept size in bytes and returns void pointer,address
	if(ptr == NULL)
	{
		printf("Unable to allocate memory\n");
	}
	else
	{
		printf("Memory successfully allocated\n");
	}
	
	//Step 2 : Use the memory 
	
	free(ptr);   //Step 3 : Free the memory
	return 0;
}