#include <iostream>
using namespace std;
class vehicle
{
protected:
    std::string manufacturer;
    int yearOfManufacture;

public:
    virtual void setData(std::string manfacturerVal, int yearOfManuctureVal)
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
class heavyMotorVehicle : public vehicle
{
    int cargoCapacity;

public:
    void setData(std::string manfaturerVal, int yearOfManufactureVal, int cargoCapacityAllowed)
    {
        this->manufacturer = manfaturerVal;
        this->yearOfManufacture = yearOfManufactureVal;
        this->cargoCapacity = cargoCapacityAllowed;
    }
    void displayData()
    {
        cout << "Manufacturer is: " << this->manufacturer << endl;
        cout << "Year of Manufacture is: " << this->yearOfManufacture << endl;
        cout << "Cargo Capacity Allowed" << this->cargoCapacity << endl;
    }
};
int main()
{
    lightMotorVehicle lmv;
    lmv.setData((std::string) "Honda", 1999, 2);
    heavyMotorVehicle hmv;
    hmv.setData((std::string) "TATA", 2023, 10000);

    lmv.displayData();
    hmv.displayData();
}