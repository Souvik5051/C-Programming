#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter the first number : ";
    cin >> x;
    cout << "Enter the second number : ";
    cin >> y;
    cout << ((x < 50) && (x < y)) << endl;
    return 0;
}