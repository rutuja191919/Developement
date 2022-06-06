#include<stdio.h>

int main()
{
	int iCnt = 0; //1
	int size = 0;
	
	printf("Enter how many times text will display?\n");
	scanf("%d",&size);
	
	while(iCnt < size)  //2
	{
		printf("Jay Ganesh\n");  //4
		iCnt++;                  //3
	}
	
	return 0;
}