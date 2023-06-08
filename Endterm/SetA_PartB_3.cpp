#include <iostream>
using namespace std;
class vehicle
{
protected:
    std::string manufacturer;
    int yearOfManufacture;

public:
    void setData(std::string manfacturerVal, int yearOfManuctureVal)
    {
        this->manufacturer = manfacturerVal;
        this->yearOfManufacture = yearOfManuctureVal;
    }
    virtual void displayData()
    {
        cout << "Year of Manufacture is: " << this->yearOfManufacture << endl;
    }
};
class lightMotorVehicle : public vehicle
{
    int infantsAllowed;

public:
    void setData(std::string manufacturerVal, int yearOfManufactureVal, int infantsAllowedVal)
    {
        this->manufacturer = manufacturerVal;
        this->yearOfManufacture = yearOfManufactureVal;
        this->infantsAllowed = infantsAllowedVal;
    }
    void displayData()
    {
        cout << "Manufacturer is: " << this->manufacturer << endl;
        cout << "Year of Manufacture is: " << this->yearOfManufacture << endl;
        cout << "Infants Allowed is: " << this->infantsAllowed << endl;
    }
};
int main()
{
    lightMotorVehicle lmv;
    lmv.setData((std::string) "Honda", 1999, 2);

    lmv.displayData();
}