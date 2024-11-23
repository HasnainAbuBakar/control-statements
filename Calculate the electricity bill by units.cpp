#include<iostream>
using namespace std;
int main()
{
	int units;
	cout<<"Enter total units of bill = ";
	cin>>units;
	
	if(units<=100)
	{
		cout<<"The cast is $0.50 per unit."<<endl;
		cout<<"Total Bill is  "<<units*0.50<<endl;
	}
	else if(units<=200)
	{
		cout<<"The cast is $0.75 per unit."<<endl;
		cout<<"Total Bill is  "<<units*0.75<<endl;
	}
	else if(units<=300)
	{
		cout<<"The cast is $1.20 per unit."<<endl;
		cout<<"Total Bill is  "<<units*1.20<<endl;
	}
	else if(units>300)
	{
		cout<<"The cast is $1.50 per unit."<<endl;
		cout<<"Total Bill is  "<<units*1.50;
	}
}
