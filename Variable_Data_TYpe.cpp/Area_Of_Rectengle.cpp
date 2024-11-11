#include <iostream>
using namespace std;
int main()
{
    int length, breagth;
    cout << "Enter the length and breagth of area : ";
    cin >> length >> breagth;
    int area = length * breagth;
    int perimeter = 2 * (length + breagth);
    cout << "Area of rectangle is : " << area << endl;
    cout << "Perimeter of rectangle is : " << perimeter;
    return 0;
}