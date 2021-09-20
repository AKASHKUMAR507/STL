// #include<bits/stdc++.h>
// using namespace std;

// void print(unordered_map<int , string>&m){
//     cout<<m.size()<<endl;
//     for(auto pr:m){
//         cout<<pr.first<<" "<<pr.second<<endl;
//     }
// }

// int main(){
//     unordered_map<int, string> m ;
//     m[1] = "abc1";
//     m[5] = "abc5";
//     m[2] = "abc2";
//     m[3] = "abc3";
//     print(m);   
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string , int> m;

    int n; cin>>n;
    for(int i =0; i<n; i++){
        string s;
        cin>>s;
        m[s]++;
    }
    int q; cin>>q;

    while(q--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }

    return 0;
}