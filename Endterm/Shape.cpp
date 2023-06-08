#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void getShape()
    {
        cout << "I am Shape" <<endl;
    }
};
class Circle : public Shape
{
public:
    void getShape()
    {
        cout << " I am circle shape" <<endl;
    }
};
class Rectangle : public Shape
{
public:
    void getShape()
    {
        cout << " I am Rectangle shape" <<endl;
    }
};
class Triangle : public Shape
{
public:
    void getShape()
    {
        cout << " I am Triangle shape" <<endl;
    }
};

// Driver Code
int main()
{
    Shape shape0;
    Circle shape1;
    Rectangle shape2;
    Triangle shape3;

    Shape *shapePointer;
    shapePointer = &shape0;
    shapePointer->getShape();
    shapePointer = &shape1;
    shapePointer->getShape();
    shapePointer = &shape2;
    shapePointer->getShape();
    shapePointer = &shape3;
    shapePointer->getShape();
}