// #include<bits/stdc++.h>
// using namespace std;
// void print(set<string> &s){
//     for(string value : s){
//         cout<<value<<endl;
//     }

//     // for(auto it = s.begin(); it != s.end(); it++){
//     //     cout<<(*it)<<endl;
//     // }

// }
// int main(){
//     set<string>s;
//     s.insert("abc");
//     s.insert("akahs");
//     s.find("abc");

//     auto it = s.find("abc");
    
//     // for(it!= s.end()){
//     //     cout<<(*it)<<endl;
//     // }
//     // print(s);

// }




// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     set<string>s;
//     int n ; 
//     cin>>n;
//     for(int i = 0; i<n; i++){
//         string str;
//         cin>>str;
//         s.insert(str);
//     }
//     for(auto value : s){

//         cout<<value<<endl;

//     }

// }




#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<string> s;
    int n; cin>>n;

    for (int i = 0; i<n; i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    int Q; cin>>Q;
    while(Q--){
        string str; cin>>str;
        if(s.find(str) == s.end()){
            cout<<"\nNO";
        }else{
            cout<<"\nYES";
        }
    }
}

