#include <iostream>
class calculate
{
public:
    int r, h, a;
    float r1;
    void input()
    {
        std::cout << "Enter radius and height of a cylinder:";
        std::cin >> r >> h;
        std::cout << "Enter side of cube:";
        std::cin >> a;
        std::cout << "Enter radius of sphere: ";
        std::cin >> r1;
    }
    float vol(int, int);
    float vol(float);
    int vol(int);
};
float calculate ::vol(int r, int h)
{
    return (3.14 * r * r * h);
}
float calculate ::vol(float r1)
{
    return ((4 * 3.14 * r1 * r1 * r1) / 3);
}
int calculate ::vol(int a)
{
    return (a * a * a);
}
int main()
{
    calculate ob1;
    ob1.input();
    std::cout << "Volume of cylinder is " << ob1.vol(ob1.r, ob1.h);
    std::cout << "\nVolume of cube is " << ob1.vol(ob1.a);
    std::cout << "\nVolume of sphere is " << ob1.vol(ob1.r1);
}
