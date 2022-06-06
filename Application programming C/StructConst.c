#include<stdio.h>

struct Demo
{
	const int i;
	const int j;
};

int main()
{
	//const struct Demo = {11,21}; 
	//when const struct obj gets created then 
	//you have to use member initialization list as
	//immediately do initialization
	struct Demo obj = {11,21};
	
	//struct Demo obj1;
	
	//obj1.i = 43; //error not allowed
	
	printf("%d\n",obj.i);
	printf("%d\n",obj.j);
	
	//obj.i++; //error not allowed
	
	
	return 0;
}