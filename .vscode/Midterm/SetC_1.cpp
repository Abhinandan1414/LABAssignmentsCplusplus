// Demonstrates
// Functions
// Control structures
// Expressions
// Programming Logic
// Blooms Taxonomy Application

#include <iostream>
#include <cmath>
using namespace std;
void calculateCAGR(float principal, float n, float r)
{
    float investmentResult = principal;
    // float CAGR = 1;
    float CAGR = (1 + (r / 100));
    for (int i = 1; i <= n; i++)
    {
        
        investmentResult = investmentResult * CAGR;
        cout << "Your investment of " << principal << " at ";
        cout << r << " interest percent is " << investmentResult << " after " << i << " years ";
        cout << endl;
    }
}
int main()
{
    float principal, n, r;
    cout << "Enter Pricipal ";
    cin >> principal;
    cout << "Enter years ";
    cin >> n;
    cout << "Enter rate of interest";
    cin >> r;
    calculateCAGR(principal, n, r);
}