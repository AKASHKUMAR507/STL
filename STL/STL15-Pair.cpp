#include <bits/stdc++.h>
using namespace std;

int main(){

    // pair<int , string> p;
    // ----------make pair ----------
    // p = make_pair(2  , "Aaksh");
    // p = {1 , "Aakash"};
    // cout<<p.first<<" "<<p.second<<endl;

    // -----------------copy -------------
    // pair<int , string> p1 = p;
    // pair<int , string> &p1 = p;
    // p1.first = 3;
    // cout<<p.first<<" "<<p.second<<endl;
    // --------------------relation-------------
    // int a[] = {1,2,3};
    // int b[] = {2,3,4};
    // pair<int , int> p_array[3];
    // p_array[0] = {1,2};
    // p_array[1] = {11,22};
    // p_array[2] = {111,222};
    // swap(p_array[0] , p_array[2]);
    // for(int i = 0; i<3; i++){
    //     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    // }
    // ---------------------------------Input----------------
    pair<int, string> p;
    cin>>p.first>>p.second;
    cout<<p.first<<" "<<p.second<<endl;
    
    return 0;
}

