/* introsort in c++(
    1 - Quick short 
    2 - Heap sort 
    3 - selection sort 
)
*/
#include <bits/stdc++.h>
using namespace std;
bool should_i_swap(int a , int b){
    if(a > b) return true ; return false; 
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int ct = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            ct++;
            if(should_i_swap(a[i] , a[j])){
                swap(a[i] , a[j]);
            }
        }
    }
    cout<<ct<<endl;
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}