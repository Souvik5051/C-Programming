#include <iostream>
using namespace std;

class abc{
    public:

    static int x,y;

    // void print(){
    //     //this pointer
    //     cout<<this->x<<" "<<this->y<<endl;
    // }

    void print(){
        cout<<x<<" "<<y<<endl;
    }
};

int abc::x;
int abc::y;

int main(){
    // abc obj1={1,2};
    // abc obj2={4,5};
    // obj1.print();
    // obj2.print();  


    abc obj1;
    obj1.x=1;
    obj1.y=2;
    obj1.print();

    abc obj2;
    obj2.x=10;
    obj2.y=20;
    obj1.print();
    obj2.print();
    return 0;
}