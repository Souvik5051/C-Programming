#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1;
        }
        int start = row;
        for (int col = 0; col < row; col++)
        {
            cout << start;
            start--;
        }
        cout << endl;
    }
    return 0;
}