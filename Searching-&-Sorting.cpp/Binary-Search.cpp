#include <iostream>
using namespace std;

int binary(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        int element = arr[mid];
        if (element == target)
        { // If element found then return index
            return mid;
        }

        if (target < element)
        {
            // Search in left
            end = mid - 1;
        }

        else
        {
            // Search in right
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    // Element not found
    return -1;
}
int main()
{

    int arr[] = {2, 4, 6, 8, 9, 10, 12};
    int size = 7;
    int target = 2;

    int indexoftarget = binary(arr, size, target);

    if (indexoftarget == -1)
    {
        cout << "Element is not found ";
    }
    else
    {
        cout << "Element is found at " << indexoftarget << " index";
    }
    return 0;
}