#include <bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i = 0; i<n; i++){
    //     cin>>a[i];
    // }
    // cout<<endl;
    // sort(a , a+n);
    // for(int i = 0; i<n; i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // int N;cin>>N;
    // int *ptr = lower_bound(a , a+n , N);  // log(n)
    // if(ptr == (a+n)){
    //     cout<<"Not Found ";
    //     return 0;
    // }
    // // int N;cin>>N;
    // // int *ptr = upper_bound(a , a+n , N); // log(n)
    // // if(ptr == (a+n)){
    // //     cout<<"Not Found ";
    // //     return 0;
    // // }
    // cout<<(*ptr)<<endl;


    // --------------------in vector -------------
    // int n;
    // cin>>n;
    // vector<int>v(n);
    // for(int i = 0; i<n; i++){
    //     cin>>v[i];
    // }
    // sort(v.begin() , v.end());
    // for(int i = 0; i<n; i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // int N; cin>>N;
    // // auto it = lower_bound(v.begin() , v.end() , N);
    // auto it = upper_bound(v.begin() , v.end() , N);
    // if(it == v.end()) {
    //     cout<<"Not found"; 
    //     return 0;
    // }
    // cout<<*it<<endl;

    // -------------------in set ------------------
    int n;
    cin>>n;
    set<int> s;
    map<int , int> m;

    for(int i = 0; i<(int)(1e6); i++){
        // int x;
        // cin>>x;
        s.insert(rand());
    }
    auto it = lower_bound(s.begin() , s.end() , 4); //wrong
    // auto it = lower_bound(4);
    for(int i =0; i<(int)(1e6); i++){
        auto it = s.upper_bound(rand());

    }
    // cout<<(*it)<<endl;

    return 0;
}