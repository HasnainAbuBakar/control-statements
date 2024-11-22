#include<iostream>
using namespace std;
int main()
{
	int persentage;
	cout<<"Enter your exam persentage = ";
	cin>>persentage;
	
	if(persentage<=59)
	{
		cout<<"Fail";
	}
	else if(persentage<=69)
	{
		cout<<"D";
	}
	else if(persentage<=79)
	{
		cout<<"C";
	}
	else if(persentage<89)
	{
		cout<<"B";
	}
	else if(persentage>=90)
	{
		cout<<"A";
	}
}
