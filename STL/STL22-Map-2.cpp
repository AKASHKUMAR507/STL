//map store key value pair

#include <bits/stdc++.h>
using namespace std;
template<class T1 , class T2>
void print(unordered_map<T1 , T2> &m){  // O(1)
    cout<<"Size " <<m.size()<<endl;
    for(auto &it : m){
        cout<<it.first<< " "<<it.second<<endl;
    }
    cout<<endl;
}

int main(){
    // 1 . inbuilt implementation
    // 2 . Time complexity
    // 3 . Valid Key DataType
    unordered_map<int , string> m ; //= {{1,"Akash"},{2 ,"kanhaiya"}};
    m[1] = "Akash";  // o(1)
    m[2] = "Akas-2";
    m[3] = "Akash-3";
    
    m.insert({5,"Akash"});
    m.insert({4 , "Varsha"});

    print(m); 


    // auto it = m.find(9); // o(1)
    // if(it != m.end())
    //     m.erase(it);  // o(1)
    // m.clear();
    // if(it == m.end()){
    //     cout<<"No value";
    // }else{
    //     cout<<it->first<<" "<<it->second<<endl;
    // }


    // print(m); 

    // map<int , string> :: iterator it;
    // for(it = m.begin() ; it != m.end() ; ++it){
    //     cout<<(it)->first<< " "<<(*it).second<<endl;
    // }
    // cout<<endl;
    // cout<<endl;

    // for(auto &it : m){  /// O(1)
    //     cout<<it.first<< " "<<it.second<<endl;
    // }
    // cout<<endl;
    
    return 0;
}