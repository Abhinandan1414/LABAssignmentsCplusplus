#include <iostream>
using namespace std;
void SumNum(int A, int B);
void SumNum(int A, int B, int C);
void SumNum(int A, int B, int C, int D);
int main()
{
    SumNum(1, 2);
    SumNum(1, 2, 3);
    SumNum(1, 2, 3, 4);
    return 0;
}
void SumNum(int A, int B)
{
    cout << endl
         << "Sum of" << A << " and " << B << " is : " << A + B;
}
void SumNum(int A, int B, int C)
{
    cout << endl
         << "Sum of" << A << " and " << B << " and " << C << " is : " << A + B + C;
}
void SumNum(int A, int B, int C, int D)
{
    cout << endl
         << "Sum of" << A << " and " << B << " and " << C << " and " << D << " is : " << A + B + C + D;
}