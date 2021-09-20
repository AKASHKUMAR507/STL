#include <bits/stdc++.h>
using namespace std;
template<class T>
void display(vector<T>&a){
    for(int i = 0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
}

template <class T1>
void reverseN(vector<T1>&r){
    for(int i =0 ; i<r.size(); i++){
        cout<<r[i]<<" ";
    }  
}

int main(){
    // vector<int>a;
    // int size; cin>>size;
    // for(int i = 0; i<size; i++){
    //     int n; cin>>n;
    //     a.push_back(n);
    // }
    // sort(a.begin(),a.end());
    // display(a);

    vector<int>rev;
    int size; cin>>size;
    for(int i = 0; i<size; i++){
        int n; cin>>n;
        rev.push_back(n);
    }
    reverse(rev.begin(),rev.end());
    // rev.reserve();
    reverseN(rev);

    return 0;
}