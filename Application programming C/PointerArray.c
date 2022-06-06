#include<stdio.h>

int main()
{
	int Arr[5] = {10,20,30,40,50};
	
	int *p = NULL;  //good programming practice because
					//at runtime program abnormally stops
					//(segmentation fault)
	int *q = NULL;
	
	*p = &(Arr[0]);
	
	*q = &(Arr[4]);

	
	return 0;
}
