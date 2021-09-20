/*
Given N String , print unique strings in lexigraohical order
N <= 10^5
|s| <= 100000
*/
// #include <bits/stdc++.h>
// using namespace std;
// template<class T>
// void print(set<T> &s){
//     cout<<"Size "<<s.size()<<endl; //log(n)
//     for(T value : s){
//         cout<<value<<endl;
//     }
//     cout<<endl;
// }
// int main(){
//     set<string> s;
//     int n;
//     cin>>n;
//     for(int i = 0; i<n; i++){
//         string str;
//         cin>>str;
//         s.insert(str);  // log(n)
//     }
//     print(s);
    

//     return 0;
// }
//////////////////////////un ordered set==============
/*
    Given N Strign and Q querues.
    In each query u are given a string print
    Yes if string is present else print No
    N <= 10^6
    |s| <= 100
    Q <= 10^6
*/

#include <bits/stdc++.h>
using namespace std;
template<class T>
void print(set<T> &s){
    cout<<"Size "<<s.size()<<endl; // O(1)
    for(T value : s){
        cout<<value<<endl;
    }
    cout<<endl;
}
int main(){
    unordered_set<string> s;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        string str;
        cin>>str;
        s.insert(str);  // O(1)
    }
    
    int q;cin>>q;
    while(q--){
        string str;
        cin>>str;
        if(s.find(str) == s.end()){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }

    return 0;
}


