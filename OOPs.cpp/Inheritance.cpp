#include <iostream>
using namespace std;
class Animal{
public:
int age;
int weight;
void eat(){
    cout<<"Eating"<<endl;
}
};

//Create a inheritance 
class Dog:public Animal{
 Dog(){
    cout<<"This is Inhertance"<<endl;
 }
};
// class Dog:protected Animal{
//    public:
//    void eat(){
//     cout<<"Eating"<<endl;
//    }
// };
// class Dog:private Animal{
//    public:
//    void eat(){
//     cout<<"Eating"<<endl;
//    }
// };
int main(){
    Dog ;
   
    return 0;
}