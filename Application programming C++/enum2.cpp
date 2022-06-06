#include<iostream>
using namespace std;

int main()
{
	enum Marvellous_Batches {PPA = 0, LB = 1, LSP = 2, Python = 3};
	int Fees[] = {15000,16000,17000,18000};
	float Duration[] = {3.5,4.0,3.5,4.5};
	
	int choice = 0 ;
	
	cout<<"Select the batch you want to join\n";
	cout<<"0 : PPA\n";
	cout<<"1 : LB\n";
	cout<<"2 : LSP\n";
	cout<<"3 : Python\n";

	AGAIN:
	cin>>choice;

	switch(choice)
	{
		case PPA:
			cout<<"\nThank you for selecting Pre placement activity batch!\n";
			cout<<"Duration is: "<<Duration[PPA]<<"\n";
			cout<<"Fees are: "<<Fees[PPA]<<"\n";
			cout<<"Thank you for visiting Marvellous Infosystems\n";
			break;
	
		case LB:
			cout<<"\nThank you for selecting Logic Building batch!\n";
			cout<<"Duration is: "<<Duration[LB]<<"\n";
			cout<<"Fees are: "<<Fees[LB]<<"\n";
			cout<<"Thank you for visiting Marvellous Infosystems\n";
			break;
		
		case LSP:
			cout<<"\nThank you for selecting Linux system programming batch!\n";
			cout<<"Duration is: "<<Duration[LSP]<<"\n";
			cout<<"Fees are: "<<Fees[LSP]<<"\n";
			cout<<"Thank you for visiting Marvellous Infosystems\n";
			break;
		
		case Python:
			cout<<"\nThank you for selecting Python batch!\n";
			cout<<"Duration is: "<<Duration[Python]<<"\n";
			cout<<"Fees are: "<<Fees[Python]<<"\n";
			cout<<"Thank you for visiting Marvellous Infosystems\n";
			break;
			
		default:
			cout<<"Sorry there is no such batch please select valid batch no again!\n";
			goto AGAIN;
	}
	
	return 0;
}