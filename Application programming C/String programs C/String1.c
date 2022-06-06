//Reverse given string in place
#include<stdio.h>

void Reverse(char *pstr, int size)
{
	auto int i = 0, j = 0;
	
	for(i = 0, j = size - 1; i <= size/2 && j > size/2 ; i++, j--)
	{
		char temp = '\0';
		if(pstr[i] != pstr[j])
		{
		 temp = pstr[i];
		 pstr[i] = pstr[j];
		 pstr[j] = temp;
		}
	}
	printf("The reverse string in place is :\n"); 
	for(i = 0; i < size ; i++)
	{
		printf("%c",pstr[i]);
	}
}
int main()
{
	char str[] = "\0";
	int size = 0;
	
	printf("Enter the size of string\n");
	scanf("%d",&size);
	
	printf("Enter the String\n");
	scanf("%s",str);
	
	Reverse(str, size);
	
	return 0;
}