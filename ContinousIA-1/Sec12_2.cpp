#include <iostream>
using namespace std;
class department
{
    string specialization;
    int yearOfInception;
    int studentCount;

public:
    void setDepartmentDetails()
    {
        cout << "Enter Specialization:" << endl;
        cin >> specialization;
        cout << "Enter year of inception: " << endl;
        cin >> yearOfInception;
        cout << "Enter student count: " << endl;
        cin >> studentCount;
    }
    void displayDepartmentInfo()
    {
        cout << "Specialization :" << specialization << endl;
        cout << "Year of inception: " << yearOfInception << endl;
        cout << "Student count is: " << studentCount << endl;
    }
};

int main()
{
    department departments[3];
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        departments[i].setDepartmentDetails();
    }
    cout << "Department Details is as follows: " << endl;
    for (i = 0; i < 3; i++)
    {
        departments[i].displayDepartmentInfo();
    }
}