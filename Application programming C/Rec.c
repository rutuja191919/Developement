#include<stdio.h>

void Display(int no)
{
	static int i = 1;
	if(i <= no)
	{
		printf("*\n");
		i++;
		Display(no);
	}
}
int main()
{
	Display(3);
	printf("End of main\n");
	return 0;
}