// Demonstrates
// Functions
// Control structures
// Expressions
// Pointers
// Classes and Objects
// Programming Logic
// Blooms Taxonomy Application

#include <iostream>
#include <cmath>
using namespace std;
class Point
{
private:
    int x, y;

public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int x, int y)
    {
        x = x;
        y = y;
    }
    
    void setxy()
    {
        cout << "Enter cartesian co-ordinates separated by space ";
        cin >> x >> y;
    }
    void getxy(int *a, int *b)
    {
        *a = x;
        *b = y;
    }
};

int main()
{
    Point p1, p2;
    float shortestDistance = 0;
    int x1, y1, x2, y2;
    p1.setxy();
    p2.setxy();
    p1.getxy(&x1, &y1);
    p2.getxy(&x2, &y2);
    shortestDistance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << "Shortest distance between Point(" << x1 << "," << y1 << ")";
    cout << "and";
    cout << "Shortest distance between Point(" << x2 << "," << y2 << ")";
    cout << shortestDistance;
}