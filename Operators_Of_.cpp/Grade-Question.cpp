#include <iostream>
using namespace std;
int main()
{
    int total, boys, girls;
    boys = 17;
    total = (80 * 45) / 100; // Total number of getting grade A
    girls = total - boys;    // Number of getting grade A
    cout << "Number of girls getting grade A = " << girls << endl;
    return 0;
}