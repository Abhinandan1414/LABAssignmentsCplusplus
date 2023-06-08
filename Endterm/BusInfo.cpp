#include <iostream>
using namespace std;
class BusInfo
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
    float getMileage()
    {
        return mileage;
    }
};

int main()
{
    const int maxBuses = 3;
    BusInfo buses[maxBuses];
    int i = 0;
    for (i = 0; i < maxBuses; i++)
    {
        buses[i].setBusDetails();
    }
    cout << "Bus Details is as follows: " << endl;
    for (i = 0; i < maxBuses; i++)
    {
        buses[i].displayBusInfo();
    }
    float totalMileage =0;
    for (i =0 ; i< maxBuses;i++)
    {
          totalMileage+=buses[i].getMileage();
    }
    cout<< "The average mileage is "<<totalMileage/maxBuses;
}