#include <iostream>
using namespace std;

int main()
{
    int enter_Num;

    cout << "Enter an integer: ";
    cin >> enter_Num;
    
    if (enter_Num % 2 == 0)
    {
        cout << "This is Even";
    }
    else
    {
        cout << "This is Odd";
    }
}
