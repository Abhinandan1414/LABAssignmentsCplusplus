#include <iostream>
class Addition
{
    private: 
    int num1, num2, result;
    
    public:
    void read()
    {
        std::cout << "Enter Number 1 :";
        std::cin >> num1;
        std::cout << "Enter Number 2 :";
        std::cin >> num2;
    }
    void sum()
    {
        result = num1 + num2;
    }
    void print()
    {
        std::cout << "Result :" << num1 << " + " << num2 << " = " << result << std::endl;
    }
};
int main()
{
    Addition obj1, obj2;
    std::cout << "Simple Class Addition : Add Two Integers In C++\n";
    std::cout << "\nAdditionClass : obj1 Usage" << std::endl;
    obj1.read();
    obj1.sum();
    obj1.print();
    std::cout << "\nAdditionClass : obj2 Usage" << std::endl;
    obj2.read();
    obj2.sum();
    obj2.print();
}
