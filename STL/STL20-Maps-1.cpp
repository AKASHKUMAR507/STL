//map store key value pair

#include <bits/stdc++.h>
using namespace std;
template<class T1 , class T2>
void print(map<T1 , T2> &m){  // O(lon(n))
    cout<<"Size " <<m.size()<<endl;
    for(auto &it : m){
        cout<<it.first<< " "<<it.second<<endl;
    }
    cout<<endl;
}

int main(){
    map<int , string> m ; //= {{1,"Akash"},{2 ,"kanhaiya"}};
    m[1] = "Akash";  // o(long(n))
    m[2] = "Akas-2";
    m[3] = "Akash-3";
    
    m.insert({5,"Akash"});
    m.insert({4 , "Varsha"});

    auto it = m.find(9); // o(long(n))
    if(it != m.end())
        m.erase(it);  // o(long(n))
    m.clear();
    // if(it == m.end()){
    //     cout<<"No value";
    // }else{
    //     cout<<it->first<<" "<<it->second<<endl;
    // }


    print(m); 

    // map<int , string> :: iterator it;
    // for(it = m.begin() ; it != m.end() ; ++it){
    //     cout<<(it)->first<< " "<<(*it).second<<endl;
    // }
    // cout<<endl;
    // cout<<endl;

    // for(auto &it : m){  /// O(lon(n))
    //     cout<<it.first<< " "<<it.second<<endl;
    // }
    // cout<<endl;
    
    return 0;
}