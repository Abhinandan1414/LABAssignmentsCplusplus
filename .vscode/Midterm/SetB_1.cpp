// Complexity of the solution moderate for 4 Sem Students
// Demonstrates
// Functions
// Control structures
// Expressions
// Pointers
// Blooms Taxonomy Application

#include<iostream>
using namespace std;
void cartesianProduct(string* a, int m, string* b, int n)
{
    int i,j;
    for (i=0; i<m; i++)
    {
        for(j=0;j<n;j++)
        {
           cout<<"("<<a[i]<<","<<b[j]<<")";
        }
    }
}
int main()
{
    const int N = 10;
    int m=0,n=0,i=0,j=0;
    string a[N];
    string b[N];
    cout<<"Enter how many elements in first set?";
    cin>>m;
    cout<<"Enter how many elements in second set?";
    cin>>n;
    cout<<"Enter the first set";
    for(i=0;i<m;i++)
    cin>>a[i];
    cout<<"Enter the second set";
    for(j=0;j<n;j++)
    cin>>b[j];
    cartesianProduct(a,m,b,n);
}
