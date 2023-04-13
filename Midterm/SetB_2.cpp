// Complexity of the solution moderate for 4 Sem Students
// Demonstrates
// Functions
// Control structures
// Expressions
// Classes and Objects
// Blooms Taxonomy Application

#include <iostream>
#include <cmath>
using namespace std;
class DataSet
{
    private:
    int dataset[100];
    float mean,variance,sd;
    public:
    void getDataAndCalculateStats()
    {
        int i=0,m=0;
        float totalVariance=0;
        float sum=0;
        cout<<"How many elements in data set?";
        cin>>m;
        cout<<"Enter the elements individually";
        for(i=0;i<m;i++)
        {
            cin>>dataset[i];
            sum = sum + dataset[i];
        }
        cout <<"sum is"<<sum<<"m is"<<m;
        mean = (sum/m);
        for(i=0;i<m;i++)
        {
            totalVariance = (dataset[i]-mean)*(dataset[i]-mean);
        }
        variance = totalVariance/m;
        sd = sqrt(variance);
    }
    void printStats()
    {
        cout<<"Mean is "<<mean;
        cout<<"Variance is"<<variance;
        cout<<"SD is"<<sd;
    }
};
int main()
{
    DataSet dataset;
    dataset.getDataAndCalculateStats();
    dataset.printStats();
}