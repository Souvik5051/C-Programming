#include <iostream>
using namespace std;
class car
{
public:
    int weight;
    int age;
    string name;
    void speedUp()
    {
        cout << "Speed Up" << endl;
    }
};
class Scorpio : public car
{

};
class Fortuna : public car
{
    
};
int main()
{
    Scorpio s11;
    s11.speedUp();
    Fortuna f12;
    f12.speedUp();
    return 0;
}