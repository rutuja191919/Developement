#include<stdio.h>

void Duplicate(char *pstr, int size)
{
	auto int i = 0, j = 0;
	
	for(; i < size; i++)
	{
		for(j = i+1; j < size; j++)
		{
			 if(pstr[i] == pstr[j])
			 {
				 printf("%c\n",pstr[j]); 
				 break;
			 }
		}
	    i = j;
	}
	
}
int main()
{
	char arr[] = "\0";
	int size = 0;
	
	printf("enter the length of string\n");
	scanf("%d",&size);
	
	printf("enter the string\n");
	scanf("%s",arr);
	
	Duplicate(arr, size);
	return 0;
}