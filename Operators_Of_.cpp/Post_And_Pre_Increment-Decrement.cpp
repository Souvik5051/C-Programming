#include <iostream>
using namespace std;
int main()
{
 
 
    // pre and post increment
    int a = 6;
    cout << (a++) << endl; // 6
    int b = 6;
    cout << (++b) << endl; // 7

    // pre and post decrement
    int c = 5;
    cout << (c--) << endl; // 5
    int d = 7;
    cout << (--d) << endl; // 6

    int e = 6;
    cout << (e++) << endl; // 6
    int f = e + 5;
    cout << (f) << endl; // 12

    return 0;
}