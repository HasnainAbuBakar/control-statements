#include<iostream>
using namespace std;
int main()
{
	int num_One;
	int num_Two;
	
	cout<<"Enter your first number = ";
	cin>>num_One;
	
	cout<<"Enter second number = ";
	cin>>num_Two;
	
	if(num_One>num_Two)
	{
		cout<<"First number is Greater.";
	}
	else if(num_Two>num_One)
	{
		cout<<"2nd number is Greater"<<endl;
	}
	else if(num_One==num_Two)
	{
		cout<<"Both are equal"<<endl;
	}
	cout<<"Thank you";
}
