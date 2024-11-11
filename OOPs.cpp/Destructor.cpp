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
    // Behaviour or Function
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

    // Constructor
    // animal(){
    //     cout<<"It is constructor"<<endl;
    // }

    // Destructor
    ~animal()
    {
        cout << "I am inside in the destructor " << endl;
    }
};
int main()
{
    cout << "a object creation " << endl;
    animal a;
    a.age = 12;
    cout << "b object creation " << endl;
    animal *b = new animal;
    b->age = 13;

    // Manually
    delete b;

    return 0;
}