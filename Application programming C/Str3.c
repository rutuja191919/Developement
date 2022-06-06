#include<stdio.h>

int main()
{
	char Arr[10] = {'\0'};
	
	printf("Enter the String\n");
	scanf("%s",Arr);
	
	char *cPtr = Arr;
	
	while(*cPtr != '\0')
	{
		printf("%c",*cPtr);
		cPtr++;
	}
	
	return 0;
}