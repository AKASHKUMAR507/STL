//Iterator Pointer like Structore in c++ of STL
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int> :: iterator it;
    // it = v.begin();
    // cout<<(*it+1)<<endl;

    for(it = v.begin(); it !=v.end(); ++it){
        cout<<(*it)<<endl;
    }
    cout<<endl;

    vector<pair<int, int>> v_p = {{1,2},{3,4},{5,6}};
    vector<pair<int ,int>> :: iterator iter;
    for(iter = v_p.begin(); iter !=v_p.end(); ++iter){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<endl;
    for(iter = v_p.begin(); iter !=v_p.end(); ++iter){
        cout<<(iter->first)<<" "<<(iter->second)<<endl;
    }

    return 0;
}