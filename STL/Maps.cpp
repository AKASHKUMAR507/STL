// #include<bits/stdc++.h>
// using namespace std;
// void print(map<int,string> &m){
//     cout<<m.size()<<endl;
//     for(auto &pr : m){
//         cout<<pr.first<<" "<<pr.second<<endl;
//     }
// }
// int main(){
//     map<int , string> m;
//     m[1] = "abc";
//     m[5] = "cdc";
//     m[3] = "acd";

//     m.insert({4,"afg"});

//     // map<int,string>:: iterator it;
//     // for(it = m.begin(); it!= m.end(); it++){
//     //     cout<<(*it).first << " "<< (*it).second<<endl;
//     // }

//     // cout<<"--------"<<endl;

//     // for(auto &value : m){
//     //     cout<<value.first<< " "<< value.second<<endl;
//     // }

//     m[5] = "akash";

//     // auto it = m.find(2);
//     // if(it==m.end()){
//     //     cout<<"No Value"<<endl;
//     // }else{
//     //     cout<<(*it).first<<" "<<(*it).second<<endl;
//     // }


//     m.erase(3);

//     print(m);



// }




#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string , int> m;
    int n; cin>>n;
    for(int i = 0; i<n; i++){
        string s; cin>>s;
        m[s]++;
    }
    for(auto pr:m){
        cout<<pr.first<< " "<<pr.second<<endl;
    }
    return 0;
}