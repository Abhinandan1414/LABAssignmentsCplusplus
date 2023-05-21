#include <iostream>
using namespace std;
class Vehicle
{
protected:
    std::string make;
    int yearOfManufature;
    std::string registrationNum;
    float mileage;

public:
    Vehicle()
    {
        make = "";
        yearOfManufature = 0;
        registrationNum ="";
        mileage = 0;
    }
    Vehicle(std::string makeVal, int yearOfManufatureVal, std::string registrationNumVal, float mileageVal)
       
    {
        make =makeVal;
        yearOfManufature = yearOfManufatureVal;
        registrationNum = registrationNumVal;
        mileage = mileageVal ;
    }
    void setData(std::string makeVal, int yesrOfManufatureVal, std::string registrationNumVal, float mileageVal)
    {
        make = makeVal;
        yearOfManufature = yesrOfManufatureVal;
        registrationNum = registrationNumVal;
        mileage = mileageVal;
    }
    void displayData()
    {
        cout << "Make of the vehicle is: " << make << endl;
        cout << "Year of manufature is: " << yearOfManufature << endl;
        cout << "Registration number is: " << registrationNum << endl;
        cout << "Mileage is: " << mileage << endl;
    }
};
class LightMotorVehicle : public Vehicle
{
    int infantPassengers;

public:
    LightMotorVehicle()
    {
        infantPassengers = 0;
    }
    LightMotorVehicle(std::string makeVal, int yearOfManufatureVal,
                      std::string registrationNumVal, float mileageVal, int infantPassengerVal)
    {
        make =makeVal;
        yearOfManufature = yearOfManufatureVal;
        registrationNum = registrationNumVal;
        mileage = mileageVal ;
        infantPassengers = infantPassengerVal;
    }
    void setData(std::string makeVal, int yearOfManufatureVal, std::string registrationNumVal, float mileageVal, int infantPassengerVal)
    {
        make = makeVal;
        yearOfManufature = yearOfManufatureVal;
        registrationNum = registrationNumVal;
        mileage = mileageVal;
        infantPassengers = infantPassengerVal;
    }
    void displayData()
    {
        cout << "Make of the vehicle is: " << make << endl;
        cout << "Year of manufacture is: " << yearOfManufature << endl;
        cout << "Registration number is: " << registrationNum << endl;
        cout << "Mileage is: " << mileage << endl;
        cout << "The number of infants allowed: " << infantPassengers << endl;
    }
};

int main()
{
    Vehicle v1("TVS", 1999, "KA02C1234", 70.0);
    LightMotorVehicle lmv("TataIndigo", 2013, "KA04C3922", 13.5, 2);
    v1.displayData();
    lmv.displayData();
    v1.setData("Honda", 2003, "KA04C1564", 90);
    lmv.setData("HondaCivic", 2009, "KA05C5678", 23, 2);
    v1.displayData();
    lmv.displayData();
}