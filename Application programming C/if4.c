#include<stdio.h>
//1 8 
//2 9
//3 10
//4 11
//5 12
int main()
{
	auto int iStd = 0;
	
	//first:
	printf("Enter your standard\n");
	scanf("%d",&iStd);
	
	switch(iStd)
	{
		case 1:
			printf("Your exam is at 8\n");
			break;
			
		case 2:
			printf("Your exam is at 9\n");
			break;
			
		case 3:
			printf("Your exam is at 10\n");
			break;
			
		case 4:
			printf("Your exam is at 11\n");
			break;
			
		case 5:
			printf("Your exam is at 12\n");
			break;
			
		default:
			printf("Invalid standard\n");
	}
	
	return 0;
}
	