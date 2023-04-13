/* Display Multiplication Table up to 10 for a given number
Code */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    return 0;
}