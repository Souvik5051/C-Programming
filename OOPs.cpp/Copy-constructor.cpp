#include <iostream>
using namespace std;
class souvik{
private:
int weight;
public:
int age;
string name;
 souvik()
    {
        this->weight = 0;
        this->age = 0;
        this->name = " ";
       
    }
int getWeight(){
    return weight;
}
void setWeight(int w){
    this->weight=w;
}
//Copy Constructor
souvik (souvik & obj){
    this->age=obj.age;
    this->weight=obj.weight;
    this->name=obj.name;
    cout<<"Copy constructor is called"<<endl;
}
void print(){
    cout<<this->age<<" "<<this->name<<" "<<this->weight<<endl;
}
};
int main(){
    souvik animal;
    animal.age=12;
    animal.name="souvik";
    animal.setWeight(102);

    souvik b=animal;

    animal.print();
    b.print();

    return 0;
}
