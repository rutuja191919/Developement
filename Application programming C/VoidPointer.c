#include<stdio.h>

int main()
{
	
	int iValue = 11;
	char cValue = 'A';
	float fValue = 10.11;
	double dValue = 20.11;
	
	void *ptr = NULL; // NULL(macro) word internally considered as zero 
	
	ptr = &iValue; //pointer initialization
	
	printf("%d\n",*(int *)ptr); // ptr = 11 typecasting of pointer
	
	
	
	ptr = NULL;     // तलवार म्यानात
	
	ptr = &fValue;  // तलवार  point करायची  fValue कडे
	
	printf("%f\n",*(float *)ptr); //ptr = 10.11;
	
	
	
	
	ptr = NULL; 	// तलवार पुन्हा म्यानात
	
	ptr = &cValue;	// तलवार  point करायची  cValue कडे
	
	printf("%c\n",*(char *)ptr); //ptr = A
	
	
	
	return 0;
}