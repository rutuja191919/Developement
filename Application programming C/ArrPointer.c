#include<stdio.h>

int main()
{
	int Arr[5] = {10,20,30,40,50};
	
	int Brr[3+2] = {7+9, 3*2, 78, 9-1}; //Assignment
	
	printf("%d\n",Arr[0]); //10
	printf("%d\n",Arr[4]); //50
	printf("%d\n",Arr);    //base address of first ele
	printf("%d\n",&Arr);   //base address of whole array
	printf("%d\n",&Arr[0]); 
	printf("%d\n",Arr + 1);  //104 dealing with first ele
	printf("%d\n",(&Arr) + 1); //120 dealing with whole array
	printf("%d\n",Arr[2]); //30
	printf("%d\n",2[Arr]); //30
	printf("%d\n",*(Arr+2));  //30
	printf("%d\n",*(2+Arr));  //30
	
	printf("%d\n",sizeof(Arr)); //20
	printf("%d\n",sizeof(Arr[2])); //4
	
	printf("%d\n",Brr[2]); //Assignment
	printf("%d\n",sizeof(Brr)); //Assignment
	return 0;
}