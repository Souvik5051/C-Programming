#include <iostream>
using namespace std;
int main()
{
    int cp, sp, amt;
    cout << "Enter the cost price : ";
    cin >> cp;
    cout << "Enter the selling price : ";
    cin >> sp;
    if (sp > cp)
    {
        amt = sp - cp; // profit
        cout << "Profit = " << amt;
    }
    else if (cp > sp)
    {
        amt = cp - sp; // loss
        cout << "Loss = " << amt;
    }
    else
    {
        cout << "No profit no loss ";
    }
    return 0;
}