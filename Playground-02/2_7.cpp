#include <iostream>
// #include <conio>
#include <string>
class Student
{
    std::string name;
    int marks;

public:
    void getName()
    {
        std::cin>>name;
    }
    void getMarks()
    {
        std::cin >> marks;
    }
    void displayInfo()
    {
        std::cout << "Name : " << name << std::endl;
        std::cout << "Marks : " << marks << std::endl;
    }
};
int main()
{
    int i = 0;
    Student st[5];
    for (i = 0; i < 5; i++)
    {
        std::cout << "Student " << i + 1 << std::endl;
        std::cout << "Enter name" << std::endl;
        st[i].getName();
        std::cout << "Enter marks" << std::endl;
        st[i].getMarks();
    }
    std::cout<<"Stored Values Are: "<<std::endl;
    for (i = 0; i < 5; i++)
    {
        std::cout << "Student " << i + 1 << std::endl;
        st[i].displayInfo();
    }
    return 0;
}
