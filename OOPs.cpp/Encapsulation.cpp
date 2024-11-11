#include <iostream>
using namespace std;
class Animal
{
    //Encapsulation means that all the data member is private In C++
    //Here we see that (age and weight) data member is private 
private:
    int age;
    int weight;

public:
    void eat()
    {
        cout << "Eating" << endl;
    }
    int getAge()
    {
        return this->age;
    }
    void setAge(int age)
    {
        this->age = age;
    }
};
int main()
{

    Animal a;
    
    return 0;
}