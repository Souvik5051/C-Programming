#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value : ";
    cin >> n;
    int a;
    for (int i = 1; i <= n; i++)
    {
        a = 1;
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << a << " ";
            a = a + 2;
        }
        cout << endl;
    }
    return 0;
}