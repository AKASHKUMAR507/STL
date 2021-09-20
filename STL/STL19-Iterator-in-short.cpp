#include <bits/stdc++.h>
using namespace std;

int main(){
    // -----range base loop-------------
    // vector<int> v = {1,2,3,4,5};
    // for(int i = 0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // vector<int> :: iterator it;
    // for(it = v.begin(); it!= v.end(); ++it){
    //     cout<<(*it)<<" ";
    // }
    // cout<<endl;

    // ---------------Range base loop-----
    // for(int value : v){  //o(n)
    //     value++;
    //     cout<<value<<" ";
    // }
    // cout<<endl;
    // for(int &value : v){   //o(1)
    //     cout<<value<<" ";
    // }
    // cout<<endl;







    // ---------------in pair-------------
    vector<pair<int , string>> v_p = {{1 , "Akash"}, {2,"Kanhaiya"}};
    // for(pair<int , string> &value1 : v_p){
    //     cout<<value1.first<<" "<<value1.second<<endl;
    // }
    for(auto &value1 : v_p){
        cout<<value1.first<<" "<<value1.second<<endl;
    }
    cout<<endl;
    // --------------------auto--------------------
    vector<int> v = {1,2,3,4,5};
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // for(auto it = v.begin(); it!= v.end(); ++it){
    //     cout<<(*it)<<" ";
    // }
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}