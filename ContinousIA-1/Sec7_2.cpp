#include <iostream>
using namespace std;
class bus
{
    string manufacturer;
    int yearOfManufacturing;
    float mileage;

public:
    void setBusDetails()
    {
        cout << "Enter Manufaturer:" << endl;
        cin >> manufacturer;
        cout << "Enter year of manufacturing: " << endl;
        cin >> yearOfManufacturing;
        cout << "Enter mileage details: " << endl;
        cin >> mileage;
    }
    void displayBusInfo()
    {
        cout << "Manufacturer :" << manufacturer << endl;
        cout << "Year of manufacturing: " << yearOfManufacturing << endl;
        cout << "Mileage is: " << mileage << endl;
    }
};

int main()
{
    bus buses[3];
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        buses[i].setBusDetails();
    }
    cout << "Bus Details is as follows: " << endl;
    for (i = 0; i < 3; i++)
    {
        buses[i].displayBusInfo();
    }
}