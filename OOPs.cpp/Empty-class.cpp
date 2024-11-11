#include <iostream>
using namespace std;

// Syntax for creating a class

class animal
{
    int age;
    int weight;
    char ch;
};

int main()
{
    cout << "Size of empty class is : " << sizeof(animal) << endl;
    return 0;
}