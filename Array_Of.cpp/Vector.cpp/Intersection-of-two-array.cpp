#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    vector<int> brr{2, 3, 4, 6, 7};
    vector<int> ans;
    // for Outer loop
    for (int i = 0; i < arr.size(); i++)
    {
        // for store the element
        int element = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j])
            {
                brr[j] = -1;
                //  Or break hoga
                ans.push_back(element);
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}