#include <iostream>
using namespace std;

int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int add(int num1, int num2, int num3)
{
    int sum = num1 + num2 + num3;
    return sum;
}

float add(float num1, float num2)
{
    float sum = num1 + num2;
}
int main()
{
    int a, b;
    cout << "Enter the value : ";
    cin >> a >> b;
    int answer = add(a, b);
    cout << "Sum of two number with the function " << answer << endl;

    answer = add(a, b, 1);
    cout << "Sum of three number with the function " << answer;
    return 0;
}