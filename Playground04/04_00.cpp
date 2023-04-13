#include <iostream>
using namespace std;
int main()
{
    // Declare Data Types
    char a = 'a';
    int b = 10;
    float c = 10.10;
    double d = 14.1234;
    long e = 12345678;

    //Print the initialized values as they are
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
    cout << "c is " << c << endl;
    cout << "d is " << d << endl;
    cout << "e is " << e << endl;

    // Declare Pointers
    char *pointerToChar;
    int *pointerToInt;
    float *pointerToFloat;
    double *pointerToDouble;
    long *pointerToLong;

    // Point the Pointers to Respective Data Types
    pointerToChar = &a;
    pointerToInt = &b;
    pointerToFloat = &c;
    pointerToDouble = &d;
    pointerToLong = &e;

    // Print size of data types.
    cout << "size of char is: " << sizeof(char) << endl;
    cout << "size of int is: " << sizeof(int) << endl;
    cout << "size of float is: " << sizeof(float) << endl;
    cout << "size of double is: " << sizeof(double) << endl;
    cout << "size of long is: " << sizeof(long) << endl;

    // Now print size of pointers. The value will be same.
    cout << "size of char pointer is: " << sizeof(pointerToChar) << endl;
    cout << "size of int pointer is: " << sizeof(pointerToInt) << endl;
    cout << "size of float pointer is: " << sizeof(pointerToFloat) << endl;
    cout << "size of int pointer is: " << sizeof(pointerToDouble) << endl;
    cout << "size of float pointer is: " << sizeof(pointerToDouble) << endl;

    // Dereference the pointers and assign different values.
    *pointerToChar = 'b';
    *pointerToInt = 15;
    *pointerToFloat = 15.15;
    *pointerToDouble = 14.87654321;
    *pointerToLong = 87654321;

    // Print the altered values of variables
    cout << "Now a is " << a << endl;
    cout << "Now b is " << b << endl;
    cout << "Now c is " << c << endl;
    cout << "Now d is " << d << endl;
    cout << "Now e is " << e << endl;
}