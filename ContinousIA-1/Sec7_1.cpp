#include <iostream>
using namespace std;
class triangle
{
    int side1,side2,side3;
    public:
    void getSides()
    {
        cout<<"Side 1 :"<<endl;
        cin>>side1;
        cout<<"Side 2 :"<<endl;
        cin>>side2;
        cout<<"Side 3 :"<<endl;
        cin>>side3;
    }
    void typeOfTriangle()
    {
        if (side1 == side2 && side2 == side3)
        {
            cout<<"Triangle is equilateral"<<endl;
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3)
        {
            cout<<"Triangle is isosceles"<<endl;
        }
        else
        {
            cout<<"Triangle is scalene"<<endl;
        }
    }
};
int main()
{
    triangle triangleType;
    triangleType.getSides();
    triangleType.typeOfTriangle();
}