#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    // Arithmatic Operators
    cout << num1 + num2 << endl;
    cout << num1 - num2 << endl;
    cout << num1 * num2 << endl;
    cout << num1 / num2 << endl;
    cout << num1 % num2 << endl;

    // Relational Operators
    cout << (num1 == num2) << endl;
    cout << (num1 != num2) << endl;
    cout << (num1 > num2) << endl;

    // Assignment Operators
    num1 += 3;
    cout << num1 << endl;
    num2 -= 2;
    cout << num2 << endl;
    return 0;
}