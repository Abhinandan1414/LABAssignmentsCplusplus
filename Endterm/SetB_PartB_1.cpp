#include <iostream>
using namespace std;
class vehicle
{
protected:
    std::string manufacturer;
    int yearOfManufacture;

public:
    virtual void maxSpeed() = 0;
    virtual void setData(std::string manfacturerVal, int yearOfManuctureVal)
    {
        manufacturer = manfacturerVal;
        yearOfManufacture = yearOfManuctureVal;
    }
    virtual void displayData()
    {
        cout << "Year of Manufacture is: " << yearOfManufacture << endl;
    }
};
class lightMotorVehicle : public vehicle
{
    int infantsAllowed;

public:
    void maxSpeed()
    {
        cout << "Max speed is 140 km/hr" << endl;
    }
    void setData(std::string manufacturerVal, int yearOfManufactureVal, int infantsAllowedVal)
    {
        manufacturer = manufacturerVal;
        yearOfManufacture = yearOfManufactureVal;
        infantsAllowed = infantsAllowedVal;
    }
    void displayData()
    {
        cout << "Manufacturer is: " << manufacturer << endl;
        cout << "Year of Manufacture is: " << yearOfManufacture << endl;
        cout << "Infants Allowed is: " << infantsAllowed << endl;
    }
};
int main()
{
    vehicle *ptrlmv;
    vehicle *ptrhmv;

    // vehicle vh1; If you uncomment this you should get compilation error as abstract classes
    // cannot be instantiated.

    lightMotorVehicle lmv;
    lmv.setData((std::string) "Honda", 1999, 2);

    ptrlmv = &lmv;

    ptrlmv->displayData();
    ptrlmv->maxSpeed();

}