/*
Program to Print Number Entered by User and its double
Code
*/
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "You entered " << number;
    cout << "and its double is " << number * 2 << "\n";
    return 0;
}