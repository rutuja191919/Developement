#include<stdio.h>

int main()
{
	auto int Marks = 0; //auto lihayacha 
	
	printf("Enter your marks\n");
	scanf("%d",&Marks);
	
	printf("Your entered marks = %d\n",Marks);
	
	if(Marks > 60)
	{
		printf("First Class\n");
	}
	else
	{
		printf("Not a First Class\n");
	}
	return 0;
}