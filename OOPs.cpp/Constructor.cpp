#include <iostream>
using namespace std;
class animal
{
    // State or Properties
private:
    int weight;

public:
    int age;
    string name;

    // Constructor is used for initializing
    // Default Constructor
    animal()
    {
        this->weight = 0;
        this->age = 0;
        this->name = " ";
        cout << "Constructor is called" << endl;
    }
    // Parameterised Constructor
    animal(int age)
    {
        this->age = age;
        cout << "Parameterised constructor is called " << endl;
    }
    animal(int age, int weight)
    {
        this->age = age;
        this->weight = weight;
        cout << "Parameterised constructor 2 called " << endl;
    }
    animal(int age, int weight, string name)
    {
        this->age = age;
        this->weight = weight;
        this->name = name;
        cout << "Parameterised constructor 3 called " << endl;
    }

    // Copy Constructor
    animal(animal &obj)
    {
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout << "I am inside in the copy instructor " << endl;
    }
    // Behaviour or function
    void eat()
    {
        cout << "Eating" << endl;
    }
    void sleep()
    {
        cout << "Sleeping" << endl;
    }
    int getWeight()
    {
        return weight;
    }
    void setWeight(int weight)
    {
        this->weight = weight;
    }

    void print()
    {
        cout << this->age << " " << this->weight << " " << this->name << " " << endl;
    }
};
int main()
{
    // Create an object
    //  animal a(12);
    //  animal *b=new animal(12,13,"souvik");

    // //Object copy
    // animal c = a;
    // animal d(*b);
    animal a;
    a.age = 12;
    a.setWeight(101);
    a.name = "babbar";

    // Copy the object
    animal b = a;

    a.print();
    b.print();
    return 0;
}