#include <iostream>
class Room
{
private:
    double length;
    double breadth;
    double height;
public:
    double calculateArea()
    {
        return length * breadth;
    }
    double calculateVolume()
    {
        return length * breadth * height;
    }
    void getdata()
    {
        std::cout<<"Enter the length, breadth and height ";
        std::cin>>length>>breadth>>height;
    }
};
int main()
{
    Room room1;
    room1.getdata();
    std::cout<<"Area of Room ="<< room1.calculateArea() << std::endl;
    std::cout<< "Volume of Room ="<< room1.calculateVolume() << std::endl;
}