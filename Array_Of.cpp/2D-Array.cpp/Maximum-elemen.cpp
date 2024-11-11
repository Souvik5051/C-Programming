#include <iostream>
#include <limits.h>
using namespace std;

int getMax(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxi)
                maxi = arr[i][j];
        }
    }
    return maxi;
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

    int ans = getMax(arr, row, col);
    cout << "The maximum element " << ans;

    return 0;
}