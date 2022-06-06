#include<stdio.h>

struct Demo
{
	int *ip;    //no need to initialize as no definition 
	float *fp;
};

int main()
{
	struct Demo obj; 
	
	int no = 20;
	float f = 4.5;
	
	obj.ip = &no;
	obj.fp = &f;
	
	printf("%d\n",obj.ip);
	printf("%d\n",obj.fp);
	
	printf("%d\n",*(obj.ip));
	printf("%f\n",*(obj.fp));
	
	return 0;
}
	