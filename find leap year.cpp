#include<iostream>
using namespace std;
int main()
{
	int leap;
	
	cout<<"Enter days = ";
	cin>>leap;
	
	if(leap>365)
	{
		cout<<"This is leap year";
	}
	else
	{
		cout<<"This is not leap year";
	}
}
