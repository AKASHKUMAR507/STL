#include <bits/stdc++.h>
using namespace std;
template <class T1>
void display(vector<T1> &v){
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

template <class T>

void display2(vector<T> &str1){
    for(int i = 0; i<str1.size();i++){
        cout<<str1[i]<<" ";
    }
}

int main(){
    vector<int>vec;
    
    int size; cin>>size;
    for(int i = 0; i<size; i++){
        int n;
        cin>>n;
        vec.push_back(n);
    }

    display(vec);

    // vector<string>str;
    // int size; cin>>size;
    // for(int i =0; i<size; i++){
    //     string s; cin>>s;
    //     str.push_back(s);
    // }

    // display2(str);

    return 0;
}