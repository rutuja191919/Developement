#include<stdio.h>
#include<string.h>

int main()
{	
	//First Way
	char Arr[5]={'a','b','c','d','\0'};
	
	//Second Way
	char Brr[5] = "abcd";
	
	printf("%s\n",Arr); //%s format specifier(sequence of char) prints array from base address to the end of string(\0)
	
	printf("%s\n",Brr);
	
	printf("%c\n",Arr[0]);
	printf("%c\n",Arr[1]);
	printf("%c\n",Arr[2]);
	printf("%c\n",Arr[3]);
	
	printf("Size of string Arr %d\n",sizeof(Arr)); //5
	printf("Size of string Brr %d\n",sizeof(Brr)); //5 

	printf("Length of string Arr is %d\n",strlen(Arr));  //4
	printf("Length of string Brr is %d\n",strlen(Brr));  //4
	
	return 0;
}