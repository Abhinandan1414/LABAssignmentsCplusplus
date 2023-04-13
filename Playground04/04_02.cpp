#include <iostream>
using namespace std;
class Person
{
private:
    std::string name;
    int age;
    std::string designation;
    float salary;

public:
   
    //set the data using setData
    void setData()
    {
        cout << "Enter the name:" << endl;
        cin >> name;
        cout << "Enter the age:" << endl;
        cin >> age;
        cout << "Enter the designation:" << endl;
        cin >> designation;
        cout << "Enter the salary:" << endl;
        cin >> salary;
    }

    //Display the data using displayDetails
    void displayDetails()
    {
        cout << " Name of the employee is: " << name << endl;
        cout << " Age of the employee is: " << age << endl;
        cout << " Designation of the employee is: " << designation << endl;
        cout << " Salary of the employee is: " << salary << endl;
    }
};
int main()
{
    int i = 0;
    Person listofPersons[3];
    Person *pointerToPerson;
    pointerToPerson = listofPersons;
    //Iterate through the array setting the values
    for (i = 0; i < 3; i++)
    {
        pointerToPerson->setData();
        pointerToPerson++;
    }
    // Reinitialize the pointer to start of array again
    // display data of each object of array
    pointerToPerson = listofPersons;
    for (i = 0; i < 3; i++)
    {
        pointerToPerson->displayDetails();
        pointerToPerson++;
    }
}