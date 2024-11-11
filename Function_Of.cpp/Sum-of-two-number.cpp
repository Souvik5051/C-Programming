#include <iostream>
using namespace std;

int getSum(int a, int b)
{
    int result = a + b;
    return result;
}
int main()
{
    int a;
    cout << "Enter the vlaue of a : ";
    cin >> a;
    int b;
    cout << "Enter the value of b : ";
    cin >> b;
    int sum = getSum(a, b);
    cout << "Addition result is :" << sum;
    return 0;
}