#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j = j + 2)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}