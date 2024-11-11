#include <iostream>
using namespace std;
int main()
{
    int length, breagth;
    cout << "Enter the length : ";
    cin >> length;
    cout << "Enter the breadth : ";
    cin >> breagth;
    if (length == breagth)
    {
        cout << "It is a square ";
    }
    else
    {
        cout << "It is a rectangle";
    }
    return 0;
}