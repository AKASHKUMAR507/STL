#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
 // --------------------------------------------------   
    int min = *min_element(v.begin(), v.end());
    cout<<min<<endl;
// --------------------------------------------------
    int max = *max_element(v.begin() , v.end());
    cout<<max<<endl;
// --------------------------------------------------
    int sum = accumulate(v.begin() , v.end() , 0); // initial sum value
    cout<<sum<<endl;
// --------------------------------------------------
    int ct = count(v.begin() , v.end() , 6);  // which element you want to count
    cout<<ct<<endl;
    
// --------------------------------------------------

    auto it = find(v.begin() , v.end() , 2);
    if(it != v.end()){
        cout<<(*it)<<endl;
        
    }else{
        cout<<"Not found"<<endl;
    }
// --------------------------------------------------
    reverse(v.begin() , v.end());
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;

// --------------------------------------------------

    // you can use in array also 

    


    return 0;
}