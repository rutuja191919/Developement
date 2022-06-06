#include<stdio.h>
#include<string.h>

int strlenX(char str[])
{
	int iCnt = 0;
	int iLength = 0;
	
	for(iCnt = 0; str[iCnt]!= '\0'; iCnt++)
	{
		iLength++;
	}
	
	return iLength;
}

int strlenXX(char str[])
{
	int iCnt = 0;
	int iLength = 0;
	
	while(str[iCnt]!= '\0')
	{
		iLength++;
		iCnt++;		
	}
	
	return iLength;
}

/////////////////////////////
//
// Function Name : strlenXXX
// Input :   character pointer 
// Output :  Length of the array in integer
// Description : It is used to calculate length of the array
// Author : Rutuja Rajesh Chaudhari
// Date : 06/02/2022
//
//////////////////////////////

int strlenXXX(const char *str)
{
	int iLength = 0;
	
	while((*str)!= '\0')
	{
		iLength++;
		str++;		
	}
	
	return iLength;
}

int main()
{
	int Length = 0;
	int Arr[20] = {'\0'};
	
	printf("Enter your string\n");
	scanf("%s",Arr);

	printf("String is %s",Arr);
	//char Arr[] = "Rutuja";
	
	//Length = strlenX(Arr);
	
	//Length = strlenXX(Arr);
	
	
	Length = strlenXXX(Arr);
	
	printf("\nLength of string Arr is %d", Length);
	
	return 0;
}