#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the vlaue : ";
    cin >> n;
    if ((n % 3 == 0) && (n % 5 == 0))
    {
        cout << n << " is divisible by 3 and 5" << endl;
    }
    else
    {
        cout << n << " is not divisible by 3 and 5";
    }
    return 0;
}