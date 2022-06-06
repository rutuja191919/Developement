#include<stdio.h>

struct Demo 
{
	int i;
	struct Demo *obj; 
};
int main()
{
	struct Demo dobj1, dobj2, dobj3;
	
	struct Demo *p = &dobj1;
	
	dobj1.i = 21;
	dobj1.obj = &dobj2;
	
	dobj2.i = 21;
	dobj1.obj = &dobj2;
	
	dobj3.i = 61;
	dobj3.obj = NULL;
	
	return 0;
}
	