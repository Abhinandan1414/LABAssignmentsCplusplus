#include <iostream>
class StudentClass
{
private:
    char name[20];
    int regNo, sub1, sub2, sub3;
    float total, avg;
public:
    void read()
    {
        std::cout << "Enter Name :";
        std::cin >> name;
        std::cout << "Enter Registration Number :";
        std::cin >> regNo;
        std::cout << "Enter Marks for Subject 1,2 and 3 :";
        std::cin >> sub1 >> sub2 >> sub3;
    }
    void sum()
    {
        total = sub1 + sub2 + sub3;
        avg = total / 3;
    }
    void print()
    {
        std::cout << "Name :" << name << std::endl;
        std::cout << "Registration Number :" << regNo << std::endl;
        std::cout << "Marks :" << sub1 << " , " << sub2 << " , " << sub3 << std::endl;
        std::cout << "Total :" << total << std::endl;
        std::cout << "Average :" << avg << std::endl;
    }
};
int main()
{
    StudentClass stu1;
    std::cout << "\nStudentClass : Student 1" << std::endl;
    stu1.read();
    stu1.sum();
    stu1.print();
}