#include <iostream>
using namespace std;

// syntax for creating a class
class animal
{

    // State or properties
private:
    int weight;

public:
    int age;
    string name;

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
};
int main()
{
    // Object Creation

    // Static
    //  animal ramesh;
    //  ramesh.age=12;
    //  ramesh.name="Lion";
    //  cout<<"Age of ramesh is : "<<ramesh.age<<endl;
    //  cout<<"Age of ramesh is : "<<ramesh.name<<endl;
    //  ramesh.eat();
    //  ramesh.sleep();

    // //To access the private data member
    // ramesh.setWeight(101);
    // cout<<"Weight of the animal is : "<<ramesh.getWeight()<<endl;

    // Dynamic Memory
    animal *souvik = new animal;

    (*souvik).age = 12;
    (*souvik).name = "Billi";

    // Alternative ways to create the object dynamically
    souvik->age = 12;
    souvik->name = "Cutta";

    souvik->eat();
    souvik->sleep();
    cout << souvik->age << endl;
    cout << souvik->name << endl;

    return 0;
}