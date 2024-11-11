#include <iostream>
using namespace std;
int main()
{
    int n;
    int a;
    cout << "Enter the value : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a = 1;
        for (int j = 1; j <= n; j++)
        {

            int d = a + 64;
            char ch = (char)d;
            cout << ch << " ";
            a++;
        }
        cout << endl;
    }
    return 0;
}