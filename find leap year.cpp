#include<iostream>
using namespace std;
int main()
{
	int year;
	
	cout<<"Enter year = ";
	cin>>year;
	
	if(year%4 ==0 && year%100!=0 || year%4 ==0)
	{
		cout<<"This is leap year";
	}
	else
	{
		cout<<"This is not leap year";
	}
}
