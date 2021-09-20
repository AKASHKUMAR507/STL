#include <iostream>
#include<map>
using namespace std;

int main(){
    map<int,string>m;
    m[1] = "Akash";
    m[2] = "Kumar";
    m[3] = "Yadav";
    m.insert({4,"Sonam"});

    for(auto i:m){
        cout<<i.first<<endl;
    }
    cout<<endl;

    cout<<m.count(4)<<endl;
    cout<<endl;

    m.erase(4);
    for(auto i:m){
        cout<<i.first<<endl;
    }
    cout<<endl;


    


    return 0;
}