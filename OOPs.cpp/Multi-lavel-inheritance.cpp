#include <iostream>
using namespace std;
class fruit
{
public:
    string name;
};
class Mango : public fruit
{
public:
    int weight;
};
class Alphanso : public Mango
{
public:
    int sugarLevel;
};
int main()
{
    Alphanso a;
    cout << a.name << " " << a.weight << " " << a.sugarLevel << " " << endl;
    return 0;
}