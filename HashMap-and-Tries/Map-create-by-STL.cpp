#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    
    //creation
    unordered_map<string,int>m;

    //Insertion
    pair<string,int> p=make_pair("Scorpio",9);
    m.insert(p);

    pair<string,int>p2("alto",2);
    m.insert(p2);

    m["fortuner"]=10;

    //acess
    cout<<m.at("alto")<<endl;
    cout<<m.at("Scorpio")<<endl;

    cout<<m["fortuner"]<<endl;

    //search
    cout<<m.count("Scorpio")<<endl;
    cout<<m.count("scorpio")<<endl;

    if(m.find("fortuner")!=m.end()){
       cout<<"Fortuner found "<<endl;
    }
    else{
       cout<<"Fortuner not found "<<endl;
    }

    //Size print
    cout<<m.size()<<endl;
    cout<<m["hummer"]<<endl;
    cout<<m.size()<<endl;

    //Printing all entries
    cout<<"Printing all entries : "<<endl;

    for(auto i:m){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
    return 0;
}









