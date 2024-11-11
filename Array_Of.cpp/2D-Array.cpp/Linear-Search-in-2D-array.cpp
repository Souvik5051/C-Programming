#include <iostream>
using namespace std;
bool find(int arr[][3], int n, int m, int key)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int row = 3, col = 3;
    cout << "Enter the element ";
    // cin>>row>>col;
    int arr[3][3];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    int key;
    cout << "Enter the key element ";
    cin >> key;
    if (find(arr, row, col, key))
    {
        cout << "Found the element " << endl;
    }
    else
    {
        cout << "Element is not found ";
    }

    return 0;
}