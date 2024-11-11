#include <iostream>
using namespace std;

void getCount(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    getCount(n);
    return 0;
}