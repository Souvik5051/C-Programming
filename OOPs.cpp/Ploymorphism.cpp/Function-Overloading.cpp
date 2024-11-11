#include <iostream>
using namespace std;
class maths
{
public:
    int sum(int a, int b)
    {
        cout << "I am in first Signature " << endl;
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        cout << "I am in second Signature " << endl;
        return a + b + c;
    }
    int sum(int a, float b)
    {
        cout << "I am in third Signature " << endl;
        return a + b;
    }

    // Here error will be created because in function overloading (function type is not change ,we can change only the function parameter example-vaiable,variable data type change)
    //   double sum(int a,int b){
    //     return 200;
    //   }
};
int main()
{
    maths obj;
    cout << obj.sum(2, 7) << endl;
    cout << obj.sum(2, 7, 4) << endl;
    cout << obj.sum(2, 7.12f) << endl;
    return 0;
}