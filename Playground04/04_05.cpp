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
class InfotainmentManufacturer
{
protected:
    std::string infotainmentManufacturer;

public:
    InfotainmentManufacturer(std::string infotainmentManufacturerVal)
        : infotainmentManufacturer{infotainmentManufacturerVal}
    {
    }
    void setData(std::string infotainmentManufacturerVal)
    {
        infotainmentManufacturer = infotainmentManufacturerVal;
    }
    void displayData()
    {
        cout << "Infotainment Manufacturer Is: " << infotainmentManufacturer << endl;
    }
};

class SuperUtilityVehicle : public Vehicle, InfotainmentManufacturer
{
public:
    SuperUtilityVehicle(std::string makeVal, int yesrOfManufatureVal,
                        std::string registrationNumVal, float mileageVal,
                        std::string infotainmentManufacturer)
        : Vehicle{makeVal, yesrOfManufatureVal, registrationNumVal, mileageVal},
          InfotainmentManufacturer{infotainmentManufacturer}

    {
    }
    void setData(std::string makeVal, int yearOfManufatureVal, std::string registrationNumVal,
                 float mileageVal, std::string infotainmentManufacturerVal)
    {
        make = makeVal;
        yearOfManufature = yearOfManufatureVal;
        registrationNum = registrationNumVal;
        mileage = mileageVal;
        infotainmentManufacturer = infotainmentManufacturerVal;
    }
    void displayData()
    {
        cout << "Make of the vehicle is: " << make << endl;
        cout << "Year of manufacture is: " << yearOfManufature << endl;
        cout << "Registration number is: " << registrationNum << endl;
        cout << "Mileage is: " << mileage << endl;
        cout << "Infotainment Manufacturer is: " << infotainmentManufacturer << endl;
    }
};

int main()
{
    SuperUtilityVehicle suv("HondaCRV", 2021, "KA049742", 8.5, "Harman");
    suv.displayData();
    suv.setData("Mercedez", 2021, "KA041678", 8, "Harman");
    suv.displayData();
}