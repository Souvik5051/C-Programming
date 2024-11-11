#include <iostream>
using namespace std;

class Animal{
    public:
    
    Animal(){
        cout<<"I am inside Animal constructor"<<endl;
    }
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Dog:public Animal{
    public:

    Dog(){
        cout<<"I am inside Dog constructor"<<endl;
    }
    //override 
    void speak(){
        cout<<"Barking"<<endl;
    }
};
int main(){
   // Animal* a=new Animal();
    //Dog* d=new Dog();
    //Animal* a=new Dog();
    Dog* a=(Dog*) new Animal();
    return 0;
}