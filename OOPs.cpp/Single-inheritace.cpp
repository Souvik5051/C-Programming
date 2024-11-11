#include <iostream>
using namespace std;
class car
{
public:
    string name;
    int weight;
    int age;
    void speedUp()
    {
        cout << "Speed Up" << endl;
    }
    void breaMaro()
    {
        cout << "Break Maro" << endl;
    }
};
class scorpio : public car
{
};
int main()
{
    scorpio souvik;
    souvik.speedUp();
    return 0;
}

