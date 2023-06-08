#include <iostream>
#include <cmath>
using namespace std;
class point
{
private:
    int x, y;
    float r;

public:
    void setxandy()
    {
        cout << "Enter x:" << endl;
        cin >> x;
        cout << "Enter y:" << endl;
        cin >> y;
    }
    void calculateDistance()
    {
        r = sqrt(x * x + y * y);
    }
    void display()
    {
        cout << "x and y are: " << x << " and " << y << endl;
        cout << "Distance r is: " << r << endl;
    }
};

int main()
{
    point p;
    p.setxandy();
    p.calculateDistance();
    p.display();
}