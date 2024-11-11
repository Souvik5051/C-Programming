#include <iostream>
using namespace std;

class abc{
    public:
    
    int x;
    int* y;
    abc(int _x,int _y){
        x=_x;
        y=new int(_y);
    }

    void print() const {
                   
    }
}
int main(){
    
    return 0;
}