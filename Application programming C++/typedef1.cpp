#include<iostream>
using namespace std;

int main()
{
	/*
	struct Demo
	{
		int no1;
		int no2;
	};
	
	typedef struct Demo DEMO;
	typedef struct Demo * PDEMO;
	typedef struct Demo ** PPDEMO;
	*/
	
	typedef struct Demo
	{
		int no1;
		int no2;
		
	}DEMO,*PDEMO,**PPDEMO;
	
	
	/*struct Demo obj;
	struct Demo *p = &obj;
	struct Demo **q = &p;
	*/
	
	DEMO obj;
	PDEMO p = &obj;
	PPDEMO q = &p;
	
	obj.no1 = 10;
	obj.no2 = 20;
	
	cout<<p->no1<<"\n";
	cout<<p->no2<<"\n";
	cout<<*q<<"\n";
	
	return 0;
}