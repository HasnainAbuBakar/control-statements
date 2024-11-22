#include<iostream>
using namespace std;
int main()
{
	int units;
	cout<<"Enter total units if bill = ";
	cin>>units;
	
	if(units<=100)
	{
		cout<<"The cast is $0.50 per unit.";
	}
	else if(units<=200)
	{
		cout<<"The cast is $0.75 per unit.";
	}
	else if(units<=300)
	{
		cout<<"The cast is $1.20 per unit.";
	}
	else if(units>300)
	{
		cout<<"The cast is $1.50 per unit.";
	}
}
