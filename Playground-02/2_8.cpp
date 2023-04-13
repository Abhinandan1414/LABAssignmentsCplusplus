#include <iostream>
class employee
{
private:
    std::string name;
    std::string post;
    int age;
    float salary;
public:
    void input();
    void display();
};
void employee ::input()
{
    std::cout <<"Enter name" << std::endl;
    std::cin >> name;
    std::cout << "Enter age"<< std::endl;
    std::cin >> age;
    std::cout <<"Enter Designation"<< std::endl;
    std::cin >> post;
    std::cout <<"Enter salary" << std::endl;
    std::cin >> salary;
}
void employee ::display()
{
    std::cout <<"Employee name = "<< name << std::endl;
    std::cout <<"Age = "<< age << std::endl;
    std::cout <<"Designation = "<< post << std::endl;
    std::cout <<"Salary = "<< salary << std::endl;
}
int main()
{
    int i;
    employee e[3];
    for (i = 0; i < 3; i++)
    {
        std::cout <<"Get For " << i+1 <<std::endl;
        e[i].input();
    }
    std::cout<<"Details";
    for (i = 0; i <3; i++)
    {
        std::cout <<"Employee" << i << std::endl;
        e[i].display();
    }
    
}