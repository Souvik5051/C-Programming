#include <iostream>
using namespace std;
class complex{
    private:
    int real,imag;
    public:
    // complex()
    // {
    //     real = 0;
    //     imag = 0;
    // }
    complex(int r = 0,int i = 0){
       real=r;
       imag=i;
    }
    void show(){
        cout<<real<<" -i"<<imag<<endl;
    }
    complex operator-(complex c){
         complex temp;
         temp.real=real-c.real;
         temp.imag=imag-c.imag;
         return temp;
    }
};
int main(){
    complex c1(3,4);
    complex c2(1,2);
    complex c3(1,2);
    c3=c1-c2;
    c3.show();
    return 0;
}