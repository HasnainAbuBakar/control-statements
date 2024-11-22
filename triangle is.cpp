#include <iostream>
using namespace std;

int main() 
{
    int side1;
    int side2;
    int side3;

    cout << "Enter the first side of the triangle: ";
    cin >> side1;
    cout << "Enter the second side of the triangle: ";
    cin >> side2;
    cout << "Enter the third side of the triangle: ";
    cin >> side3;

    if (side1 == side2 && side2 == side3) 
    {
        cout << "The triangle is equilateral." << endl;
    } 
    else if (side1 == side2 || side2 == side3 || side1 == side3) 
    {
        cout << "The triangle is isosceles." << endl;
    } else 
    {
        cout << "The triangle is scalene." << endl;
    }
}
