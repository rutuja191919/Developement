#include<stdio.h>

//first way


struct Hello
{
	float f;
	int no;
    struct Demo
    {
	  int i;
	  int j;
    };
};

int main()
{
	
	struct Hello hobj;
	
	//hobj.dobj.i = 12; 

	//printf("%d\n",hobj.dobj.i);
	printf("Size of struct Hello = %d",sizeof(hobj));
	
	return 0;
}