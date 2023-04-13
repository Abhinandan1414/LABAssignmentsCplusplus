// Complexity of the solution moderate for 4 Sem Students
// Demonstrates
// Functions
// Control structures
// Expressions
// Classes and Objets
// Blooms Taxonomy Application


#include <iostream>
using namespace std;
class ArithmaticProgression
{
    int a,d,n;
    public:
    void setadn()
    {
        cout<<"First term: ";
        cin>>a;
        cout<<"Constant difference";
        cin>>d;
        cout<<"Number of terms";
        cin>>n;
    }
    int sumUsingFormula()
    {
        int sum =0;
        sum = n/2*(2*a+(n-1)*d);
        cout<<"Sum using formula is "<<sum;
    }
    int sumWithoutFormula()
    {
        int sum = 0;
        int term = a;
        int i=1;
        for(i=1; i<=n;i++)
        {
            sum+=term;
            term = term+d;
        
        }
        cout<<"Sum without using formula is "<<sum;
    }
};
int main()
{
    ArithmaticProgression ap;
    ap.setadn();
    ap.sumUsingFormula();
    ap.sumWithoutFormula();
}