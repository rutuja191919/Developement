#include<iostream>
using namespace std;

class Demo
{		public:
		int Add(int no1, int no2);
		int Sub(int no1, int no2);
};

int Demo::Sub(int no1, int no2)
{
	int ans = 0;
	ans = no1-no2;
	return ans;
}

int Demo::Add(int no1, int no2)
{
	int ans = 0;
	ans = no1+no2;
	return ans;
}
	
int main()
{
	Demo dobj;
	int ret = 0;
	
	ret = dobj.Add(10,20);
	cout<<ret<<"\n";
	
	ret = dobj.Sub(20,30);
	cout<<ret<<"\n";
	
	cout<<sizeof(dobj)<<"\n";
	
	return 0;
}