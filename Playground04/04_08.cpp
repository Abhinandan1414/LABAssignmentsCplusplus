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
class heavyMotorVehicle : public vehicle
{
    int cargoCapacity;

public:
    void setData(std::string manfaturerVal, int yearOfManufactureVal, int cargoCapacityAllowed)
    {
        manufacturer = manfaturerVal;
        yearOfManufacture = yearOfManufactureVal;
        cargoCapacity = cargoCapacityAllowed;
    }
    void displayData()
    {
        cout << "Manufacturer is: " << manufacturer << endl;
        cout << "Year of Manufacture is: " << yearOfManufacture << endl;
        cout << "Cargo Capacity Allowed" << cargoCapacity << endl;
    }
};
int main()
{
    vehicle *ptrlmv;
    vehicle *ptrhmv;

    lightMotorVehicle lmv;
    lmv.setData((std::string) "Honda", 1999, 2);
    heavyMotorVehicle hmv;
    hmv.setData((std::string) "TATA", 2023, 10000);

    ptrlmv = &lmv;
    ptrhmv = &hmv;

    ptrlmv->displayData();
    ptrhmv->displayData();
}