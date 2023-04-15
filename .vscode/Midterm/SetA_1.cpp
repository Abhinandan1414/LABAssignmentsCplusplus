// Demonstrates
// Functions
// Control structures
// Expressions
// Classes and Objects
// Blooms Taxonomy Application
#include <iostream>
using namespace std;
int fact(int n)
{

    int result = 1;
    while (n != 1)
    {
        result = result * n;
        n = n - 1;
    }
    return result;
}
class NCR
{
private:
    int n;
    int r;
    int ncr;

public:
    void setnandr()
    {
        cout << "Enter N and R";
        cin >> n >> r;
    }
    void calcncr()
    {
        ncr = (fact(n) / (fact(r) * fact(n - r)));
    }
    void displayncr()
    {
        cout << n << "C" << r << "is" << ncr;
    }
};

int main()
{
    NCR ncr1;
    ncr1.setnandr();
    ncr1.calcncr();
    ncr1.displayncr();
}