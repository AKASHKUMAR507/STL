#include <iostream>
#include<set>
using namespace std;

int main(){
    set<int>s;
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(4);

    for(int i:s){
        cout<<i<<endl;
    }
    cout<<endl;

    // s.erase(s.begin());
    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for(int i:s){
        cout<<i<<endl;
    }
    cout<<endl;

    cout<<s.count(4)<<endl;
    cout<<s.count(2)<<endl;

    // set<int>::iterator itr = s.find(4);

    // for(auto it=itr;it!=s.end();it++){
    //     cout<<it<<endl;
    // }
    // cout<<endl;




    return 0;
}