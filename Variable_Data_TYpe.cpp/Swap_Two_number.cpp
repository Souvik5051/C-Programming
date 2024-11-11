#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Before swap the number is : ";
    cin >> num1 >> num2;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After swaping the number is : " << num1 << " " << num2;
    return 0;
}