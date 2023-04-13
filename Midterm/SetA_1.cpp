// Complexity of the solution Easy for 4 Sem Students
// Demonstrates
// Functions
// Control structures
// Expressions
// Blooms Taxonomy Application
#include <iostream>
using namespace std;
int fact(int n)
{
    int result=1;
    while(n != 1)
    {
        result= result * n;
        n=n-1;
    }
    return result;
}
int ncr(int n, int r)
{
    int result=1;
    return (fact(n)/(fact(r)*fact(n-r)));
}
int main()
{
    int n=0,r=0;
    cout<<"Enter the values of n and r separated by space ";
    cin>>n>>r;
    cout<<n<<"C"<<r<<"is"<<ncr(n,r);
}