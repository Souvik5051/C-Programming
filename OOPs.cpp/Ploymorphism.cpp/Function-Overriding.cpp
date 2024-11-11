#include <iostream>
using namespace std;

class Animal{
    public:
    
   virtual void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Dog:public Animal{
    public:
    //override 
    void speak(){
        cout<<"Barking"<<endl;
    }
};
int main(){
    // Animal a;
    // a.speak();
    // Dog d;
    // d.speak();  


    // Animal* a=new Animal();
    // a->speak();

    // Dog* d=new Dog();
    // d->speak();

    //Upcasting
    Animal* a=new Dog();
    a->speak();
    return 0;
}