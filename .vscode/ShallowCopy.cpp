// Program to demonstrate default behaviour of C++ compiler
// Bit wise copy of object contents when one object is assigned to 
// another.


#include <iostream>
using namespace std;
class container
{
    int *pointer1 = new int;
    int *pointer2 = new int;
    int *pointer3 = new int;
    int *pointer4 = new int[4];

public:
    void displayPointerContents()
    {
        int i = 0;
        cout << "Pointer 1 is: " << pointer1 << endl;
        cout << "Pointer 2 is: " << pointer2 << endl;
        cout << "Pointer 3 is: " << pointer3 << endl;
        for (i = 0; i < 3; i++)
        {
            cout << "Pointer4 +" << i << "is: " << pointer4 + i <<endl;
        }
    }
};
int main()
{
    container c1, c2;
    cout<<"------------Before Shallow Copy------------------"<<endl;
    c1.displayPointerContents();
    c2.displayPointerContents();
    c1 = c2;
    cout<<"------------After Shallow Copy------------------"<<endl;
    c1.displayPointerContents();
    c2.displayPointerContents();
}