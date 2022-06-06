#include<stdio.h>

int main()
{
	char cValue = 'M';
	char *cPtr = &cValue;  //pointer of char
	
	int iValue = 21;
	int *iPtr = &iValue;  //pointer of int
	
	float fValue = 10.11;
	float *fPtr = &fValue;  //pointer of float
	
	double dValue = 20.11;
	double *dPtr = &dValue;   //pointer of double
	
	
	//display different values
	
	printf("cValue = %c\n",cValue);
	printf("&cValue = %d\n",&cValue);
	printf("*cPtr = %c\n",*cPtr);
	printf("cPtr = %d\n",cPtr);
	printf("&cPtr = %d\n\n",&cPtr);
	printf("sizeof(cPtr) = %d\n",sizeof(cPtr));
	printf("sizeof(*cPtr) = %d\n",sizeof(*cPtr));
	printf("sizeof(cValue) = %d\n",sizeof(cValue));
	
	/*printf("iValue = %d\n",cValue);
	printf("dValue = %f\n",cValue);
	printf("fValue = %d\n",cValue);
	printf("&iValue = %d\n",cValue);
	
	printf("&dValue = %d\n",cValue);
	printf("cValue = %d\n",cValue);
	printf("cValue = %d\n",cValue);
	printf("cValue = %d\n",cValue);
	printf("cValue = %d\n",cValue);
	*/
	
	
	return 0;
}