#include <iostream>
class Room
{
private:
    double length;
    double breadth;
    double height;
public:
    void setdata()
    {
         length = 42.5;
         breadth = 30.8;
         height = 19.2;
    }
    double calculateArea()
    {
        return length * breadth;
    }
    double calculateVolume()
    {
        return length * breadth * height;
    }
};
int main()
{
    Room room1;
    room1.setdata();
   
    std::cout<<"Area of Room ="<< room1.calculateArea() << std::endl;
    std::cout<< "Volume of Room ="<< room1.calculateVolume() << std::endl;
}