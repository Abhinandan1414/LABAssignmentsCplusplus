#include <iostream>
using namespace std;
class AP_Constructor
{
protected:
    int n1, AP_Difference, n2, i, ln, s1;

public:
    AP_Constructor()
    {
        s1 = 0;
        cout << "Input the starting number of the A.P. series: " << endl;
        cin >> n1;
        cout << "Input the number of items for the A.P. series: " << endl;
        cin >> n2;
        cout << "Input the common difference of A.P. series: " << endl;
        cin >> AP_Difference;
        s1 = (n2 * (2 * n1 + (n2 - 1) * AP_Difference)) / 2;
        ln = n1 + (n2 - 1) * AP_Difference;
        cout << "The Sum of the A.P. series are : " << endl;
        for (i = n1; i <= ln; i = i + AP_Difference)
        {
            if (i != ln)
                cout << i << " + ";
            else
                cout << i << " = " << s1 << endl;
        }
    }
    AP_Constructor(int n1, int n2, int AP_Difference)
    {
        s1 = 0;
        s1 = (n2 * (2 * n1 + (n2 - 1) * AP_Difference)) / 2;
        ln = n1 + (n2 - 1) * AP_Difference;
        cout << "The Sum of the A.P. series are : " << endl;
        for (i = n1; i <= ln; i = i + AP_Difference)
        {
            if (i != ln)
                cout << i << " + ";
            else
                cout << i << " = " << s1 << endl;
        }
    }
};
int main()
{
    int option;
    cout << "Please Enter the 1 for AP_Constructor with No paranter: " << endl;
    cout << "Please Enter the 2 for AP_Constructor with Paramter: \n ";
    cout << "Please Enter the 1 or 2 here : ";
    cin >> option;
   // system("cls");
    if (option == 1)
    {
        cout << "You Have Slected No Paramter AP_Constructoructor.... " << endl;
        AP_Constructor a;
    }
    else if (option == 2)
    {
        int n1, n2, AP_Difference;
        cout << "Input the starting number of the A.P. series: " << endl;
        cin >> n1;
        cout << "Input the number of items for the A.P. series: " << endl;
        cin >> n2;
        cout << "Input the common difference of A.P. series: " << endl;
        cin >> AP_Difference;
        AP_Constructor(n1, n2, AP_Difference);
    }
    else
    {
        cout << "Your Input is Wrong : Try Again." << endl;
    }
}