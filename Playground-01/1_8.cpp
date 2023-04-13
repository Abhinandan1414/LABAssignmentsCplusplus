/*
Print Cube of a number using inline function
Code
*/
#include <iostream>
using namespace std;
inline float cube(float x)
{
    return (x * x * x);
}
int main()
{
    float val;
    cout << "Enter number: ";
    cin >> val;
    cout << "\n\nCube value of " <<val<< " is :" << cube(val) << endl;
}