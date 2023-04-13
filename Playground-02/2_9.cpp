#include <iostream>
class swapping
{
public:
    void swap(int *num1, int *num2)
    {
        int temp;
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
};
int main()
{
    int num1, num2;
    swapping s;
    std::cout << "\nEnter the first number : ";
    std::cin >> num1;
    std::cout << "\nEnter the Second number : ";
    std::cin >> num2;
    s.swap(&num1, &num2);
    std::cout << "\nFirst number : " << num1;
    std::cout << "\nSecond number: " << num2;
}