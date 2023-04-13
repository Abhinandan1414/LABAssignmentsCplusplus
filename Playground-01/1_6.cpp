/*
Display Sum and Average of Array Elements Using for Loop
Code
*/
#include <iostream>
using namespace std;
int main()
{
    int i, count, sum, arr[50];
    float average;
    cout << "Enter number of elements\n";
    cin >> count;
    cout << "Enter " << count << " elements\n";
    for (i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    sum = 0;
    for (i = 0; i < count; i++)
    {
        sum += arr[i];
    }
    average = (float)sum / count;
    cout << "Average = " << average;
    return 0;
}