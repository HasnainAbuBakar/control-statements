#include<iostream>
using namespace std;
int main()
{
	int value_One;
	int value_Two;
	int choice;
	
	cout<<"Please enter value one: ";
	cin>>value_One;
	
	cout<<"Please enter value two: ";
	cin>>value_Two;
	
	cout<<"Please enter your choice \nPress 1 for Add \n Press 2 for subtract \n Press 3 for product \n Press 4 for devision ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<value_One+value_Two;
			break;
		
		case 2:
			cout<<value_One-value_Two;
			break;
		case 3:
			cout<<value_One*value_Two;
			break;
		case 4:
			cout<<value_One/value_Two;
			break;
		default:
			cout<<"Invalid choice";
			break;
	}
}