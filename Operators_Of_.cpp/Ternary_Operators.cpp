#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the value : ";
    cin >> a;
    cout << sizeof(a) << endl;
    char name = 'a';
    cout << sizeof(name) << endl;

    cout << (&a) << endl;
    return 0;
}