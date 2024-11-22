#include<iostream>
using namespace std;
int main()
{
	int age;
	
	cout<<"Eligible OR Not"<<endl;
	cout<<"Enter your Age = ";
	cin>>age;
	
	if(age>=18)
	{
		cout<<"You are eligible to cast vote."<<endl;
	}
	else
	{
		cout<<"You are not eligible to cast vote."<<endl;
	}
	cout<<"THANK YOU"<<endl;
}
