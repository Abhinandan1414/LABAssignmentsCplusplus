// Complexity of the solution simple for 4 Sem Students
// Demonstrates
// Functions
// Control structures
// Expressions
// Blooms Taxonomy Application



#include <iostream>
#include <cmath>
using namespace std;
void calculateCAGR(float principal, float n, float r)
{
    float investmentResult=principal;
    //float CAGR = 1;
    float CAGR = (1+(r/100));
    //investmentResult = principal*(pow((1+r/100),n));
    for(int i=1; i<=n;i++)
    {
        cout<<investmentResult<<CAGR;
        investmentResult = investmentResult*CAGR;
        cout<<"Your investment of "<<principal<<"at ";
        cout<<r<<"interest percent is"<< investmentResult<<"is"<<i<<"years later";
        cout<<endl;
    }
}
int main()
{
    float principal,n,r;
    cout<<"Enter Pricipal ";
    cin>>principal;
    cout<<"Enter years ";
    cin>>n;
    cout<<"Enter rate of interest";
    cin>>r;
    calculateCAGR(principal,n,r);
}