#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter an integer : ";
    cin >> number;
    if (number > 0)
    {
        cout << "You entered a possitive integer:" << number << endl;
    }
    else
    {
        cout << "The number is negetive and skiped";
    }
    return 0;
}