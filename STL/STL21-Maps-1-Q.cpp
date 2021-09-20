/*Given N String , Print the Unique Strings in lexographical order with their frequency
N <= 10^5
|s| <= 100
*/
// 10
// abc 
// def
// abc 
// ghi 
// aks 
// def
// yrf
// def
// yfg
// jhash

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string , int> m;
    int n;
    cin>>n;
    for(int i= 0 ; i<n; i++){
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto &it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}
