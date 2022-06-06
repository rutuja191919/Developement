#include<stdio.h>

int Addition(int no1, int no2)
{
	int ans = 0;    //stack frame of Additions
	ans = no1 + no2;
	return ans;
}

int main()
{
	int a = 10, b = 20;
	int ret = 0;    //stack frame of main  
	
	//ret = Addition(a,b);
	
	int (* Fptr)(int,int);

	Fptr = Addition;    //store the address of the function Addition
	printf("Address of addition function is %d\n",Addition);
	ret = Fptr(a, b); //call function by pointer 

	printf("Addition is %d\n",ret);
	
	return 0;
}
