// Program to demonstrate copy constructor 
// where default behaviour of C++ compiler 
// to do bit wise copy is avoided using 
// copy constrcutors.


#include <iostream>
using namespace std;
class container
{
    int arr[3] = {4, 5, 6};
    int *pointer1;
    int *pointer2;
    int *pointer3;
    int *pointer4;

public:
    container()
    {
        pointer1 = new int{1};
        pointer2 = new int{2};
        pointer3 = new int{3};
        pointer4 = arr;
    }
    container(const container &c1)
    {
        int j;
        pointer1 = new int;
        pointer2 = new int;
        pointer3 = new int;
        pointer4 = new int[3];
        *pointer1 = *c1.pointer1;
        *pointer2 = *c1.pointer2;
        *pointer3 = *c1.pointer3;
        for (j = 0; j < 3; j++)
        {
            pointer4[0] = c1.pointer4[0];
            pointer4[1] = c1.pointer4[1];
            pointer4[2] = c1.pointer4[2];
        }
    }

    void displayPointerContents()
    {
        cout << "Printing the pointer addresses" << endl;
        int i = 0;
        cout << "Pointer 1 is: " << pointer1 << endl;
        cout << "Pointer 2 is: " << pointer2 << endl;
        cout << "Pointer 3 is: " << pointer3 << endl;
        for (i = 0; i < 3; i++)
        {
            cout << "Pointer4 +" << i << "is: " << pointer4 + i << endl;
        }
    }
    void displayValuePointedByPointers()
    {
        cout << "Printing the values pointed by pointer" << endl;
        int j;
        cout << "pointer1 is pointing to: " << *pointer1 << endl;
        cout << "pointer2 is pointing to: " << *pointer2 << endl;
        cout << "pointer3 is pointing to: " << *pointer3 << endl;
        for (j = 0; j < 3; j++)
        {
            cout<<"pointer4["<<j<<"] is pointing to: ";
            cout << pointer4[j] << endl;
        }
    }
};
int main()
{
    container c1;
    c1.displayPointerContents();
    c1.displayValuePointedByPointers();
    container c2 = c1;
    c2.displayPointerContents();
    c2.displayValuePointedByPointers();
}