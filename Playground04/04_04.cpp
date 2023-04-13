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
    Vehicle(std::string makeVal, int yearOfManufatureVal, std::string registrationNumVal, float mileageVal)
        : make{makeVal}, yearOfManufature{yearOfManufatureVal}, registrationNum{registrationNumVal},
          mileage{mileageVal}
    {
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
protected:
    int infantPassengers;

public:
    LightMotorVehicle(std::string makeVal, int yesrOfManufatureVal,
                      std::string registrationNumVal, float mileageVal, int infantPassengerVal)
        : Vehicle{makeVal, yesrOfManufatureVal, registrationNumVal, mileageVal},
          infantPassengers{infantPassengerVal}
    {
    }
    void setData(std::string makeVal, int yearOfManufatureVal,
                 std::string registrationNumVal, float mileageVal, int infantPassengerVal)
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

class SuperUtilityVehicle : public LightMotorVehicle
{
    std::string infotainmentManufacturer;

public:
    SuperUtilityVehicle(std::string makeVal, int yesrOfManufatureVal,
                        std::string registrationNumVal, float mileageVal, int infantPassengerVal,
                        std::string infotainmentManufacturer)
        : LightMotorVehicle{makeVal, yesrOfManufatureVal, registrationNumVal, mileageVal, infantPassengerVal},
          infotainmentManufacturer{infotainmentManufacturer}

    {
    }
    void setData(std::string makeVal, int yearOfManufatureVal, std::string registrationNumVal,
                 float mileageVal, int infantPassengerVal, std::string infotainmentManufacturer)
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
        cout << "Infotainment Manufacturer is: " << infotainmentManufacturer << endl;
    }
};

int main()
{
    Vehicle v1("TVS", 1999, "KA02C1234", 70.0);
    LightMotorVehicle lmv("TataIndigo", 2013, "KA04C3922", 13.5, 2);
    SuperUtilityVehicle suv("HondaCRV", 2021, "KA049742", 8.5, 2, "Harman");
    v1.displayData();
    lmv.displayData();
    suv.displayData();
    v1.setData("Honda", 2003, "KA04C1564", 90);
    lmv.setData("HondaCivic", 2009, "KA05C5678", 23, 2);
    suv.setData("Mercedez", 2021, "KA041678", 8, 2, "Harman");
    v1.displayData();
    lmv.displayData();
    suv.displayData();
}