#include <iostream>
using namespace std;

int getSum(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter the vlaue of n : ";
    cin >> n;
    int ans = getSum(n);
    cout << "Even sum is " << ans << endl;
    return 0;
}